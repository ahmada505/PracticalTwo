#include "stdafx.h"
#include "InputHandler.h"

#include "MeleeCommand.h"
#include "Jump.h"
#include "CrouchCommand.h"
#include "FireCommand.h"
#include "shieldCommand.h"
#include <iostream>
#include <windows.h>

using namespace std;

void InputHandler::HandleInput()
{
	if (GetKeyState('A') & 0x8000) {
		buttonA_ = new MeleeCommand();
		buttonA_->execute();
	}
	else if (GetKeyState('Y') & 0x8000) {
		buttonY_ = new JumpCommand();
		buttonY_->execute();
	}
	else if (GetKeyState('X') & 0x8000) {
		buttonX_ = new CrouchCommand();
		buttonX_->execute();
	}
	else if (GetKeyState('Z') & 0x8000) {
		buttonZ_ = new shieldCommand();
		buttonZ_->execute();
	}
	else if (GetKeyState('D') & 0x8000) {
		buttonD_ = new FireCommand();
		buttonD_->execute();
	}
}


InputHandler::InputHandler()
{
}


InputHandler::~InputHandler()
{
}