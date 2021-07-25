// Accept character from user. If character is small display its corresponding capital letter, and if it is small then dispaly its corresponding capital letter.
//In other cases dispaly as it is.
//Input : Q
//Output : q
//Input : m 
//Output : M 
//Input : %
//Output : %

#include<stdio.h>

void Display(char ch)
{
	if((ch>='A')&&(ch<='Z'))
	{
		ch = ch + 32;
		printf("%c",ch);
	}
	else if((ch>='a')&&(ch<='z'))
	{
		ch = ch - 32;
		printf("%c",ch);
	}
	else
	{
		printf("%c",ch);
	}
	
}
int main()
{
	char cValue = '\0' ;
	printf("Enter the character : \n");
	scanf("%c",&cValue);
	
	Display(cValue);
	
	return 0;
}