#include "Application/GameApplication.h"
#include "Presentation/ConsolePresentation.h"
int main()
{
	GameApplication app;
	ConsolePresentation renderer(app);
	// Loop to update the game state and print the snapshot (not a loop yet)
	app.Update();
	renderer.Render();

	return 0;
}