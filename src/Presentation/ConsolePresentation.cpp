#include "ConsolePresentation.h"

ConsolePresentation::ConsolePresentation(GameApplication& gameApp)
: gameApp(gameApp)
{
}

void ConsolePresentation::Render()
{
	Position snapshot = gameApp.GetSnapshot();
	std::cout << "Player Position: " << snapshot.x << ", " << snapshot.y << std::endl;
}