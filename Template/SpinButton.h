#pragma once
#ifndef __SPIN_BUTTON__
#define __SPIN_BUTTON__
#include "../src/Button.h"

class SpinButton : public Button
{
public:
	SpinButton();
	~SpinButton();
	bool ButtonClick() override;
private:
	bool m_isClicked;
};
#endif
