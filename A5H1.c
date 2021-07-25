// Write a program which accepts number from user and display its multiplication of factors.
/*
START
     Accept number from user 
	 For      iCnt<(iNo/2)      iCnt = 1........<(iNo/2)   with iMult = 1
	        Check if (iNo%iCnt)=0
			If true then multiply that iCnt with iMult      iMult = iMult*iCnt
			If false come out of loop
		Follow the condition till iCnt < (iNo/2)
 return iMult Value
STOP
*/ 

#include<stdio.h>

int MultFact(int iNo)
{
 int iCnt = 0;
 int iMult = 1;
 
 if(iNo<0)
 {
	 iNo = -iNo;
 }	 
 for(iCnt = 1; iCnt<=iNo/2;iCnt++)
 {
	 if((iNo%iCnt)==0)
	 {
		 iMult = iMult*iCnt;
	 }
 }
 return iMult;
	
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number =\n");
	scanf("%d" ,&iValue);
	
	iRet = MultFact(iValue);
	 printf("%d", iRet);
	 
	 return 0;
}