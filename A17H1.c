//Accept N number from user and return difference between summation of even elements and summation of odd elements.
//Input :     N : 6
//            Elements : 85 66 3 80 93 88 
//
//Output :    53(234-181)

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
	int i=0;
    int iSum1 = 0, iSum2 = 0;
	for(i=0;i<iLength;i++)
	{
	  if((Arr[i]%2)==0)
	  {
		iSum1 = iSum1 + Arr[i];
	  }
	  else
	  {
		iSum2 = iSum2 + Arr[i];
	  }
	}
	return iSum1-iSum2;
	
	
}
int main()
{
	int *p = NULL;
	int iSize = 0,iRet = 0,iCnt = 0;
	printf("Enter the number of elements:\n");
	scanf("%d",&iSize);
	
	p = (int*)malloc(iSize * sizeof(int));
	if(p==NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	
	printf("Enter %d numbers:\n",iSize);
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter element :%d\t",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	iRet = Difference(p,iSize);
	
	printf("Result is :%d",iRet);
	free(p);
	
	
	return 0;
}