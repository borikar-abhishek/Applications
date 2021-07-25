//Write a program which accepts string from user and copy the contents of that string into another string.
//Input : "Marvellous Multi OS"
//Output : "Marvellous Multi OS"

#include<stdio.h>
void StrcpyX(char *src,char *dest,int iCnt)
{
	if((src==NULL)||(dest==NULL))
	{
		return;
	}
	while((*src!='\0')&&(iCnt>0))
	{
		*dest = *src;
		src++;
		dest++;
		iCnt--;
	}
	*dest = '\0';
}


int main()
{
	char arr[30];
	char brr[30];
	int iNo = 0;
	printf("Enter the string :\n");
	scanf("%[^'\n']s",arr);
	printf("Enter the number till to be copied:\n ");
	scanf("%d",&iNo);
	StrcpyX(arr,brr,iNo);
	printf("String after copy is :\n %s",brr);
	
	return 0;
}