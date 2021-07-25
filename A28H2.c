//Write a program which accepts one number from user and OFF 7th and 10th bit of that number. Return the modified number.
//Input = 577
//Output = 1
/*     
                         <10>     <7>   
   iNo = 577 =      ‭0  0  1  0  0  1  0  0  0  0  0  1‬
   iMask    =       1  1  0  1  1  0  1  1  1  1  1  1       (&) AND Operator                                
   ------------------------------------------------------------------
   iResult =        0  0  0  0  0  0  0  0  0  0  0  1 

*/

#include<stdio.h>

unsigned int OffBit(unsigned int iNo)
{
	unsigned int iMask = 0XFFFFFDBF;
	unsigned int iResult = 0;
	iResult = iNo & iMask;
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