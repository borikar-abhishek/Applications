//Accept N number from user and return product of odd numbers.
//Input :   N :   6  
//          Elements are : 15  66  3  70  10  88
//Output : 45

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
		int iMult = 1;
		for(i = 0;i<iSize;i++)
		{
			if((Arr[i]%2)!=0)
			{
				iMult = iMult * Arr[i];
			}
		}
		return iMult;
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
	cout<<"Product of odd numbers are :"<<iRet;
    return 0;
}













