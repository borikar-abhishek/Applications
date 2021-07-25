//Accept N number from user and display all such elements which are multiple of 11
//Input :      N: 6
//             Elements are: 85 66 3 55 93 88
//Output : 66 55 88

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
	int i = 0;
	printf("Elements are:\n");
	for(i=0;i<iLength;i++)
	{
		if((Arr[i]%11)==0)
		{
			printf("%d\t",Arr[i]);
		}
	}
	
}
int main()
{
	int *p = NULL;
	int iCnt =0, iSize = 0;
	
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
	Display(p,iSize);
	
	free(p);
	
	return 0;
}