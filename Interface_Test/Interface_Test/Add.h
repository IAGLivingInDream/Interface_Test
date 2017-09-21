#pragma once

#include <iostream>
#include "Interface_Test.h"

class Add:Interface_Test
{
public:
	Add();
	~Add();
	int SetNumber(int a, int b);
	int Result();
	int Release();

private:
	int a_;
	int b_;
};

