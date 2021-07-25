//Write a program which accepts string from user and copy small characters of that string into another string.
//Input : "Marvellous multi OS"
//Output : "arvellous multi"

#include<stdio.h>
void StrCpySmall(char *src,char *dest)
{
	if((src==NULL)||(dest==NULL))
	{
		return;
	}
	while(*src!='\0')
	{
		if((*src>'a')&&(*src<'z'))
		{
			*dest = *src;
			dest++;
		}
		src++;
	}
	
	*dest = '\0';
}


int main()
{
	char arr[30];
	char brr[30];
	printf("Enter the string :\n");
	scanf("%[^'\n']s",arr);
	
	StrCpySmall(arr,brr);
	printf("String after copy is :\n%s",brr);
	
	return 0;
}