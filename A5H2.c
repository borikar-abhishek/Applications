//Write a program which accept number from user and display its factors in decreasing order 

#include<stdio.h>

int FactRev(int iNo)
{
	int iCnt = 0;
	
	for(iCnt = iNo/2; iCnt<=iNo/2;iCnt--)
	{
		if((iNo%iCnt)==0)
		{
			printf("%d",iCnt);
		}
	}
	return iCnt;
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	printf("Enter the value =\n");
	scanf("%d",&iValue);
	
	iRet = FactRev(iValue);
	printf("Factors in Reverse order is = %d",iRet);
	
	return 0;
}