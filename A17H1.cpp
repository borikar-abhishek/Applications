//Accept N number from user and return difference between summation of even elements and summation of odd elements.
//Input :   N : 6      
//          Elements are : 85  66  3  80  93  88
//Output : 53 (234 - 181)

#include<iostream>
using namespace std;

class Number
{
public :
        int *Arr;
		int iSize;
		
        Number(int iNo)
		{
			iSize = iNo;
			Arr = new int[iSize];
		}
		void Accept()
		{
			int i = 0;
			cout<<"Enter the values \n";
			for(i = 0;i < iSize;i++)
			{
				cin>>Arr[i];
			}
		}
		void Display()
		{
			int i = 0;
			for(i=0;i < iSize;i++)
			{
				cout<<Arr[i]<<'\n';
			}
		}
		int Difference()
		{
			int i = 0, iSum1 = 0, iSum2 = 0;
			for(i=0;i < iSize;i++)
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
			return iSum1 - iSum2;
		}
		~Number()
		{
			delete []Arr;
		}
	
};
int main()
{
	int iNo = 0, iRet = 0;
	cout<<"Enter number of elements : ";
	cin>>iNo;
	Number obj(iNo);
	obj.Accept();
	
	
	iRet = obj.Difference();
	cout<<"Difference is : "<<iRet<<'\n';
	
    return 0;
}













