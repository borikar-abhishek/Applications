//Write a program which accepts one number and position from user and check whether bit at that position is ON or OFF.
//If bit is one return TRUE otherwise return FALSE.
//Input       =           10    2
//Output      =           TRUE
//Input       =           88  4
//Output      =           TRUE
//Input       =           10  3
//Output      =           FALSE
/*     
                                                    
   iNo = 10  =   ‭                      0  0  0  0  1  0  1  0‬   
   iMask     =                         0  0  0  0  0  0  0  1    
   iMask = iMask<<(iPos-1) =  0  0  0  0  0  0  0  0  0  1  0 ‭‬   ‭ 

*/

#include<stdio.h>
#include<stdbool.h>
 bool ChkBit(unsigned int iNo,int iPos)
{
	unsigned int iMask = 0X00000001;
	unsigned int iResult = 0;
	iMask = iMask<<(iPos-1);
	iResult = iNo & iMask;
	if(iResult == iMask)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

int main()
{
	
	unsigned int iValue = 0, iPos = 0;
	bool bRet;
	printf("Enter the number :\n");
	scanf("%u",&iValue);
	printf("Enter the position:\n");
	scanf("%d",&iPos);
	
	bRet = ChkBit(iValue,iPos);
	if(bRet == true)
	{
		printf("Bit is ON");
	}
	else
	{
		printf("Bit is OFF");
	}
	return 0;
}