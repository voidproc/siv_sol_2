#include <Siv3D.hpp> // Siv3D v0.6.13
#include "LuaScript/LuaScript.h"

class Enemy
{
public:
	Enemy(sol::state& state, std::string_view funcName, double defaultPosX)
		: coro_{ state, funcName, defaultPosX }
	{
	}

	void update()
	{
		if (coro_.runnable())
		{
			auto tableState = coro_.run<sol::table>();
			pos_ = tableState.get<Vec2>("pos");
		}
	}

	void draw() const
	{
		Circle{ pos_, 16 }.draw();
	}

private:
	LuaScript::Coroutine coro_;
	Vec2 pos_;
};

void Main()
{
	Scene::SetBackground(ColorF{ 0 });

	Console.open();

	sol::state state = LuaScript::Init();
	state.do_file("script/main.lua");

	Enemy enemy1{ state, "enemy2", Random(32.0, 800.0 - 32.0) };
	Enemy enemy2{ state, "enemy2", Random(32.0, 800.0 - 32.0) };

	while (System::Update())
	{
		enemy1.update();
		enemy2.update();

		enemy1.draw();
		enemy2.draw();
	}
}
