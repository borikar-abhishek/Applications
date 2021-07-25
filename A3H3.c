// Write a program which accepts number from user and print even factors of that number.
/*
START
     Accept number from user 
	 if number is negative convert it into positive
	 For     (iCnt < iNo)         iCnt = 1........<iNo
	 Check if (iNo%iCnt)==0  and iCnt%2 == 0
     if yes then print iCnt
	 if no then come out of loop
	 Increment iCnt by 1
	 Follow the condition again for iCnt
STOP
*/

#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
	int iCnt = 0;
	if(iNo<=0)
	{
		iNo=-iNo;
	}
	
	for(iCnt=1;iCnt<iNo; iCnt++)
	{
		if(iNo%iCnt == 0 && iCnt%2 == 0)
		{
			printf("%d\n", iCnt);
		}
	}
}
int main()
{
	int iValue = 0;
	printf("Enter the number = ");
	scanf("%d", &iValue);
	
	DisplayEvenFactor(iValue);
	
	return 0;
}