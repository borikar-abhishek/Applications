//Accept N number from user and display summation of digits of each number.

//Input :    N : 6
//           Elements : 8225  665  3  76  953  858
//Output :              17    17   3  13  17   21

#include<stdio.h>
#include<stdlib.h>

int DigitSum(int Arr[], int iLength)
{
	int i = 0;
	int iSum[i] ;
	int iDigit = 0,iNo = 0,iAdd=0;
	
	for(i = 0;i<iLength;i++)
	{
		iNo = Arr[i];
		while(iNo!=0)
		{
		  iDigit = iNo%10;
		  iSum[i] = iSum[i] + iDigit;
		  iNo = iNo/10;
		}
	}
	return iSum;
	
}

int main()
{
	int iSize = 0 , iRet = 0, iCnt = 0;
	int *p = NULL;
	
	printf("Enter number of elements :\n");
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
		printf("Enter the %d element:\n",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	iRet = DigitSum(p,iSize);
	printf("%d",iRet);
	free(p);
	
	return 0;
}  