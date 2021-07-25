//Write a program which accepts string from user and display only digits from that string.
//Input : "marve89llous121"
//Output : "89121"
//Input : "DEMO"
//Output : 

#include<stdio.h>
void DisplayDigit(char *str)
{
	if(str == NULL)
	{
		return;
	}
	while(*str!='\0')
	{
		if((*str>='0')&&(*str<='9'))
		{
			printf("%c",*str);
		}
		str++;
	}
}


int main()
{
	char Arr[25];
	printf("Enter the string:\n");
	scanf("%[^'\n']s",Arr);
	DisplayDigit(Arr);
	
	return 0;
}