//Accept N numbers from user and accept one another number as No, check whether No is present or not.
//Input:  N : 6    No : 66
//        Elements : 85 66 3 66 93 88
//Output : TRUE
//Input:  N : 6    No : 12
//        Elements : 85 11 3 15 11 111
//Output : FALSE

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL Check(int Arr[],int iLength, int iNo)
{
	int i = 0;
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]==iNo)
		{
			break;
		}
	}
	if(i==iLength)
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
}

int main()
{
	int *p = NULL;
	int iSize = 0, iValue = 0, iCnt = 0;
	BOOL bRet = FALSE;
	printf("Enter the number of elements: ");
	scanf("%d",&iSize);
	
	p = (int*)malloc(iSize * sizeof(int));
	
	if(p == NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	printf("Enter %d elements :\n",iSize);
	for(iCnt = 0;iCnt<iSize;iCnt++)
	{
		printf("Enter the %d element:",iCnt+1);
        scanf("%d",&p[iCnt]);		
	}
	printf("Enter the number you want to check:");
	scanf("%d",&iValue);
	
	bRet = Check(p,iSize,iValue);
	if(bRet == TRUE)
	{
		printf("Number is present");
	}
	else
	{
		printf("Number is not present");
	}
	
	free(p);
	
	return 0;
	
	
}
