//Write a program which accepts  two string from user and concat second string after first string.
//Input : "Marvellous Infosystem"
//         "logic Building" 
//Output : "Marvellous Infosystem Logic Building"

#include<stdio.h>
void StrCatX(char *src,char *dest)
{
	if((src==NULL)||(dest==NULL))
	{
		return;
	}
	while(*dest!='\0')
	{
		dest++;
	}
	*dest = ' ';
	dest++;
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
	printf("Enter the first string :\n");
	scanf("%[^'\n']s",arr);
	printf("Enter the second string :\n");
	scanf(" %[^'\n']s",brr);
	StrCatX(arr,brr);
	printf("String after copy is :\n%s",brr);
	
	return 0;
}