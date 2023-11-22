#pragma once

#include "sol.h"

namespace LuaScript
{
	namespace Binding
	{
		void BindArray(sol::state& state);
		void BindCircular(sol::state& state);
		void BindEasing(sol::state& state);
		void BindMath(sol::state& state);
		void BindPeriodic(sol::state& state);
		void BindPoint(sol::state& state);
		void BindPrint(sol::state& state);
		void BindRect(sol::state& state);
		void BindRectF(sol::state& state);
		void BindScene(sol::state& state);
		void BindVec2(sol::state& state);
		void BindUtility(sol::state& state);
	}
}
