#include "../sol.h"

namespace LuaScript
{
	namespace Binding
	{
		void BindScene(sol::state& state)
		{
			auto table = state.create_table("Scene");
			table["Time"] = &Scene::Time;
			table["DeltaTime"] = &Scene::DeltaTime;
			table["Width"] = &Scene::Width;
			table["Height"] = &Scene::Height;
			table["Size"] = &Scene::Size;
			table["Center"] = &Scene::Center;
			table["CenterF"] = &Scene::CenterF;
			table["Rect"] = &Scene::Rect;
		}
	}
}
