//Write a program which accepts one number and range of position from user. Toggle all bits from that range.
//Input : iNo = 10    iStart = 9  iEnd = 13
//Output : Modified number after toogling the bit from range is :  

#include<stdio.h>
/*
iNo = 10    iStart = 9     iEnd = 13

              <13>  <12>  <11>  <10>  <9>  <8>  <7>  <6>  <5>  <4>  <3>  <2>  <1>                                              
  iNo =  10 =  0     0     0      0    0    0    0    0    0    1    0    1    0
  iMask  =     0     0     0      0    0    0    0    0    0    0    0    0    1                      
--------------------------------------------------------------------------------------------
  ‬iResult      1     1     1      1    1    0    0    0    0    1    0    1    0                 
  */
  
  
unsigned int ToogleBitRange(unsigned int iNo,unsigned int iStart, unsigned int iEnd)
{
	unsigned int iResult = 0, iResult1 = 0;
	unsigned int iMask = 0X00000001;
	int i = 0;
		
	iMask = iMask<<(iStart-1);
	
	for(i= iStart;i<=iEnd;i++)
	{
		iResult = iNo ^ iMask;
		iMask = iMask<<1;
	}
	return iResult;

}

int main()
{
	
	unsigned int iValue = 0 ,iStart =0 , iEnd = 0;
	int iRet = 0;
	printf("Enter the  number :\n");
	scanf("%u",&iValue);
	printf("Enter starting point :\n");
	scanf("%u",&iStart);
	printf("Enter ending point :\n");
	scanf("%u",&iEnd);
	
	iRet = ToogleBitRange(iValue,iStart,iEnd);
	
	printf("Modified number after toogling the bits of the range %d to %d is : %u",iStart,iEnd,iRet);
	
	return 0;
}