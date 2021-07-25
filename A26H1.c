//Write a program which accepts string from user and copy the contents of that string into another string.
//Input : "Marvellous Multi OS"
//Output : "Marvellous Multi OS"

#include<stdio.h>
void StrcpyX(char *src,char *dest)
{
	if((src==NULL)||(dest==NULL))
	{
		return;
	}
	while(*src!='\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
}


int main()
{
	char arr[30];
	char brr[30];
	printf("Enter the string :\n");
	scanf("%[^'\n']s",arr);
	StrcpyX(arr,brr);
	printf("Modified string is :%s",brr);
	
	return 0;
}