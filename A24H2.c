//Write a program which accepts string from user and convert it into lower case.
//Input : "Marvellous Multi OS"
//Output : "marvellous multi os"

#include<stdio.h>

void struprX(char str[])
{
	while(*str!='\0')
	{
		if((*str>='a')&&(*str<='z'))
		{
			*str = *str - 32;
		}
		str++;
	}
}

int main()
{
	char Arr[25];
	printf("Enter the string:\n");
	scanf("%[^'\n']s",Arr);
	struprX(Arr);
	printf("Modified string is : %s",Arr);
	return 0;
}