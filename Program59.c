//Accept N number from user and display even number.


#include<stdio.h>
#include<stdlib.h>                            // for malloc and free function

void EvenDisplay(int Arr[], int iSize)                       
{
	int i =0;
	if((Arr == NULL) || (iSize<=0))
	{
		return;
	}
    printf("Even number are:\n");
	for(i=0;i<iSize;i++)
	{
		if((Arr[i]%2)==0)
		{
			printf("%d\n",Arr[i]);
		}
	}
}

int main()
{
	int *arr = NULL;
	int iLength =0 ,i=0;
	printf("Enter the length:\n");
	scanf("%d",&iLength);
	
	arr = (int*)malloc(iLength * sizeof(int));
	if(arr == NULL)
	{
		printf("Unable to allocate the memory\n");
		return -1;
	}
	
	printf("Enter the numbers:\n");
	
	for(i=0;i<iLength;i++)
	{
		scanf("%d",&arr[i]);
	}
	EvenDisplay(arr,iLength);
	
	free(arr);
	return 0;         
}