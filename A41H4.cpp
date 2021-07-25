//Write generic program to accept N values from user and return largest values.

#include<iostream>
using namespace std;


template<class T>
T Max(T *arr, int iSize)
{
	T Max = 0;
	int i = 0;
	if(arr == NULL)
	{
		return 0;
	}
	
	for(i = 0;i<iSize;i++)
	{
		if(arr[i]>Max)
		{
			Max = arr[i];
		}
	}
	return Max;
}

int main()
{
	int arr[]={10,20,30,40,50};
    float brr[] = {10.0,3.7,9.8,8.7};
	int iRet = Max(arr,5);
	printf("%d",iRet); // 50
	printf("\n");
	float fRet = Max(brr,4);
	printf("%f",fRet); // 10.0
	
	return 0;
}