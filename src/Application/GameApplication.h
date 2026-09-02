#pragma once
#include "../Core/Player.h"

class GameApplication
{
public:
	GameApplication();

	Position GetSnapshot() const;
	void Update();

private:
	void CreateSnapshot();
	Player player;
	Position snapshot;
};