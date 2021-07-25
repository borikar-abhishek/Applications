//Accept N number from user and display all such elements which are divisible by 3 and 5.
//Input :     N : 6
//            Elements : 85 66 3 15 93 88 
//
//Output :    15

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
	int i = 0;
	for(i=0;i<iLength;i++)
	{
	    if(((Arr[i]%3)==0) && ((Arr[i]%5)==0))
		{
			printf("%d\t",Arr[i]);
		}
	}
	
}
	
int main()
{
	int *p = NULL;
	int iSize = 0, iCnt =0;
	
	printf("Enter the length of array:\n");
	scanf("%d",&iSize);
	
	p = (int*)malloc(iSize * sizeof(int));
	
	if(p == NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	printf("Enter %d elements :\n",iSize);
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter the %d element:",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	
	Display(p,iSize);
	
	free(p);
	
	return 0;
}