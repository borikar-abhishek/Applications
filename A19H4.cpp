//Accept N number from user and accept Range from user and display all elements from that range.
//Input :   N :   6
//          Start : 60         End : 90   
//          Elements are : 85  66  3  76  93  88 
//Output : 66  76  88

#include<iostream>

using namespace std;

class Number
{
public : 
	int *Arr;
	int iSize;
    int iStart;
	int iEnd;
    Number(int iNo1,int iFirst, int iLast)
	{
		iSize = iNo1;
		iStart = iFirst;
		iEnd = iLast;
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
			if((Arr[i]>iStart)&&(Arr[i]<iEnd))
			{
				cout<<"\t"<<Arr[i];
			}
		}
	}
	~Number()
	{
		delete []Arr;
	}

};


int main()
{
	int iNo1 = 0, iStart = 0, iEnd = 0;
	cout<<"Enter number of elements : ";
	cin>>iNo1;
	cout<<"Enter starting point : ";
	cin>>iStart;
	cout<<"Enter ending point : ";
	cin>>iEnd;
	
	Number obj(iNo1,iStart,iEnd);
	obj.Accept();
	obj.Display();
	
    return 0;
}













