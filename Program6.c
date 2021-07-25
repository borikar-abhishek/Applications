//Accept number from user and check whether thst number is even or odd.
//
//Input : 4
//Output : Its even 
//
//Input : 7
//Output : Its odd

#include<stdio.h>
#include<stdbool.h>             // standard header for boolean (true/false)

//////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name:             CheckEven
// Input :                    Integer
// Output :                   Boolean(True/False)
// description :              It is used to check whether number is even or odd 
// Date  :                    01/03/2021
// Author Name                Abhishek
///////////////////////////////////////////////////////////////////////////////////////////



bool CheckEven(int iNo)
{
	if((iNo%2) == 0)
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
	
	bRet = CheckEven(iValue);
	if(bRet == true)
	{
		printf("%d is Even number \n",iValue);
	}
	else
	{
		printf("%d is odd number \n",iValue);
	}
	
	return 0;
}