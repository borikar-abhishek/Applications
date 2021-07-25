//Accept N numbers from user and accept range ,display all elements from that range.
//Input:  N : 6    START : 60    STOP : 90
//        Elements : 85 66 3 76 93 88
//Output : 85 66 76 88
//Input:  N : 6   START : 30     STOP : 50
//        Elements : 85 66 3 76 93 88
//Output : -

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iLength,int iStart, int iStop )
{
	int i = 0;
	for(i=0;i<iLength;i++)
	{
		if((Arr[i]>iStart)&&(Arr[i]<iStop))
		{
			printf("%d\t",Arr[i]);
		}
	}
	
}


int main()
{
	int *p = NULL;
	int iSize = 0, iValue1 = 0, iCnt = 0, iValue2 = 0;
	
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
	printf("Enter the starting point:");
	scanf("%d",&iValue1);
	printf("Enter the ending point:");
	scanf("%d",&iValue2);
	
	Range(p,iSize,iValue1,iValue2);
	
	
	free(p);
	
	return 0;
}
