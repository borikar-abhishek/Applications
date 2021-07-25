//Write a program which accepts one number from user and count number of ON (1) bits in it without using % and / OPERATORS.
//Input : 11
//Output : 3

#include<stdio.h>

 unsigned int CountBit1(unsigned int iNo)
{
	unsigned int iMask = 0X00000001;
	unsigned int iResult = 0;
	int iCnt = 0 ,i =0;
	
	for(i=1;i<=32;i++)
	{
		iResult = iNo & iMask;
		
		if(iResult == iMask)
		{
			iCnt++;
		}
		iMask = iMask<<1;
	}
	return iCnt;
	
}

int main()
{
	
	unsigned int iValue = 0;
	int iRet = 0;
	printf("Enter the number :\n");
	scanf("%u",&iValue);
	
	iRet = CountBit1(iValue);
	printf("Modified number is : %d\n",iRet);
	return 0;
}