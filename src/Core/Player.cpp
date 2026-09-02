#include "Player.h"

Player::Player(std::string name, int health, int level)
	: name(name), health(health), level(level), position({0, 0})
{
}

Position Player::GetPosition() const
{
	return position;
}

void Player::Move(float x, float y)
{
	position.x += x;
	position.y += y;
}

void Player::TakeDamage(int damage)
{
	health -= damage;
	if (health < 0)
		health = 0;
}

void Player::Heal(int amount)
{
	health += amount;
	if (health > 100)
		health = 100;
}