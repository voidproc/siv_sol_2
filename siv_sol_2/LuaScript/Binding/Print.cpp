#include "../sol.h"

namespace LuaScript
{
	namespace Binding
	{
		namespace
		{
			template <class T>
			void Print_(T value)
			{
				s3d::Print << value;
			}
		}

		void BindPrint(sol::state& state)
		{
			state.set_function("Print", sol::overload(
				Print_<int>,
				Print_<double>,
				Print_<bool>,
				Print_<const std::u32string&>,
				Print_<const Vec2&>));
		}
	}
}
