//Write a program which checks whether first and last bit are ON or OFF. First bit means bit number 1 and last bit means bit number 32.

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
typedef unsigned int UINT;

BOOL ChkBit(UINT iNo )
{
	unsigned int iMask = 0X80000001;
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
		printf("First and last bit are ON");
	}
	else
	{
		printf("First and last bit are OFF");
	}
	
	return 0;
}