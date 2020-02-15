#include "SlotMachine.h"
#include "../src/Game.h"

SlotMachine::SlotMachine()
{
	TheTextureManager::Instance()->load("../Assets/textures/slot.png",
		"slot", TheGame::Instance()->getRenderer());

	glm::vec2 size = TheTextureManager::Instance()->getTextureSize("slot");
	setWidth(size.x);
	setHeight(size.y);

	setPosition(glm::vec2(Config::SCREEN_WIDTH * 0.5f, 200.0f));
	setType(SLOT_MACHINE);
}

SlotMachine::~SlotMachine()
{
}

void SlotMachine::draw()
{
	int x = getPosition().x;
	int y = getPosition().y;

	TheTextureManager::Instance()->draw("slot", x, y,
		TheGame::Instance()->getRenderer(), 0, 255, true);
}

void SlotMachine::update()
{
}

void SlotMachine::clean()
{
}
