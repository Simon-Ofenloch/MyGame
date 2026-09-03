#include "World.h"

World::World()
	: nextEntityId(0)
{
}

Entity World::CreateEntity()
{
	return nextEntityId++;
}

void World::AddComponent(Entity entity, const Position& position)
{
	positionStorage[entity] = position;
}

Position World::GetPosition(Entity entity) const
{
	return positionStorage.at(entity);
}