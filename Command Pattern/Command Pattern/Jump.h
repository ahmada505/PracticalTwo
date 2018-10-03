#pragma once
#include "Command.h"
#include <iostream>

using namespace std;

class JumpCommand : public Command
{
public:
	virtual void execute() { jumping(); }

	void jumping()
	{
		cout << "jumping up" << endl;
	}
};

