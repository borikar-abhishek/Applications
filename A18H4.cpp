//Accept N number from user and return frequency of 11 from it.
//Input :   N :   6    
//          Elements are : 85  66 11  80  11  88  
//Output : 2

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
		cout<<"Enter the values :\n ";
		for(i=0;i<iSize;i++)
		{
			cin>>Arr[i];
		}
	}	
	int Display()
	{
		int i = 0, iCnt = 0;
		for(i = 0;i<iSize;i++)
		{
			if(((Arr[i]%11)==0))
			{
				iCnt++;
			}
		}
		return iCnt;
	}
	~Number()
	{
		delete []Arr;
	}

};


int main()
{
	int iNo = 0;
	int iRet;
	cout<<"Enter number of elements : ";
	cin>>iNo;
	Number obj(iNo);
	obj.Accept();
	iRet = obj.Display();
	cout<<"Frequency of 11 is : "<<iRet;
    return 0;
}













