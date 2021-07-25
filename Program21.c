// Accept number from user and display addition of each digit in it.          without using iDigit
//Input : 7521
//Output : 15

#include<stdio.h>

int SumDigits(int iNo)
{
	int iSum = 0;
	
	if(iNo<0)
	{
		iNo = -iNo;
	}
	while(iNo!=0)
	{
		
		iNo = iNo/10;
	    iSum = iSum + ( iNo%10);
	}
	return iSum;
}

int main()
{
	int iValue = 0 ;
	int iRet = 0;
	printf("Enter the number =\n");
	scanf("%d", &iValue);
	
	iRet = SumDigits(iValue);
	printf("Sum is = %d\n",iRet);
	
	return 0;
}