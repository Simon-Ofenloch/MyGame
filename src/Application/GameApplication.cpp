#include "GameApplication.h"

GameApplication::GameApplication()
	: player("snakak", 100, 1)
{
}

Position GameApplication::GetSnapshot() const
{
	return snapshot;
}

void GameApplication::CreateSnapshot()
{
	snapshot = player.GetPosition();
}

void GameApplication::Update()
{
	player.Move(1, 1);
	CreateSnapshot();
}