//Write a program which checks whether 15th bit is ON or OFF.

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
typedef unsigned int UINT;

BOOL ChkBit(UINT iNo )
{
	unsigned int iMask = 0X00004000;
	unsigned int iResult = 0;
	iResult = iNo & iMask;
	if(iResult==iMask)
	{
		return TRUE;
	}
	else 
	{
		return FALSE;
	}
}

int main()
{
	unsigned int iValue = 0;
	BOOL bRet = FALSE;
	printf("Enter the number :\n");
	scanf("%u",&iValue);
	
	bRet = ChkBit(iValue);
	
	if(bRet == TRUE)
	{
		printf("15th bit is ON");
	}
	else
	{
		printf("15th bit is OFF");
	}
	
	return 0;
}