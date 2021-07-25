//Write a program which accepts one number , two position from user and check whether bit at first or bit at second position is ON or OFF.
//Input : iNo = 10    iPos1 = 3  iPos2 = 7
//Output : TRUE

#include<stdio.h>
#include<stdbool.h>

/*                        <3>                         <7>           
  iNo =  10 =    ‭0 0 0 0 1 0 1 0                     0 0 0 0 1 0 1 0     
  iMask  =       0 0 0 0 0 0 0 1                     0 0 0 0 0 0 0 1
After shifting : 0 0 0 0 0 1 0 0   (&) operator      0 1 0 0 0 0 0 0
-------------------------------------------------------------------------
  ‬iResult1       0 0 0 0 0 0 0 0          iReult2 =  0 0 0 0 0 0 0 0 
  */
  
  
bool ChkBit(unsigned int iNo,unsigned int iPos1, unsigned int iPos2)
{
	unsigned int iResult1 = 0, iResult2 = 0;
	unsigned int iMask = 0X00000001;
	
	iMask = iMask<<(iPos1 - 1);
	iResult1 = iNo & iMask;
	
	iMask = iMask<<(iPos2 - 1);
	iResult2 = iNo & iMask;
	
	if((iResult1 == iMask)||(iResult2 == iMask))
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
	
	unsigned int iValue = 0, iPos1 =0 , iPos2 = 0;
	bool bRet;
	printf("Enter the  number :\n");
	scanf("%u",&iValue);
	printf("Enter first position :\n");
	scanf("%u",&iPos1);
	printf("Enter second position :\n");
	scanf("%u",&iPos2);
	
	bRet = ChkBit(iValue,iPos1,iPos2);
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