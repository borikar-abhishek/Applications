//Accept N numbers from user and return product of all odd elements.
//Input:  N : 6   
//        Elements : 15 66 3 70 10 88
//Output : 45
//Input:  N : 6   
//        Elements : 44 66 72 70 10 88
//Output : 0

#include<stdio.h>
#include<stdlib.h>

int OddProduct(int Arr[],int iLength )
{
	int i = 0, iMult = 1;
	for(i=0;i<iLength;i++)
	{
		if((Arr[i]%2)!=0)
		{
			iMult = iMult * Arr[i];
		}
	}
	return iMult;
	
}


int main()
{
	int *p = NULL;
	int iSize = 0, iCnt = 0, iRet = 0;
	
	printf("Enter the number of elements: ");
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
		printf("Enter the %d element:",iCnt+1);
        scanf("%d",&p[iCnt]);		
	}
	
	iRet = OddProduct(p,iSize);
	printf("Product of all odd elements are : %d",iRet);
	
	free(p);
	
	return 0;
}
