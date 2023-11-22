#include "../sol.h"

namespace LuaScript
{
	namespace Binding
	{
		void BindUtility(sol::state& state)
		{
			state["Min"] = (double (*)(double, double))&Min;
			state["Max"] = (double (*)(double, double))&Max;
			state["Clamp"] = (double (*)(double, double, double))&Clamp;
			state["InRange"] = (bool (*)(double, double, double))&InRange;
		}
	}
}
