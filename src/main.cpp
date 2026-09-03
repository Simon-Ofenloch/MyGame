#include "Application/GameApplication.h"
#include "Presentation/ConsolePresentation.h"
#include "Core/ECS/World.h"
#include "Core/ECS/Entity.h"
int main()
{
	World world;
	GameApplication app(world);
	ConsolePresentation renderer(app);
	// Loop to update the game state and print the snapshot (not a loop yet)
	app.Update();
	renderer.Render();

	return 0;
}