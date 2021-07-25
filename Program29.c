//Accept number from user and find the smallest digit in it.
//Input : 7521
//Output : 1
//Input : 121
//Output : 1

#include<stdio.h>

int MinDigit(int iNo)
{
	int iDigit = 0;
	int iMin = iNo%10;
	
	if(iNo<0)
	{
		iNo = -iNo;
	}
	while(iNo>0)
	{
	    iDigit = iNo%10;
		if(iMin>iDigit)
		{
			iMin = iDigit;
		}
		iNo = iNo/10;
	}
	return iMin;
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number : \n");
	scanf("%d",&iValue);
	
	iRet = MinDigit(iValue);
	printf("Minimum Digit is :%d ",iRet);
	
	return 0;
}