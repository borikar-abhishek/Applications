//Accept N numbers from user and return the smallest number .
//Input:  N : 6   
//        Elements : 85  66  3  66  93  88
//Output : 3


#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iLength)
{
	int i = 0, iMin = Arr[i];
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]<iMin)
		{
			iMin = Arr[i];
		}
	}
	return iMin;
}
int main()
{
	int *p = NULL;
	int iCnt = 0, iRet = 0, iSize = 0;
	
	printf("Enter number of elements:");
	scanf("%d",&iSize);
	
	p = (int*)malloc(iSize * sizeof(int));
	if(p == NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	
	printf("Enter %d elements:\n",iSize);
	for(iCnt = 0;iCnt<iSize;iCnt++)
	{
		printf("Enter the %d element:",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	iRet = Minimum(p,iSize);
	printf("Smallest number is : %d", iRet);
	free(p);
	return 0;
}