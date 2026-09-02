#include "../Application/GameApplication.h"
#include <iostream>

class ConsolePresentation
{
public:
	ConsolePresentation(GameApplication& app);

	void Render();

private:
	GameApplication& gameApp;
};