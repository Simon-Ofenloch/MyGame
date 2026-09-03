#pragma once
#include "../Core/ECS/World.h"

class GameApplication
{
public:
	GameApplication(World& world);

	Position GetSnapshot() const;
	void Update();

private:
	void CreateSnapshot();
	Position snapshot;
	World& world;
	Entity player;
};