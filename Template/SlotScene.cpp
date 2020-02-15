#include "SlotScene.h"
#include "SpinButton.h"
#include "../src/Game.h"
#include "GLM/gtx/string_cast.hpp"
#include <SDL_ttf.h>

SlotScene::SlotScene()
{
	start();
}

SlotScene::~SlotScene()
{
}

void SlotScene::draw()
{
	m_pSlotMachine->draw();
	m_pQuitButton->draw();
	m_pSpinButton->draw();
}

void SlotScene::update()
{
}

void SlotScene::clean()
{
}

void SlotScene::handleEvents()
{
}

void SlotScene::start()
{
	m_pSlotMachine = new SlotMachine();
	addChild(m_pSlotMachine);

	m_pQuitButton = new QuitButton();
	addChild(m_pQuitButton);

	m_pSpinButton = new SpinButton();
	addChild(m_pSpinButton);
}
