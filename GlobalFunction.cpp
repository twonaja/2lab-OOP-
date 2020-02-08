#include "GlobalFunction.h"

MyString concat(char* pStr, ...)
{
	char** pTmp = &pStr;
	size_t size = 0;
	size_t saveCondit = 0;
	while (*pTmp != nullptr)
	{
		size += strlen(*pTmp);
		pTmp++;
	}
	
	char* pTempStr = new char[size + 1];
	pTmp = &pStr;
	while (*pTmp != nullptr)
	{
		for (size_t i = 0; i < strlen(*pTmp); i++)
		{
			pTempStr[size - (size - saveCondit)] = (*pTmp)[i];
			saveCondit++;
		}
		pTmp++;
	}

	return MyString(pTempStr);
}
