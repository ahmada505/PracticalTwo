#pragma once
#include "Command.h"

class shieldCommand : public Command
{
public:
	virtual void execute() { shielding(); }
};

