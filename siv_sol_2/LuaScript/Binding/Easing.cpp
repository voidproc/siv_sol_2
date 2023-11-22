#include "../sol.h"

namespace LuaScript
{
	namespace Binding
	{
		void BindEasing(sol::state& state)
		{
			state["EaseInLinear"] = &EaseInLinear;
			state["EaseOutLinear"] = &EaseOutLinear;
			state["EaseInOutLinear"] = &EaseInOutLinear;

			state["EaseInSine"] = &EaseInSine;
			state["EaseOutSine"] = &EaseOutSine;
			state["EaseInOutSine"] = &EaseInOutSine;

			state["EaseInQuad"] = &EaseInQuad;
			state["EaseOutQuad"] = &EaseOutQuad;
			state["EaseInOutQuad"] = &EaseInOutQuad;

			state["EaseInCubic"] = &EaseInCubic;
			state["EaseOutCubic"] = &EaseOutCubic;
			state["EaseInOutCubic"] = &EaseInOutCubic;

			state["EaseInQuart"] = &EaseInQuart;
			state["EaseOutQuart"] = &EaseOutQuart;
			state["EaseInOutQuart"] = &EaseInOutQuart;

			state["EaseInQuint"] = &EaseInQuint;
			state["EaseOutQuint"] = &EaseOutQuint;
			state["EaseInOutQuint"] = &EaseInOutQuint;

			state["EaseInExpo"] = &EaseInExpo;
			state["EaseOutExpo"] = &EaseOutExpo;
			state["EaseInOutExpo"] = &EaseInOutExpo;

			state["EaseInCirc"] = &EaseInCirc;
			state["EaseOutCirc"] = &EaseOutCirc;
			state["EaseInOutCirc"] = &EaseInOutCirc;

			state["EaseInBack"] = &EaseInBack;
			state["EaseOutBack"] = &EaseOutBack;
			state["EaseInOutBack"] = &EaseInOutBack;

			state["EaseInElastic"] = &EaseInElastic;
			state["EaseOutElastic"] = &EaseOutElastic;
			state["EaseInOutElastic"] = &EaseInOutElastic;

			state["EaseInBounce"] = &EaseInBounce;
			state["EaseOutBounce"] = &EaseOutBounce;
			state["EaseInOutBounce"] = &EaseInOutBounce;
		}
	}
}
