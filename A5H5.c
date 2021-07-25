//Write a program which accepts number from user and return difference between summation of all its factors and non factors.

#include<stdio.h>

int FactDiff(int iNo)
{
	int iCnt = 0;
	int iSum1 = 0;
	int iSum2 = 0;
	int iDiff = 0;
	
	for(iCnt = 1; iCnt<iNo; iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			iSum1 = iSum1 + iCnt;
		}
		else
		{
			iSum2 = iSum2 + iCnt;
		}
		iDiff = iSum1 - iSum2;
	}
	return iDiff;
	
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number :\n");
	scanf("%d",&iValue);
	
	iRet = FactDiff(iValue);
	printf("Difference between summation of all its factor and non factor is : %d",iRet);
	
	return 0;
}