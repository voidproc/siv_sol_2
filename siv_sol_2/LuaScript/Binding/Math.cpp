#include "../sol.h"

namespace LuaScript
{
	namespace Binding
	{
		void BindMath(sol::state& state)
		{
			auto tableMath = state.create_table("Math");
			tableMath["Sin"] = (double (*)(double))&Math::Sin;
			tableMath["Cos"] = (double (*)(double))&Math::Cos;
			tableMath["Tan"] = (double (*)(double))&Math::Tan;
			tableMath["Pi"] = Math::Pi;
			tableMath["TwoPi"] = Math::TwoPi;
			tableMath["E"] = Math::E;
		}
	}
}
