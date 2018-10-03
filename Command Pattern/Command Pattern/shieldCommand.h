#pragma once
#include "Command.h"
#include <iostream>

using namespace std;

class shieldCommand : public Command
{
public:
	virtual void execute() { shielding(); }

	void shielding()
	{
		cout << "shield deflect" << endl;
	}
};

