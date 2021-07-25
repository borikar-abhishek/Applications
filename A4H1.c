// Write a program which accepts number from user and display its multiplication of factors.
/*
START
     Accept number from user 
	 For      iCnt<iNo      iCnt = 1........<iNo    with iMult = 1
	        Check if (iNo%iCnt)=0
			If true then multiply that iCnt with iMult      iMult = iMult*iCnt
			If false come out of loop
		Follow the condition till iCnt < iNo
 return iMult Value
STOP
*/ 

#include<stdio.h>

int MultFactor(int iNo)
{
	int iCnt = 0;
	int iMult = 1;
	
	for(iCnt =1;iCnt<iNo; iCnt++)
	{
		if((iNo%iCnt)==0)
		{
		   iMult = iMult * iCnt;
		}
	}
	return iMult;
	
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number = ");
	scanf("%d",&iValue);
	
	iRet = MultFactor(iValue);
	
	printf("Multiplication of factor is =%d", iRet);
	
	
	
	return 0;
}