//Accept N number from user and return frequency of 11 from it.
//Input :      N: 6
//             Elements are: 85 66 3 15 93 88
//Output : 0
//Input :      N: 6
//             Elements are: 85 11 3 15 11 111
//Output : 2

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
	int i =0,iCnt = 0;
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]==11)
		{
			iCnt++;
		}
	}
	return iCnt;
}
int main()
{
	int *p = NULL;
	int iCnt =0,iRet = 0,iSize = 0;
	printf("Enter numbers of element:");
	scanf("%d",&iSize);
	
	p = (int*)malloc(iSize * sizeof(int));
	if(p == NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	printf("Enter  %d element:\n",iSize);
	for(iCnt = 0;iCnt<iSize;iCnt++)
	{
		printf("Enter  the %d element:",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	iRet = Frequency(p,iSize);
	printf("Frequency of 11 is : %d",iRet);
	free(p);
	
	
	return 0;
}