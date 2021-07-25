//Accept N number from user and check whether that numbers contains 11 in it or not.
//Input :      N: 6
//             Elements are: 86 66 11 80 93 88
//Output : 11 is present

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL Check(int Arr[],int iLength)
{
	int i = 0;
	if(Arr == NULL)
	{
		return FALSE;
	}
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]==11)
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
	int iCnt =0, iSize = 0; 
	BOOL bRet = FALSE;
	printf("Enter number of elements:\n");
	scanf("%d",&iSize);
	
	p = (int*)malloc(iSize * sizeof(int));
	if(p == NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	
	printf("Enter the %d element : ",iSize);
	for(iCnt =0;iCnt<iSize;iCnt++)
	{
		printf("Enter the %d element:",iCnt+1);
	    scanf("%d",&p[iCnt]);
	}
	
	bRet = Check(p,iSize);
	
	if(bRet == TRUE)
	{
		printf("11 is present");
	}
	else
	{
		printf("11 is not present");
	}
	free(p);

	return 0;
}
