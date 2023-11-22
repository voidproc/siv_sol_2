#include "../sol.h"

namespace LuaScript
{
	namespace Binding
	{
		void BindPoint(sol::state& state)
		{
			state.new_usertype<Point>("Point",
				sol::constructors<Point(), Point(int32, int32)>(),
				"x", &Point::x,
				"y", &Point::y,
				"set", sol::overload(
					(Point& (Point::*)(Point))&Point::set,
					(Point& (Point::*)(int32, int32))&Point::set)
			);
		};

	}
}
