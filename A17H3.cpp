//Accept N number from user and display all such elements which are even aand  divisible by 5.
//Input :   N : 6      
//          Elements are : 85  66  3  80  93  88
//Output : 80

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
		int i = 0;
		cout<<"Numbers which are even and divisible by 5 are : ";
		for(i = 0;i<iSize;i++)
		{
			if(((Arr[i]%5)==0)&&((Arr[i]%2)==0))
			{
				cout<<Arr[i];
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
	int iNo = 0;
	cout<<"Enter number of elements : ";
	cin>>iNo;
	Number obj(iNo);
	obj.Accept();
	obj.Display();
	
	
    return 0;
}













