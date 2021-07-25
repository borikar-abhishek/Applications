//Write a program which accepts one number from user and ON its first 4 bits . Return the modified number.
//Input =   73
//Output =  79
//Input:    160
//Output :  175
/*     
                            <4><3><2><1>                         
   iNo = 73  =   ‭0  1  0  0  1  0  0  1‬   
   iMask     =   0  0  0  0  1  1  1  1    (|) Operator                                                     
   ------------------------------------------------------------------
   iResult =     ‭0  1  0  0  1  1  1  1‬   ‭ 

*/

#include<stdio.h>

unsigned int OnBit(unsigned int iNo)
{
	unsigned int iMask = 0X0000000F;
	unsigned int iResult = 0;
	iResult = iNo | iMask;
	return iResult;
}

int main()
{
	
	unsigned int iValue = 0;
	unsigned int iRet = 0;
	printf("Enter the number :\n");
	scanf("%u",&iValue);
	iRet = OnBit(iValue);
	printf("Modified number is :%u\n",iRet);
	return 0;
}