//Accept N number from user and accept another number as NO from user and check whether NO is present or not.
//Input :   N :   6
//          NO : 66    
//          Elements are : 85  66 11  66  11  88  
//Output : TRUE

#include<iostream>
#define TRUE 1
#define FALSE 0
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
	bool Display()
	{
		int i = 0, iCnt = 0;
		for(i = 0;i<iSize;i++)
		{
			if(((Arr[i]%iNum)==0))
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
	int iNo1 = 0, iNo2 = 0;
	bool bRet;
	cout<<"Enter number of elements : ";
	cin>>iNo1;
	cout<<"Enter the number : ";
	cin>>iNo2;
	
	Number obj(iNo1,iNo2);
	obj.Accept();
	bRet = obj.Display();
	if(bRet == TRUE)
	{
		cout<<iNo2<<" is present ";
	}
	else
	{
		cout<<iNo2<<" is not present ";
	}
	
    return 0;
}













