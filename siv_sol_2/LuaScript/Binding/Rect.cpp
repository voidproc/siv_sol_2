#include "../sol.h"

namespace LuaScript
{
	namespace Binding
	{
		void BindRect(sol::state& state)
		{
			state.new_usertype<Rect>("Rect",
				sol::constructors<Rect(), Rect(int32, int32), Rect(Point), Rect(int32, int32, Point), Rect(int32, int32, int32, int32), Rect(Point, Point)>(),
				"pos", &Rect::pos,
				"x", &Rect::x,
				"y", &Rect::y,
				"size", &Rect::size,
				"w", &Rect::w,
				"h", &Rect::h,
				"setPos", sol::overload(
					(Rect & (Rect::*)(int32, int32)) & Rect::setPos,
					(Rect & (Rect::*)(Point)) & Rect::setPos),
				"setCenter", sol::overload(
					(Rect & (Rect::*)(int32, int32)) & Rect::setCenter,
					(Rect & (Rect::*)(Point)) & Rect::setCenter),
				"setSize", sol::overload(
					(Rect & (Rect::*)(int32, int32)) & Rect::setSize,
					(Rect & (Rect::*)(Point)) & Rect::setSize),
				"movedBy", sol::overload(
					(Rect(Rect::*)(int32, int32) const) & Rect::movedBy,
					(Rect(Rect::*)(Point) const) & Rect::movedBy),
				"moveBy", sol::overload(
					(Rect & (Rect::*)(int32, int32)) & Rect::moveBy,
					(Rect & (Rect::*)(Point)) & Rect::moveBy),
				"stretched", sol::overload(
					(Rect(Rect::*)(int32) const) & Rect::stretched,
					(Rect(Rect::*)(int32, int32) const) & Rect::stretched,
					(Rect(Rect::*)(Point) const) & Rect::stretched,
					(Rect(Rect::*)(int32, int32, int32, int32) const) & Rect::stretched),
				"scaled", sol::overload(
					(RectF(Rect::*)(double) const) & Rect::scaled,
					(RectF(Rect::*)(double, double) const) & Rect::scaled,
					(RectF(Rect::*)(Vec2) const) & Rect::scaled),
				"isEmpty", &Rect::isEmpty,
				"hasArea", &Rect::hasArea,
				"centerX", &Rect::centerX,
				"centerY", &Rect::centerY,
				"tl", &Rect::tl,
				"tr", &Rect::tr,
				"br", &Rect::br,
				"bl", &Rect::bl,
				"topCenter", &Rect::topCenter,
				"rightCenter", &Rect::rightCenter,
				"bottomCenter", &Rect::bottomCenter,
				"leftCenter", &Rect::leftCenter,
				"center", &Rect::center,
				"area", &Rect::area);
		}
	}
}
