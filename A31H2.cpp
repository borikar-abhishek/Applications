//Write an applications which accepts file name from user and create that file .
//Input : Demo.txt
//Output : File successfully created.

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
		  fd = open(Name, O_CREAT);
		  if(fd == -1)
		  {
			cout<<"Unable to create file";
		  }
		  else
		  {
			cout<<"File created successfully";
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
	cout<<"Enter file name to be created : \n";
	cin>>str;
	FileX obj(str);
	
	return 0;
}