//Accept number from user and check whether thst number is divisible by 3 and 5.
//
//Input : 10
//Output : No 
//
//Input : 15
//Output : Yes

#include<stdio.h>
#include<stdbool.h>             // standard header for boolean (true/false)

//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:             CheckDivisible
// Input :                    Integer
// Output :                   Boolean(True/False)
// description :              It is used to check whether number is divisible by 3 and 5
// Date  :                    01/03/2021
// Author Name                Abhishek
///////////////////////////////////////////////////////////////////////////////////////////



bool CheckDivisible(int iNo)
{
	if(((iNo%3)==0)&&((iNo%5)==0))
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
	
	printf("Enter the value = ");
	scanf("%d",&iValue);
	
	bRet = CheckDivisible(iValue);
	if(bRet == true)
	{
		printf("%d is divisible by 3 and 5\n",iValue);
	}
	else
	{
		printf("%d is not divisible by 3 and 5\n",iValue);
	}
	
	return 0;
}