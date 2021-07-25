//Write a program which accepts two number from user and display position of common ON bits from that two numbers.
//Input : 10    15        (1010   1111)
//Output : Common bits are : 2nd and 4th bit 

#include<stdio.h>

 void CommonBits(unsigned int iNo1, unsigned int iNo2)
{
	unsigned int iResult1 = 0, iResult2 = 0;
	unsigned iMask = 0x00000001;
	int iCnt = 0, i =0;
	
	
	for(i=1;i<=32;i++)
	{
		iResult1 = iNo1 & iMask;
		iResult2 = iNo2 & iMask;
		
		if((iResult1 == iMask)&&(iResult2 == iMask))
		{
			printf("%d\t",i);
		}
		
		iMask = iMask<<1;
	}
	

	
}

int main()
{
	
	unsigned int iValue1 = 0, iValue2 = 0;
	printf("Enter the first number :\n");
	scanf("%u",&iValue1);
	printf("Enter the second number :\n");
	scanf("%u",&iValue2);
	
	CommonBits(iValue1,iValue2);
	
	return 0;
}