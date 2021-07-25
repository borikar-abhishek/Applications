/*
Write generic program to accept N values and search last occurrence of any specific value.
Input : 10 20 30 10 30 40 10 40 10
Value to search : 40
Output : 8
*/

#include<iostream>
using namespace std;

template<class T>
int SearchLast(T *arr, int iSize, T iNo)
{
	int i =0;
	for(i=iSize-1;i>1;i--)
	{
		if(arr[i]==iNo)
		{
			break;
		}
	}
	return i;
}

int main()
{
	int arr[]={10,20,30,10,30,40,10,40,10};
	int iRet = SearchLast(arr,9,40);
	printf("%d",iRet); // 8
	return 0;
}