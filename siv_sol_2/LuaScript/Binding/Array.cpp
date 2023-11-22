#include "../sol.h"

namespace s3d
{
	bool operator <=>(const Vec2&, const Vec2&) noexcept
	{
		return false;
	}

	bool operator <(const Vec2&, const Vec2&) noexcept
	{
		return false;
	}

	bool operator <=(const Vec2&, const Vec2&) noexcept
	{
		return false;
	}
}

namespace LuaScript
{
	namespace Binding
	{
		namespace
		{
			template <class T>
			void BindArray_(sol::state& state, const char* className)
			{
				using ArrayType = Array<T>;

				state.new_usertype<ArrayType>(className,
					sol::constructors<sol::types<>>(),
					"iterable", [](ArrayType& self) { return sol::as_container(self); });
			}
		}

		void BindArray(sol::state& state)
		{
			BindArray_<double>(state, "ArrayDouble");
			BindArray_<Vec2>(state, "ArrayVec2");
		}
	}
}
