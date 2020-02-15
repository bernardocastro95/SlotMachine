#pragma once
#ifndef __SLOT_SCENE__
#define __SLOT_SCENE__
#include "../src/Scene.h"
#include "SlotMachine.h"
#include "QuitButton.h"
#include "SpinButton.h"

class SlotScene : public Scene
{
public:
	SlotScene();
	~SlotScene();

	void draw() override;
	void update() override;
	void clean() override;
	void handleEvents() override;
	void start() override;

private:
	SlotMachine* m_pSlotMachine;
	QuitButton* m_pQuitButton;
	SpinButton* m_pSpinButton;

};
#endif

