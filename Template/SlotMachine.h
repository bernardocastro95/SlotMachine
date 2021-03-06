#pragma once
#ifndef __SLOT_MACHINE__
#define __SLOT_MACHINE__
#include "../src/DisplayObject.h"

class SlotMachine : public DisplayObject
{
public:
	SlotMachine();
	~SlotMachine();

	void draw() override;
	void update() override;
	void clean() override;

private:
	double bet;
	double initalAmount = 5000;
	double jackpot = 10000;
};
#endif

