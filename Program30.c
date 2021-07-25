//Accept number from user and return the largest number in it.          Time Complexity is reduced at line 22
//Input : 7521
//Output : 7
//Input : 121
//Output : 2

#include<stdio.h>

int MaxDigit(int iNo)
{
	int iDigit = 0,iMax = 0;
	if(iNo<0)
	{
		iNo = -iNo;
	}
	while(iNo>0)
	{
		iDigit = iNo%10;
		if(iDigit>iMax)
		{
		 iMax = iDigit;
		 if(iMax == 9)
		 {
			 break;
		 }
		}
		iNo = iNo/10;
	}
	return iMax;
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	printf("Enter the number :\n");
	scanf("%d", &iValue);
	
	iRet = MaxDigit(iValue);
	
	printf("Largest digit is : %d\n",iRet);
	
	return 0;
}