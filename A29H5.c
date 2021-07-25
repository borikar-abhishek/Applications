//Write a program which accepts one number and position from user and TOOGLE contents of first and last nibble of the number. Return modified number.
//Nibble is a group of four digits.

//Input       =          F0000000
//Output      =          0000000F

/*     
                                                    
   iNo =     ‭       F  0  0  0  0  0  0  0 ‬   
   iMask =          F  0  0  0  0  0  0  F      (^)XOR operator 
----------------------------------------------------------------------   ‭ 
   iResult          0  0  0  0  0  0  0  F     
*/

#include<stdio.h>

 unsigned int Tooglebit(unsigned int iNo)
{
	unsigned int iMask = 0XF000000F;
	unsigned int iResult = 0;
	
	iResult = iNo ^ iMask;
	return iResult;
	
}

int main()
{
	
	unsigned int iValue = 0;
	int iRet = 0;
	printf("Enter the number :\n");
	scanf("%u",&iValue);
	
	iRet = Tooglebit(iValue);
	printf("Modified number is : %d\n",iRet);
	return 0;
}