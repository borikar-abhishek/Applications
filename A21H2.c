//Accept character from user and check whether it is capatial letter or not.(A-Z)
//Input : F 
//Output : TRUE
//Input : f 
//Output : FALSE


#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkCapital(char ch)
{
	if((ch>='A')&&(ch<='Z'))
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
	
	bRet = ChkCapital(cValue);
	
	if(bRet == TRUE)
	{
		printf("It is capital letter");
	}
	else
	{
		printf("It is not capital letter");
	}
	
	return 0;
}