//Accept N number from user and display the addition of N numbers.


#include<stdio.h>
#include<stdlib.h>                            // for malloc and free function

int DisplayAddition(int Arr[], int iLength)                       
{
	int iSum =0,i= 0;
	for(i=0;i<iLength;i++)
	{
		iSum = iSum + Arr[i];
	}
	return iSum;
}

int main()
{
	int *arr = NULL;
	int i=0,iSize = 0;
	int iRet = 0;
	
	printf("Enter number of element:\n");
	scanf("%d",&iSize);
	
	arr = (int*)malloc(iSize * sizeof(int));
	printf("Enter the element:\n");
	for(i=0;i<iSize;i++)
	{
		scanf("%d",&arr[i]);
	}
	iRet = DisplayAddition(arr,iSize);
	printf("Summation of all elements is:%d\n",iRet);
	
	free(arr);
	
	return 0;         
}