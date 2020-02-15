#include  "SpinButton.h"

SpinButton::SpinButton()
	:Button(
		"../Assets/textures/spin.png",
		"spinButton",
		SPIN_BUTTON, glm::vec2(200.0f, 400.0f)), m_isClicked(false)
{
}

SpinButton::~SpinButton()
{
}

bool SpinButton::ButtonClick()
{
	if (m_mouseOver() && m_mouseButtonClicked)
	{
		if (!m_isClicked)
		{
			m_isClicked = true;
		}
		return true;
	}
	else
	{
		m_isClicked = false;
	}
	return false;
}
