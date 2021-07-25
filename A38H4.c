//Write a recursive program which accept number from user and return its factorial.
//Input : 5
//Output : 120

#include<stdio.h>

int Factorial(int iNo)
{
	static int iFact = 1;
	if(iNo>0)
	{
		iFact = iFact * iNo;
		iNo--;
		Factorial(iNo);
	}
	return iFact;
}

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter the number : \n");
	scanf("%d",&iValue);
	
	iRet = Factorial(iValue);
	
	printf("Factorial of number is : %d",iRet);
	
	return 0;
}