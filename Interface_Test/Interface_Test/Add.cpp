#include <iostream>
#include "Add.h"

using namespace std;

Add::Add()
{
	cout << "creat add" << endl;
	a_ = 0;
	b_ = 0;
}


Add::~Add()
{
	cout << "delete add" << endl;
}

int Add::SetNumber(int a, int b)
{
	this->a_ = a;
	this->b_ = b;
	return 0;
}
int Add::Result()
{
	return a_ + b_;
}
int Add::Release()
{
	delete this;
	return 0;
}
