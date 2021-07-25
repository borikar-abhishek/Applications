//Write a program which accepts one number from user and check whether 9th or 12th bit is ON or OFF.
//Input : 257
//Output : TRUE

#include<stdio.h>
#include<stdbool.h>

/*              <12>   <9>                                                     <12>   <9>
  iNo =   257 =  ‭0 0 0 1 0 0 0 0 0 0 0 1                           iNo = 257 =   0 0 0 1 0 0 0 0 0 0 0 1
  iMask1 =       0 0 0 1 0 0 0 0 0 0 0 0    (&) AND operator       iMask2 =      1 0 0 0 0 0 0 0 0 0 0 0 
--------------------------------------------------------------------------------------------------------------------
  ‬iResult1       0 0 0 1 0 0 0 0 0 0 0 0                           iResult2 =    0 0 0 0 0 0 0 0 0 0 0 0 
*/
bool ChkBit(unsigned int iNo)
{
	unsigned int iResult1 = 0, iResult2 = 0;
	unsigned int iMask1 = 0x00000100;
	unsigned int iMask2 = 0x00000800;
	
	iResult1 = iNo & iMask1;
	iResult2 = iNo & iMask2;
		
		if((iResult1 == iMask1)||(iResult2 == iMask2))
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
	
	unsigned int iValue = 0;
	bool bRet;
	printf("Enter the  number :\n");
	scanf("%u",&iValue);
	
	bRet = ChkBit(iValue);
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