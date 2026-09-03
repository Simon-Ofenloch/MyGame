#include "GameApplication.h"

GameApplication::GameApplication(World& world)
	: world(world), player(world.CreateEntity()), snapshot({ 0.0f, 0.0f })
{
	world.AddComponent(player, snapshot);
}

Position GameApplication::GetSnapshot() const
{
	return snapshot;
}

void GameApplication::CreateSnapshot()
{
	snapshot = world.GetPosition(player);
}

void GameApplication::Update()
{
	// player.Move(1, 1);
	CreateSnapshot();
}