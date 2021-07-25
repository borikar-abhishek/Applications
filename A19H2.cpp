//Accept N number from user and accept another number as NO from user and return index of first occureance of that number.
//Input :   N :   6
//          NO : 66    
//          Elements are : 85  66 11  66  11  88  
//Output : 1

#include<iostream>

using namespace std;

class Number
{
public : 
	int *Arr;
	int iSize;
    int iNum;
    Number(int iNo1,int iNo2)
	{
		iSize = iNo1;
		iNum = iNo2;
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
		for(i = 0;i<iSize;i++)
		{
			if(((Arr[i]%iNum)==0))
			{
				break;
			}
		}
		if(i==iSize)
		{
			return -1;
		}
		else 
		{
			return i;
		}
	}
	~Number()
	{
		delete []Arr;
	}

};


int main()
{
	int iNo1 = 0, iNo2 = 0;
	int iRet;
	cout<<"Enter number of elements : ";
	cin>>iNo1;
	cout<<"Enter the number : ";
	cin>>iNo2;
	
	Number obj(iNo1,iNo2);
	obj.Accept();
	iRet = obj.Display();
	if(iRet == -1)
	{
		cout<<"There is no such element";
	}
	else
	{
		cout<<"First occurence of "<<iNo2<<" is at "<<iRet;
	}
	
    return 0;
}













