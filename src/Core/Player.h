#pragma once
#include <string>

// using namespace std;

struct Position
{
	float x;
	float y;
};

class Player
{
public:
	Player(std::string name, int health, int level);

	void Move(float x, float y);
	void TakeDamage(int damage);
	void Heal(int amount);
	Position GetPosition() const;

private:
	std::string name;
	int health;
	int level;
	Position position;
};