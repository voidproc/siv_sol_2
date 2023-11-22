#include "../sol.h"

namespace LuaScript
{
	namespace Binding
	{
		void BindVec2(sol::state& state)
		{
			state.new_usertype<Vec2>("Vec2",
				sol::constructors<Vec2(), Vec2(Vec2), Vec2(double, double)>(),
				"x", &Vec2::x,
				"y", &Vec2::y,
				"set", sol::overload(
					(Vec2& (Vec2::*)(Vec2))&Vec2::set,
					(Vec2& (Vec2::*)(double, double))&Vec2::set),
				"movedBy", sol::overload(
					(Vec2(Vec2::*)(Vec2) const)&Vec2::movedBy,
					(Vec2(Vec2::*)(double, double) const)&Vec2::movedBy),
				"length", &Vec2::length,
				"withLength", &Vec2::withLength,
				"setLength", &Vec2::setLength,
				"limitLength", &Vec2::limitLength,
				"lerp", &Vec2::lerp,
				"distanceFrom", sol::overload(
					(double (Vec2::*)(double, double) const)&Vec2::distanceFrom,
					(double (Vec2::*)(Vec2) const)&Vec2::distanceFrom)
			);
		}
	}
}
