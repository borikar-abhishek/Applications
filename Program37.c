//Write a program to accept number from user and display that many stars (*)
//Input : 5
// Output : * * * * *
//Input : 9
// Output : * * * * * * * * *

#include<stdio.h>
void Pattern( unsigned int iNo)
{
  int iCnt = 0;
  printf("\n");
  for(iCnt =1;iCnt<=iNo;iCnt++)
  {
	  printf("*\t");
  }	  
  printf("\n");
}

int main()
{
	unsigned int iValue = 0;                                         // unsigned int  is used    negative number is automatically handled    
	printf("Enter the number :\n");
	scanf("%u", &iValue);
	
	Pattern(iValue);
	return 0;
}