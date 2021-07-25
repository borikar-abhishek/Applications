//Write a program which accepts string from user and display it in reverse order.
//Input : "MarvellouS"
//Output : "SuollevraM"



#include<stdio.h>

void Reverse(char str[])
{
	char *start,*end;
    char temp;	
	if(str == NULL)
	{
		return ;
	}
	start = str;
	end = str;
	while(*end!='\0')
	{
		end++;
	}
	end--;
	while(start<end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
int main()
{
	char Arr[50];
	printf("Enter the string:\n");
	scanf("%[^'\n']s",Arr);
	Reverse(Arr);
	printf("Reverse is : %s",Arr);
	return 0;
}