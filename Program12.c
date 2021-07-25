//Accept number from user and return its factorial                        using for loop
//
//Input : 5
//Output : 5*4*3*2*1   (120)

// Input : 4
//Output : 4*3*2*1  (24)

#include<stdio.h>

int Fact(int iNo)
{
	int iCnt = 0;
	int iFact = 1;
	
	if(iNo<0)
	{
		iNo = -iNo;
	}
	for(iCnt= 1; iCnt<=iNo;iCnt++)
	{
	    iFact = iFact*iCnt;                                                                                 //	iFact = iFact*(iFact-1); Mera ye logic galat 
	}
	return iFact;
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the  number\n");
	scanf("%d", &iValue);
	
	
	iRet = Fact(iValue);
	printf("Factorial is %d",iRet);
	
	return 0;
}