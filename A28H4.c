//Write a program which accepts one number from user and TOGGLE 7th and 10th bit of that number. Return the modified number.
//Input = 137
//Output = 713
//Input : 1600
//Output : 1024
/*     
                         <10>     <7>
   iNo = 137 =      0  0  0  0  1  0  0  0  1  0  0  1
   iMask    =       0  0  1  0  0  1  0  0  0  0  0  0       (^) Operator                                                     
   ------------------------------------------------------------------
   iResult =        ‭0  0  1  0  1  1  0  0  1  0  0  1‬ 

*/

#include<stdio.h>

unsigned int ToogleBit(unsigned int iNo)
{
	unsigned int iMask = 0X00000240;
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