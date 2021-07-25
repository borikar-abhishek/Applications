//Write a program which accepts number from user and print factors of that number.

/*
START
     Accept number from user.
	 If number is negative convert that number into positive
	 For (iCnt < iNo)        iCnt = 1......<iNo
         Check if (iNo%iCnt) = 0
	 If true then print that number
	 If false thrn come out of loop
	 Increment iCnt by 1 and again follow the conditions 
STOP
*/

#include<stdio.h>

void DisplayFactor(int iNo)
{
	int iCnt = 0;
	if(iNo <= 0)
	{
		iNo = -iNo;
	}
	
	for(iCnt=1; iCnt < iNo; iCnt++)
	{
		if(iNo%iCnt == 0)
		{
			printf("%d\n",iCnt);		
		}
	}
}

int main()
{
int iValue = 0;
printf("Enter the number\n");
scanf("%d", &iValue);

DisplayFactor(iValue);

return 0;

}