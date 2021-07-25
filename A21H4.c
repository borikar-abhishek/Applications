//Accept character from user and check whether it is digit or not.(a-z)
//Input : g 
//Output : TRUE
//Input : D  
//Output : FALSE


#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkSmall(char ch)
{
	if((ch>='a')&&(ch<='z'))	
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	char cValue = '\0';
	BOOL bRet = 0;
	printf("Enter the character: \n");
	scanf("%c",&cValue);
	
	bRet = ChkSmall(cValue);
	
	if(bRet == TRUE)
	{
		printf("It is small letter");
	}
	else
	{
		printf("It is not small letter ");
	}
	
	return 0;
}