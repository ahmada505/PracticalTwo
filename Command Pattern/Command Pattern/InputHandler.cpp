#include "stdafx.h"
#include "InputHandler.h"
#include <iostream>

using namespace std;

InputHandler::InputHandler()
{
	if (isPressed()) buttonX_->execute();
	else if (isPressed(BUTTON_Y)) buttonY_->execute();
	else if (isPressed(BUTTON_A)) buttonA_->execute();
	else if (isPressed(BUTTON_B)) buttonB_->execute();
}


InputHandler::~InputHandler()
{
}
