//Accept number from user and display factor of that number                  with time complexity
//
//Input : 12
//Output :1 2 3 4 6  

// Input : 20
//Output : 1 2 4 5 10

// Input : 6
// Output : 1 2 3 6

// if(6 % 1) == 0        1                       
// if(6 % 2) == 0        2                       
// if(6 % 3) == 0        3                       


#include<stdio.h>

void Factors(int iNo)
{
	int iCnt = 0;
	if(iNo<0)
	{
		iNo = -iNo;
	}
	
	for(iCnt =1;iCnt<=iNo/2;iCnt++)
	{
		if((iNo%iCnt) == 0)
		{
			printf("%d\n",iCnt);
		}
	}
}
//Time Complexity = O(N/2)
int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the  number\n");
	scanf("%d", &iValue);
	
	
	Factors(iValue);
	
	
	return 0;
}