#pragma once

#include <unordered_map>
#include "Entity.h"
#include "Components/Position.h"

class World
{
public:
	World();
	Entity CreateEntity();
	void AddComponent(Entity entity, const Position& position);
	Position GetPosition(Entity entity) const;
private:
	Entity nextEntityId;
	std::unordered_map<Entity, Position> positionStorage;
};	