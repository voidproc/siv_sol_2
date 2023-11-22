#include "../sol.h"

namespace LuaScript
{
	namespace Binding
	{
		void BindPeriodic(sol::state& state)
		{
			auto table = state.create_table("Periodic");

			table["Jump0_1"] = sol::overload(
				[](double periodSec) { return Periodic::Jump0_1(periodSec); },
				[](double periodSec, double t) { return Periodic::Jump0_1(periodSec, t); });

			table["Jump1_1"] = sol::overload(
				[](double periodSec) { return Periodic::Jump1_1(periodSec); },
				[](double periodSec, double t) { return Periodic::Jump1_1(periodSec, t); });

			table["Sawtooth0_1"] = sol::overload(
				[](double periodSec) { return Periodic::Sawtooth0_1(periodSec); },
				[](double periodSec, double t) { return Periodic::Sawtooth0_1(periodSec, t); });

			table["Sawtooth1_1"] = sol::overload(
				[](double periodSec) { return Periodic::Sawtooth1_1(periodSec); },
				[](double periodSec, double t) { return Periodic::Sawtooth1_1(periodSec, t); });

			table["Sine0_1"] = sol::overload(
				[](double periodSec) { return Periodic::Sine0_1(periodSec); },
				[](double periodSec, double t) { return Periodic::Sine0_1(periodSec, t); });

			table["Sine1_1"] = sol::overload(
				[](double periodSec) { return Periodic::Sine1_1(periodSec); },
				[](double periodSec, double t) { return Periodic::Sine1_1(periodSec, t); });

			table["Square0_1"] = sol::overload(
				[](double periodSec) { return Periodic::Square0_1(periodSec); },
				[](double periodSec, double t) { return Periodic::Square0_1(periodSec, t); });

			table["Square1_1"] = sol::overload(
				[](double periodSec) { return Periodic::Square1_1(periodSec); },
				[](double periodSec, double t) { return Periodic::Square1_1(periodSec, t); });

			table["Triangle0_1"] = sol::overload(
				[](double periodSec) { return Periodic::Triangle0_1(periodSec); },
				[](double periodSec, double t) { return Periodic::Triangle0_1(periodSec, t); });

			table["Triangle1_1"] = sol::overload(
				[](double periodSec) { return Periodic::Triangle1_1(periodSec); },
				[](double periodSec, double t) { return Periodic::Triangle1_1(periodSec, t); });
		}
	}
}
