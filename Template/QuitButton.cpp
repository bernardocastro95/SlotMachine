#include "QuitButton.h"

QuitButton::QuitButton()
	:Button(
		"../Assets/textures/quit.png",
		"quitButton",
		QUIT_BUTTON, glm::vec2(400.0f, 400.0f)), m_isClicked(false)
{
	
}

QuitButton::~QuitButton()
{
}

bool QuitButton::ButtonClick()
{
	if(m_mouseOver() && m_mouseButtonClicked)
	{
		if(!m_isClicked)
		{
			m_isClicked = true;
			exit(0);
		}
		return true;
	}
	else
	{
		m_isClicked = false;
	}
	return false;
}
