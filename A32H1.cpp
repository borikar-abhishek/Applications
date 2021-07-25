//Write an applications which accepts two file names from user. Compare the contents of that two files. If contents are same then return true otherwise return false.
//Input : Demo.txt      
//        Hello.txt 
//Output : Compare contents of Demo.txt and Hello.txt 

#include<iostream>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdio.h>

using namespace std;

class FileX
{
public :
        int fd;
		
		FileX(char Name[])
		{
		  fd = open(Name, O_RDONLY);
		  if(fd == -1)
		  {
			cout<<"Unable to open file\n";
		  }
		  else
		  {
			cout<<"File opened successfully\n";
		  }
		}
		
		~FileX()
		{
			close(fd);
		}
		void ReadData()
		{
			char Arr1[30] = {'\0'};
			char Arr2[30] = {'\0'};
			int iRet1 = 0, iRet2 = 0, iSize1 = 0, iSize2 = 0;
			
			int i =0, j=0;
			
			
			while((iRet1 = read(fd,Arr1,1))!=0)
			{
				iSize1 = iSize1 + iRet1;
			}
			
			while((iRet2 = read(fd,Arr2,1))!=0)
			{
				iSize2 = iSize2 + iRet2;
			}
			
			for(i=0,j=0; i<=iSize1,j<=iSize2; i++,j++)
			{
				if(Arr1[i]==Arr2[j])
				{
					cout<<"TRUE";
				}
				if(Arr1[i]!=Arr2[j])
				{
					cout<<"FALSE";
				}
			}
			
		}

};



int main()
{
	char str1[30];
	char str2[30];
	
	cout<<"Enter first file name to be opened : \n";
	cin>>str1;
	cout<<"Enter second file name to be opened : \n";
	cin>>str2;
	
	FileX obj1(str1);
	FileX obj2(str2);
	obj1.ReadData();
	obj2.ReadData();
	
	return 0;
}