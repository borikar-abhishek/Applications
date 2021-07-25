
//Accept number from user and return the addition of all number till that number.
// Example 1. Input : 4
//            Output : 10 (1 + 2 + 3 + 4) 
// Example 2. Input : -6
//            Output : 21 (1 + 2+ 3 + 4 + 5 + 6)



#include<stdio.h>


   int Sum(int iNo)
   {
	   int iCnt = 0, iSum = 0;
	   
	   if(iNo == 0)
	   {
		   return 0;	   
	   }
	   
	   if(iNo < 0)
	   {
		   iNo = -iNo;
	   }
	   //     1          2        3
	   for(iCnt = 1; iCnt<=iNo; iCnt++)
	   {
		   iSum = iSum + iCnt;       //4
	   }
	   return iSum;
   }
	
	
	
int main()   //Entry point function
{
	int iNo = 0;
	int iRet = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iNo);
	iRet = Sum(iNo);
	
	printf("Addition is : %d\n",iRet);
	return 0;
	

}