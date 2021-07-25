//Write a program which checks whether 7th,8th abd 9th bit are ON or OFF.

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
typedef unsigned int UINT;

BOOL ChkBit(UINT iNo )
{
	unsigned int iMask = 0X000001C0;
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
		printf("7th, 8th and 9th bit are ON");
	}
	else
	{
		printf("7th,8th and 9th bit are OFF");
	}
	
	return 0;
}