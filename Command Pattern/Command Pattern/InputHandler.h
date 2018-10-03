#pragma once
#include "Command.h"

class InputHandler
{
public:
	InputHandler();
	~InputHandler();
	void HandleInput();

private:
	Command* buttonX_;
	Command* buttonY_;
	Command* buttonA_;
	Command* buttonD_;
	Command* buttonZ_;
};


