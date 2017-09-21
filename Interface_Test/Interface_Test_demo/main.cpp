#include <iostream>

#include "../Interface_Test/Interface_Test.h"
using namespace std;

int main(int argc, char* argv[])
{
	//void* void_interface_test;
	//GetAdd(&void_interface_test);
	//Interface_Test* interface_test = (Interface_Test*)void_interface_test;
	Interface_Test* interface_test=nullptr;
	cout << interface_test << endl;
	GetInterFace(interface_test);
	cout << interface_test << endl;
	interface_test->SetNumber(1, 2);
	int c = interface_test->Result();
	cout << c <<endl;
	interface_test->Release();
	system("Pause");
}