//Write a recursive program which accept number from user and return its product of digits.
//Input : 523
//Output : 30

#include<stdio.h>

int Multiplication(int iNo)
{
	static int iMult = 1, iDigit = 0;
	if(iNo>0)
	{
		iDigit = iNo%10;
		iMult = iMult * iDigit;
		iNo = iNo/10;
		Multiplication(iNo);
	}
	return iMult;
}

int main()
{
	int iRet = 0, iValue = 0;
	
	printf("Enter the number : \n");
	scanf("%d",&iValue);
	
	iRet = Multiplication(iValue);
	printf("Multiplication of digits are : %d",iRet);
	return 0;
}