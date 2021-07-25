//Write a program which accepts string from user and reverse that string in place.
//Input : "abcd"
//Output : "dcba"
//Input : "abba"
//Output : "abba"

#include<stdio.h>

void StrRevX(char str[])
{
	char *start,*end;
	char temp;
	
	if(str==NULL)
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
	char arr[20];
	printf("Enter the string:\n");
	scanf("%[^'\n']s",arr);
	
	StrRevX(arr);

	printf("Modified string is : %s",arr);
	
	return 0;
}