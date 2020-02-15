#pragma once
#ifndef  __QUIT_BUTTON__
#define __QUIT_BUTTON__
#include "../src/Button.h"

class QuitButton : public Button
{
public:
	QuitButton();
	~QuitButton();

	bool ButtonClick() override;
private:
	bool m_isClicked;
};
#endif

