//Accept N number from user and accept one another number as No, return frequency of No from it.
//Input :      N: 6  No:66
//             Elements are: 85 66 3 66 93 88
//Output : 2
//Input :      N: 6  No:12
//             Elements are: 85 11 3 15 11 111
//Output : 0

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iNum)
{
	int i =0,iCnt = 0;
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]==iNum)
		{
			iCnt++;
		}
	}
	return iCnt;
}
int main()
{
	int *p = NULL;
	int iCnt =0,iRet = 0,iSize = 0, iNo = 0;
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
	
	printf("Enter the number you want to count :");
    scanf("%d",&iNo);	
	
	iRet = Frequency(p,iSize,iNo);
	
	printf("Frequency of iNo is : %d",iRet);
	free(p);
	
	
	return 0;
}