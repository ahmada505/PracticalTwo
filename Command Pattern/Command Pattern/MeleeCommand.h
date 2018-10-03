#pragma once
#include "Command.h"
#include <iostream>

using namespace std;

class MeleeCommand: public Command
{
public:
	virtual void execute() { meleeing(); }

	void meleeing() 
	{
		cout << "melee attack" << endl;
	}
};

