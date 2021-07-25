//Accept number from user and display difference of maximum and minimum digit in it.
//Input : 89451
//Output : 8 (9-1)

#include<stdio.h>

int MaxMin(int iNo)
{
	int iDigit = 0, iMax= 0, iMin = 9;
	while(iNo>0)
	{
		iDigit = iNo%10;
		if(iDigit>iMax)
		{
			iMax = iDigit;
		}
		if(iDigit<iMin)
		{
			iMin = iDigit;
		}
		iNo = iNo/10;
	}
	return iMax - iMin;
}

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter the value :\n");
	scanf("%d",&iValue);
	
	iRet = MaxMin(iValue);
	printf("Difference is : %d\n", iRet);
	
	return 0;
	
}