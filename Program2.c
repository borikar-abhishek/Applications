

//Accept two numbers from user and return the maximum and minimum numbers

/*
START
     Accept first number as no1
	 Accept second number as no2
	 
	 If no1 is greater than no2
	 then no1 is maximum
otherwise
     no2 is maximum
	 
STOP
*/


//include the user defined file


#include"Header2.h"

int main()
{
	int iNo1 = 0;
	int iNo2 = 0;
	int iRet = 0;
	
	printf("Enter the first number\n");
	scanf("%d",&iNo1);
	
	printf("Enter the second number\n");
	scanf("%d",&iNo2);
	
	iRet = Maximum(iNo1,iNo2);
	
	printf("Maximum Number is: %d\n",iRet);
	
	return 0;
}