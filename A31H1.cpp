//Write an applications which accepts file name from user and open that file in read mode .
//Input : Demo.txt
//Output : File successfully opened.

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
				cout<<"File successfully opened\n";
			}
		}
		
		~FileX()
		{
			close(fd);
		}
};


int main()
{
	char str[30];
	cout<<"Enter file name : \n";
	cin>>str;
	
	FileX obj(str);
	
	
	
	return 0;
}