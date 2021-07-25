//Write a program which accept range from user and return addition of numbers in between that range.(Range should contain only positive numbers only)
//Input :    23 30
//Output :   212
//Input :    10 18
//Output :   126  
//Input :  -10 2
//Output :  Invalid Range 

#include<stdio.h>

int RangeSum(int iNo1, int iNo2)
{
	int iSum = 0, iCnt = 0;
	if(iNo1<0 && iNo2<0)
	{
		printf("Invalid Range");
	}
	if(iNo1>iNo2)
	{
		printf("Invalid Range");
	}
	for(iCnt =iNo1 ; iCnt<=iNo2; iCnt++)
	{
		iSum = iSum + iCnt;
	}
	return iSum;
	
}	


int main()
{
	int iValue1 = 0, iValue2 = 0, iRet = 0;
	
	printf("Enter the starting point :\n");
	scanf("%d",&iValue1);
	printf("Enter the ending point :\n");
	scanf("%d",&iValue2);
	
	iRet = RangeSum(iValue1,iValue2);
	printf("Sum is : %d",iRet);
	return 0;
}