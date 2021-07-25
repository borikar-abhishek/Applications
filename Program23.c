//Accept two number from user and find frequency of second number in first number.
//Input : 75845  5
//Output : 2
//Input : 89562  1
//Output : 0

#include<stdio.h>

int DigitFrequency(int iNo, int i)
{
	 int iDigits = 0,iCnt = 0;
	 
		if(iNo<0)
	{
		iNo = -iNo;
	}
	if((i<0)||(i>9))
	{
		printf("Invalid digit\n");
		return 0;
	}
	while(iNo>0)
	{
		iDigits = iNo%10;
		if(iDigits==i)
		{
			iCnt++;
		}
		iNo = iNo/10;
	}
	return iCnt;
}
int main()
{
	int iValue1 = 0, iValue2 = 0, iRet = 0;
	printf("Enter the number : \n");
	scanf("%d", &iValue1);
	
	printf("Enter the digit that you want to search\n");
	scanf("%d", &iValue2);
	
	iRet = DigitFrequency(iValue1,iValue2);
	
	printf("Number of given digits are : %d\n",iRet);
	
	return 0;
}