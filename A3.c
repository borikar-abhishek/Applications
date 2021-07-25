#include<stdio.h>

void PrintEven(int iNo)
{
	int i = 0;
	
	if(iNo <= 0)
	{
		return;
	} 
	for(i=2;i<=iNo;i++)
	{
	   while(i%2 >= 0)
	    {
		  printf("%d\n",i);
	    }
	}
}


int main()
{
	int iValue = 0;
	printf("Enter the number\n");
	scanf("%d", &iValue);
	
	
	PrintEven(iValue);
	
	
	
	return 0;
}