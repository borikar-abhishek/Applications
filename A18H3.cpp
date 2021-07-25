//Accept N number from user and check whether that numbers contain 11 in it or not.
//Input :   N :       
//          Elements are : 85  66 11  80  93  88  
//Output : 11 is present

#include<iostream>
#define TRUE 1
#define FALSE 0
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
	bool Display()
	{
		int i = 0;
		for(i = 0;i<iSize;i++)
		{
			if(((Arr[i]%11)==0))
			{
				break;
			}
		}
		if(i==iSize)
		{
			return FALSE;
		}
		else
		{
			return TRUE;
		}
	}
	~Number()
	{
		delete []Arr;
	}

};


int main()
{
	int iNo = 0;
	bool bRet;
	cout<<"Enter number of elements : ";
	cin>>iNo;
	Number obj(iNo);
	obj.Accept();
	bRet = obj.Display();
	if(bRet == TRUE)
	{
		cout<<"11 is present";
	}
	else
	{
		cout<<"11 is not present";
	}
	
    return 0;
}













