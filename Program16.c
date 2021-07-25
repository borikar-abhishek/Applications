//Accept number from user and return the addition of its factor
//
//Input : 6
//Output : (6) 1+2+3

// Input : 12
//Output : (16) 1+2+3+4+6

// Input : 6
// Output : 1 2 3 6

                    


#include<stdio.h>
int  FactorsSum(int iNo)
{
	int iCnt = 0;
	int iSum = 0;
	if(iNo<0)
	{
		iNo = -iNo;
	}
	
	for(iCnt =1;iCnt<=iNo/2;iCnt++)
	{
		if((iNo%iCnt) == 0)
		{
			iSum = iSum + iCnt;
		}
	}
	return iSum;
}
//Time Complexity = O(N/2)
int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the  number\n");
	scanf("%d", &iValue);
	
	iRet = FactorsSum(iValue);
	
	printf("Summation is= %d \n",iRet);
	
	
	return 0;
}