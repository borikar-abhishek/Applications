//Accept N number from user and return difference between frequency of even numbers and odd numbers.
//Input :      N: 7
//             Elements are: 85 66 3 80 93 88 90
//Output : 1  (4-3)

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
	int i = 0,iCnt1 = 0, iCnt2 = 0;

	for(i=0;i<iLength;i++)
	{
		if((Arr[i]%2)==0)
		{
			iCnt1++;
		}
		else
		{
			iCnt2++;
		}
	}
	return iCnt1 - iCnt2;
	
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
	iRet = Frequency(p,iSize);
	printf("Difference between frequency of even and odd numbers are : %d\n",iRet);
	
	free(p);
	
	return 0;
}