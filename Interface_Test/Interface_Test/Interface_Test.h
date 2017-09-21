#pragma once
#ifdef  DLL_INTERFACE_TEST_API
#else
#define DLL_INTERFACE_TEST_API _declspec(dllimport)
#endif
#include <iostream>

int DLL_INTERFACE_TEST_API GetAdd(void** pAdd);


class Interface_Test
{
public:
	Interface_Test()
	{
		std::cout << "create interface" << std::endl;
	};
	virtual ~Interface_Test()
	{
		std::cout << "distory interface" << std::endl;
	};

	virtual int SetNumber(int a, int b){ return 1; }
	virtual int Result(){ return 1; }
	virtual int Release(){ return 1; }
};

int DLL_INTERFACE_TEST_API GetInterFace(Interface_Test* &);