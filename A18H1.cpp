//Accept N number from user and return frequency of even numbers.
//Input :   N : 6      
//          Elements are : 85  66  3  80  93  88
//Output : 3

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
		int i = 0, iCnt = 0;
		cout<<"Count of even numbers are : ";
		for(i = 0;i<iSize;i++)
		{
			if(((Arr[i]%2)==0))
			{
				iCnt++;
			}
		}
		cout<<iCnt;
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













