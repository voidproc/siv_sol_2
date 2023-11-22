#pragma once

#include <type_traits>

namespace LuaScript
{
	class Coroutine
	{
		sol::state& state_;
		sol::thread thread_;
		sol::coroutine coroutine_;

	public:
		Coroutine(sol::state& state, std::string_view funcName)
			:
			state_{ state },
			thread_{ sol::thread::create(state) }
		{
			coroutine_ = thread_.state()[funcName];
		}

		template <class Arg>
		Coroutine(sol::state& state, std::string_view funcName, Arg arg)
			: Coroutine{ state, funcName }
		{
			coroutine_(arg);
		}

		template <class Ret>
		Ret run()
		{
			if constexpr (std::same_as<Ret, void>)
			{
				coroutine_();
			}
			else
			{
				return coroutine_().get<Ret>();
			}
		}

		bool runnable() const
		{
			return coroutine_.runnable() && (coroutine_.status() == sol::call_status::yielded);
		}

		sol::call_status status() const
		{
			return coroutine_.status();
		}
	};
}
