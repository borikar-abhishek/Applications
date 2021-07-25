//Accept character from user and check whether it is special symbol or not (!,@,#,$,%,^,&,*)
//Input : %
//Output : TRUE
//Input : m
//Output : FALSE 

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
	if(((ch>='A')&&(ch<='Z'))||((ch>='a')&&(ch<='z'))||((ch>='0')&&(ch<='9')))
	{
		return FALSE;
	}
	else 
	{
		return TRUE;
	}
}
int main()
{
	char cValue = '\0';
	BOOL bRet = FALSE;
	printf("Enter the character:\n");
	scanf("%c",&cValue);
	
	bRet = ChkSpecial(cValue);
	if(bRet == TRUE)
	{
		printf("It is special character");
	}
	else
	{
		printf("It is not a special character");
	}
	
	return 0;
}