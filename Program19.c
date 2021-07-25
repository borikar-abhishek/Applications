//Accept number from user and display the digits of that number seperately in reverse order
//inputs : 7521
//Output : 1
//         2
//         5
//         7


#include<stdio.h>

void DisplayDigits(int iNo)
{
	int iDigit = 0;
	if(iNo<0)
	{
		iNo = -iNo;
	}
	while(iNo>0)                                     //while(iNo!=0) can be used
	{
		iDigit = iNo%10;
		printf("%d\n",iDigit);
		iNo = iNo/10;                                                                                                                                                                                                                                                                                   
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter the number \n");
	scanf("%d",&iValue);
	
	DisplayDigits(iValue);
	return 0;
}