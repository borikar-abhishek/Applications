//Write a program which accepts string from user and check whether it contains vowels in it or not
//Input : "marvellous"
//Output : TRUE
//Input : "xyz"
//Output : FALSE


#include<stdio.h>
#include<stdbool.h>


bool Vowels(char str[])
{
	while(*str!='\0')
	{
		if((*str!='a')||(*str!='e')||(*str!='i')||(*str!='o')||(*str!='u'))
		{
			return false;
		}
		else
		{
			return true;
		}
		str++;
	}
}
int main()
{
	char Arr[50];
	bool bRet;
	printf("Enter the string:\n");
	scanf("%[^'\n']s",Arr);
	bRet = Vowels(Arr);
	if(bRet == true)
	{
		printf("String does not contains vowels");
	}
	else
	{
		printf("String  contain vowels");
	}
	return 0;
}