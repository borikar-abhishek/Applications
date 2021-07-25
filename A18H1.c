//Accept N number from user and return frequency of even numbers.
//Input :      N: 6
//             Elements are: 85 66 3 55 93 88
//Output : 3

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{
	int i = 0,iCnt = 0;

	for(i=0;i<iLength;i++)
	{
		if((Arr[i]%2)==0)
		{
			iCnt++;
		}
	}
	return iCnt;
	
}
int main()
{
	int *p = NULL;
	int iCnt =0, iSize = 0, iRet =0;
	
	printf("Enter number of elements:");
	scanf("%d",&iSize);
	
	p = (int*)malloc(iSize * sizeof(int));
	
	if(p == NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	
	printf("Enter %d element:\n",iSize);
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter the %d element:",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	iRet = CountEven(p,iSize);
	printf("Frequency of even numbers are: %d\n",iRet);
	
	free(p);
	
	return 0;
}