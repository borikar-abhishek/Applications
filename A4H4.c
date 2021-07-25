//Write a program which accepts number from user and return summation of all its non factor.
//
//Input : 12
//Output : 5 7 8 9 10 11  (50)
//
//Input : 13
//Output : 2 3 4 5 6 7 8 9 10 11 12  (77)

#include<stdio.h>

int SumNonFact(int iNo)
{
	int iCnt = 0;
	int iSum = 0;
	
	for(iCnt =1; iCnt<=iNo;iCnt++)
	{
		if((iNo%iCnt)!=0)                        
		{
			iSum = iSum + iCnt;
		}
	}
	return iSum;
	
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	printf("Enter the value=\n");
	scanf("%d",&iValue);
	
	iRet = SumNonFact(iValue);
	printf("Summation of Non Factor of number is : \n");
	printf("%d\n",iRet);
	
	return 0;
}