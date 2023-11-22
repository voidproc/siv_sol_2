#include "LuaScript.h"
#include "Binding.h"

namespace LuaScript
{
	sol::state Init()
	{
		sol::state state;
		state.open_libraries();

		Binding::BindArray(state);
		Binding::BindCircular(state);
		Binding::BindEasing(state);
		Binding::BindMath(state);
		Binding::BindPeriodic(state);
		Binding::BindPoint(state);
		Binding::BindPrint(state);
		Binding::BindRect(state);
		Binding::BindRectF(state);
		Binding::BindScene(state);
		Binding::BindUtility(state);
		Binding::BindVec2(state);

		return state;
	}
}
