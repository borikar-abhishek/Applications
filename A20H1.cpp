//Accept N number from user and return the largest number.
//Input :   N :   6  
//          Elements are : 85  66  3  66  93  88
//Output : 93

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
		int iBig = 0;
		for(i = 0;i<iSize;i++)
		{
			if(Arr[i]>iBig)
			{
				iBig =  Arr[i];
			}
		}
		return iBig;
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
	cout<<"Largest number is :"<<iRet;
    return 0;
}













