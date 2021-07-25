//Write a program which accepts one number from user and OFF 7th bit of that number. Return the modified number.
//Input = 79
//Output = 15
/*     
                     <7> 
   iNo = 79 =      0  1  0  0  1  1  1  1
   iMask    =      0  1  0  0  0  0  0  0     (^)   XOR Operator
   ------------------------------------------------------------------
   iResult =       0  0  0  0  1  1  1  1 

*/

#include<stdio.h>

unsigned int OffBit(unsigned int iNo)
{
	unsigned int iMask = 0X00000040;
	unsigned int iResult;
	iResult = iNo ^ iMask;
	return iResult;
}

int main()
{
	
	unsigned int iValue = 0;
	unsigned int iRet = 0;
	printf("Enter the number :\n");
	scanf("%u",&iValue);
	iRet = OffBit(iValue);
	printf("Modified number is :%u\n",iRet);
	return 0;
}