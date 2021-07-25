//Write a recursive program which accept number from user and return summation of its digits.
//Input : 879
//Output : 24

#include<stdio.h>

int Sum(int iNo)
{
	static int iDigit = 0, iAdd = 0;
	if(iNo>0)
	{
		iDigit = iNo%10;
		iAdd = iAdd + iDigit;
		iNo = iNo/10;
	    Sum(iNo);
	}
	
	return iAdd;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number : \n");
	scanf("%d",&iValue);
	
	iRet = Sum(iValue);
	printf("Summation is %d",iRet);
	
	return 0;
	
}