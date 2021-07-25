//Write a program which accepts string from user and return the difference between frequency of small characters and frequency of capital letters.
//Input : "Marvellous "
//Output : 6  (8-2)

#include<stdio.h>

int Difference(char str[])
{
    int iCnt1 = 0, iCnt2 = 0;
	if(str == NULL)
	{
		return 0;
	}
	
	while(*str!='\0')
	{
		if((*str>='A')&&(*str<='Z'))
		{
			iCnt1++;
		}
		if((*str>='a')&&(*str<='z'))
		{
			iCnt2++;
		}
		str++;
	}
	return iCnt2 - iCnt1;
		

	
}
int main()
{
	char Arr[50];
	int iRet = 0;
	printf("Enter the string:\n");
	scanf("%[^'\n']s",Arr);
	iRet = Difference(Arr);
	printf("Difference is : %d",iRet);
	return 0;
}