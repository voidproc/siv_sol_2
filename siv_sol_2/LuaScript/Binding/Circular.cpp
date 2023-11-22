#include "../sol.h"

namespace LuaScript
{
	namespace Binding
	{
		void BindCircular(sol::state& state)
		{
			state.new_usertype<Circular>("Circular",
				sol::constructors<Circular(), Circular(double, double), Circular(Vec2)>(),
				"r", &Circular::r,
				"theta", &Circular::theta,
				"toVec2", &Circular::toVec2);
		}
	}
}
