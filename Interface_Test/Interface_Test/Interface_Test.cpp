#define DLL_INTERFACE_TEST_API _declspec(dllexport)

#include "Interface_Test.h"
#include "Add.h"

int DLL_INTERFACE_TEST_API GetAdd(void** pAdd)
{
	try
	{
		Add* a = new Add();
		*pAdd = (void*)a;
		return 0;
	}
	catch (...)
	{
		return -1;
	}
}

int DLL_INTERFACE_TEST_API GetInterFace(Interface_Test* &pInterface)
{
	try
	{
		Add* a = new Add();
		void* pTemp = nullptr;
		pTemp = static_cast<void*>(a);
		pInterface = static_cast<Interface_Test*>(pTemp);
		return 0;
	}
	catch (...)
	{
		pInterface = nullptr;
		return -1;
	}
}
