//Accept N number from user and return the smallest number.
//Input :   N :   6  
//          Elements are : 85  66  3  66  93  88
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
		cout<<"Enter the values:\n";
		for(i=0;i<iSize;i++)
		{
			cin>>Arr[i];
		}
	}	
	int Display()
	{
		int i = 0;
		int iSmall = Arr[i];
		for(i = 0;i<iSize;i++)
		{
			if(Arr[i]<iSmall)
			{
				iSmall =  Arr[i];
			}
		}
		return iSmall;
	}
	~Number()
	{
		delete []Arr;
	}

};


int main()
{
	int iNo = 0;
	int iRet = 0;
	cout<<"Enter number of elements : ";
	cin>>iNo;
	
	Number obj(iNo);
	obj.Accept();
	iRet = obj.Display();
	cout<<"Smallest number is :"<<iRet;
    return 0;
}













