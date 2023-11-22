
function enemy(defaultPos_)
  local defaultPos = Vec2.new(defaultPos_)
  local state = { pos = Vec2.new(defaultPos_), }

  while Scene.Time() < 1.0 do
    coroutine.yield(state)
  end

  while Scene.Time() < 2.0 do
    state.pos.x = defaultPos.x + 64 * Periodic.Sine1_1(0.3)
    coroutine.yield(state)
  end

  return state
end

function elapsedTime(timeStart)
  return Scene.Time() - timeStart
end

function enemy2(posX)
  local state = { pos = Vec2.new(posX, -32), }

  coroutine.yield(state)

  -- 画面上部から減速しながら登場
  local time1 = Scene.Time()
  local period1 = 1.0
  while elapsedTime(time1) < period1 do
    local t1_0 = 1.0 - elapsedTime(time1) / period1
    local SPD = 8.0
    state.pos.y = state.pos.y + t1_0 * SPD * 60.0 * Scene.DeltaTime()
    coroutine.yield(state)
  end

  -- 待機
  local time2 = Scene.Time()
  local period2 = 0.6
  local motion2PosY = state.pos.y
  while elapsedTime(time2) < period2 do
    state.pos.y = motion2PosY - 12.0 * Periodic.Sine1_1(1.5, Scene.Time() - time2)
    coroutine.yield(state)
  end

  -- 上部へ逃げていく
  local time3 = Scene.Time()
  local period3 = 1.4
  while state.pos.y > -32 do
    local t0_1 = elapsedTime(time3) / period3
    local SPD = 8.0
    state.pos.y = state.pos.y - t0_1 * SPD * 60.0 * Scene.DeltaTime()
    coroutine.yield(state)
  end

  return state
end

Print('Load main.lua')
