//Accept two number from user and calculate its power
//
//Input : 2 4
//Output : 2*2*2*2   (16)

// Input : 4 3 
//Output : 4*4*4  (64)


/*
    iNo1 = 5      iNo2 = 4
	
	5*5*5*5
	
	1*5    =         5
	5*5    =        25
	25*5   =       125
	125*5  =       625
*/
#include<stdio.h>

int Power(int iNo1, int iNo2)
{
	int iCnt = 0;
	int iMult = 1;
	
	if(iNo1<0)
	{
		iNo1 = -iNo1;
	}
	if(iNo2<0)
	{
		iNo2 = -iNo2;
	}
	for(iCnt = 1;iCnt<=iNo2; iCnt++)
	{
		iMult = iMult*iNo1;
	}
	return iMult;
}

int main()
{
	int iValue1=0,iValue2 = 0;
	int iRet = 0;
	
	printf("Enter the first number\n");
	scanf("%d", &iValue1);
	
	printf("Enter the second number\n");
	scanf("%d", &iValue2);
	
	iRet = Power(iValue1, iValue2);
	printf("Result is %d",iRet);
	
	return 0;
}