#include "../sol.h"

namespace LuaScript
{
	namespace Binding
	{
		void BindRectF(sol::state& state)
		{
			state.new_usertype<RectF>("RectF",
				sol::constructors<RectF(), RectF(double, double), RectF(Vec2), RectF(double, double, Vec2), RectF(double, double, double, double), RectF(Vec2, Vec2)>(),
				"pos", &RectF::pos,
				"x", &RectF::x,
				"y", &RectF::y,
				"size", &RectF::size,
				"w", &RectF::w,
				"h", &RectF::h,
				"setPos", sol::overload(
					(RectF & (RectF::*)(double, double)) & RectF::setPos,
					(RectF & (RectF::*)(Vec2)) & RectF::setPos),
				"setCenter", sol::overload(
					(RectF & (RectF::*)(double, double)) & RectF::setCenter,
					(RectF & (RectF::*)(Vec2)) & RectF::setCenter),
				"setSize", sol::overload(
					(RectF & (RectF::*)(double, double)) & RectF::setSize,
					(RectF & (RectF::*)(Vec2)) & RectF::setSize),
				"movedBy", sol::overload(
					(RectF(RectF::*)(double, double) const) & RectF::movedBy,
					(RectF(RectF::*)(Vec2) const) & RectF::movedBy),
				"moveBy", sol::overload(
					(RectF & (RectF::*)(double, double)) & RectF::moveBy,
					(RectF & (RectF::*)(Vec2)) & RectF::moveBy),
				"stretched", sol::overload(
					(RectF(RectF::*)(double) const) & RectF::stretched,
					(RectF(RectF::*)(double, double) const) & RectF::stretched,
					(RectF(RectF::*)(Vec2) const) & RectF::stretched,
					(RectF(RectF::*)(double, double, double, double) const) & RectF::stretched),
				"scaled", sol::overload(
					(RectF(RectF::*)(double) const) & RectF::scaled,
					(RectF(RectF::*)(double, double) const) & RectF::scaled,
					(RectF(RectF::*)(Vec2) const) & RectF::scaled),
				"isEmpty", &RectF::isEmpty,
				"hasArea", &RectF::hasArea,
				"centerX", &RectF::centerX,
				"centerY", &RectF::centerY,
				"tl", &RectF::tl,
				"tr", &RectF::tr,
				"br", &RectF::br,
				"bl", &RectF::bl,
				"topCenter", &RectF::topCenter,
				"rightCenter", &RectF::rightCenter,
				"bottomCenter", &RectF::bottomCenter,
				"leftCenter", &RectF::leftCenter,
				"center", &RectF::center,
				"area", &RectF::area);
		}
	}
}
