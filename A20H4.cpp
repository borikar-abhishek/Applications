//Accept N number from user and display all such elements which contains 3 digit int it.
//Input :   N :   6  
//          Elements are : 8225  665  3  76  953  858
//Output :  665  953  858

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
	void Display()
	{
		int i = 0;
		
		int iDigit = 0, iNum = Arr[i], iSum = 0;
		for(i = 0;i<iSize;i++)
		{
			while(iNum!=0)
			{
		      iDigit = iNum%10;
		      iNum = iNum/10;
			  iSum = iSum + iDigit; 
			}
		}
		cout<<iSum;
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
    obj.Display();
	
    return 0;
}













