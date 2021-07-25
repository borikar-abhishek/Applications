//Write a program which accepts number from user and check whether it contains 0 in it or not.

//Input : 2395
//Output : There is no zero
//Input : 9000
//Output : It contains zero
/*
START
      Accept number from user
	  If the number is negative then convert it into positive
	  while the number is greater then zero, follow iNo%10
	  if the digits after iNo%10 is zero then return true
	                                     else return false
	  iNo = iNo/10
      Again follow these steps till iNo>0	  

STOP
*/

#include<stdio.h>
#include<stdbool.h>

bool ChkZero(int iNo)
{
	int iDigit ;

	if(iNo<0)
	{
		iNo = -iNo;
	}
	
	while(iNo>0)
	{
	 iDigit = iNo%10;
  	 if(iDigit==0)
	 {
		 break;
	 }
	 iNo = iNo/10;
	}
	if(iNo>0)
	{
		return true;
	}
	else
	{
		return false;
	}
	
	
}
int main()
{
  int iValue = 0;
  bool bRet;
  printf("Enter the number : ");
  scanf("%d",&iValue);
  
  bRet = ChkZero(iValue);
  
  if(bRet == true)
  {
	  printf("Number contains zero");
  }
  else
  {
	  printf("Does not contain zero");
  }
  return 0;
}