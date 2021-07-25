//Accept N numbers from user and accept one another number as No and return index of first occurence of that No.
//Input:  N : 6    No : 66
//        Elements : 85 66 3 66 93 88
//Output : 2
//Input:  N : 6    No : 12
//        Elements : 85 11 3 15 11 111
//Output : -1

#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[],int iLength,int iNo)
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
		return -1;
	}
	else
	{
		return i;
	}
}


int main()
{
	int *p = NULL;
	int iSize = 0, iValue = 0, iCnt = 0, iRet = 0;
	
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
	printf("Enter the number you want to display its first occurence:");
	scanf("%d",&iValue);
	
	iRet = FirstOcc(p,iSize,iValue);
	
	if(iRet == -1)
	{
		printf("There is no such element");
	}
	else
	{
		printf("The index of %d is :%d",iValue,iRet);
	}
	free(p);
	
	return 0;
}
