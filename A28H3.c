//Write a program which accepts one number from user and TOGGLE 7th bit of that number. Return the modified number.
//Input = 137
//Output = 201
//Input : 168
//Output : 232
/*     
                      <7>
   iNo = 137 =      1  0  0  0  1  0  0  1
   iMask    =       0  1  0  0  0  0  0  0     (^) Operator                                                     
   ------------------------------------------------------------------
   iResult =        1  1  0  0  1  0  0  1 

*/

#include<stdio.h>

unsigned int ToogleBit(unsigned int iNo)
{
	unsigned int iMask = 0X00000040;
	unsigned int iResult = 0;
	iResult = iNo ^ iMask;
	return iResult;
}

int main()
{
	
	unsigned int iValue = 0;
	unsigned int iRet = 0;
	printf("Enter the number :\n");
	scanf("%u",&iValue);
	iRet = ToogleBit(iValue);
	printf("Modified number is :%u\n",iRet);
	return 0;
}