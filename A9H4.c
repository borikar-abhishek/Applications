//Write a program which accept range from user and return addition of even numbers in between that range.(Range should contain only positive numbers only)
//Input :    23 30
//Output :   108
//Input :    10 18
//Output :   70  
//Input :  -10 2
//Output :  Invalid Range 

#include<stdio.h>

int RangeSumEven(int iNo1, int iNo2)
{
	int iSum = 0;
	if(iNo1<0 && iNo2<0)
	{
		printf("Invalid Range");
	}
	if(iNo1>iNo2)
	{
		printf("Invalid Range");
	}
	for(iNo1 ; iNo1<=iNo2; iNo1++)
	{
		if((iNo1%2)==0)
		{
			iSum = iSum + iNo1;
		}	
	}
	return iSum;
	
}	


int main()
{
	int iValue1 = 0, iValue2 = 0, iRet = 0;
	
	printf("Enter the starting point :\n");
	scanf("%d",&iValue1);
	printf("Enter the ending point :\n");
	scanf("%d",&iValue2);
	
	iRet = RangeSumEven(iValue1,iValue2);
	printf("Sum is : %d",iRet);
	return 0;
}