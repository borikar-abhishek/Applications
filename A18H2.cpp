//Accept N number from user and return difference between frequency of even numbers and odd numbers.
//Input :   N : 7      
//          Elements are : 85  66  3  80  93  88  90
//Output : 1 (4-3)

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
		cout<<"Enter the values : ";
		for(i=0;i<iSize;i++)
		{
			cin>>Arr[i];
		}
	}	
	void Display()
	{
		int i = 0, iCnt1 = 0, iCnt2 =0;
		cout<<"Difference between even and odd numbers are : ";
		for(i = 0;i<iSize;i++)
		{
			if(((Arr[i]%2)==0))
			{
				iCnt1++;
			}
			else if((Arr[i]%2)!=0)
			{
				iCnt2++;
			}
		}
		cout<<iCnt1-iCnt2;
	}
	~Number()
	{
		delete []Arr;
	}

};


int main()
{
	int iNo = 0;
	cout<<"Enter number of elements : ";
	cin>>iNo;
	Number obj(iNo);
	obj.Accept();
	obj.Display();
	
	
    return 0;
}













