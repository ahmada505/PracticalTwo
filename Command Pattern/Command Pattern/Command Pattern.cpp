// Command Pattern.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "InputHandler.h"

int main()
{
	InputHandler* inputHandler = new InputHandler;
	while (1)
	{
		inputHandler->HandleInput();
	};
    return 0;
}

