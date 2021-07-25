// Accept number from user and display difference of summation of its factors and non factors.


#include<stdio.h>

int Difference(int iNo)
{
	int iCnt = 0,iSum1 =0 , iSum2 = 0, iDiff = 0;
	
	for(iCnt = 1;iCnt<=iNo;iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			iSum1 = iSum1 + iCnt;
		}
		else
		{
			iSum2 = iSum2 + iCnt;
		}		
	}
	return iSum1 - iSum2;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	printf("Enter the number : \n");
	scanf("%d",&iValue);
	
	iRet = Difference(iValue);
	printf("Difference is : %d",iRet);
	
	return 0;
}