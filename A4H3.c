//Write a program which accepts number from user and display all its non factors.
//
//Input : 12
//Output : 5 7 8 9 10 11
//
//Input : 13
//Output : 2 3 4 5 6 7 8 9 10 11 12

#include<stdio.h>

int NonFactor(int iNo)
{
	int iCnt = 0;
	for(iCnt =1; iCnt<=iNo;iCnt++)
	{
		if((iNo%iCnt)!=0)                           //if the number iNo is not divisible by iCnt then print the iCnt     (!=  not equal to operator)
		{
			printf("%d\n",iCnt);
		}
	}
	
}
int main()
{
	int iValue = 0;
	
	printf("Enter the value=\n");
	scanf("%d",&iValue);
	printf("Non Factors of the number are :\n");
	
	NonFactor(iValue);
	
	
	return 0;
}