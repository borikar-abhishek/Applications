
//Accept one number from user and print that number on screen

#include<stdio.h>

int Display(int iNo)
{
	int iCnt = 0;
	for(iCnt = 1; iCnt<=iNo; iCnt++)
	{
		printf("%d",iNo);
	}
}

int main()
{
	int iValue = 0;
	printf("Enter the number = ");
	scanf("%d", &iValue);
	
    Display(iValue);
	return 0;
}
// OUTPUT : Enter the number = 6
//          666666
