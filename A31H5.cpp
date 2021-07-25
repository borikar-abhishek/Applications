//Write an applications which accepts file name from user and one string from user. Write that string at the end of file.
//Input : Demo.txt      
//        Hello World
//Output : Write Hello World at the end of Demo.txt file.

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
		  fd = open(Name, O_WRONLY | O_APPEND);
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
		void Write()
		{
			char Arr[] = " HELLO WORLD";
			write(fd,Arr,12);
		}

};



int main()
{
	char str[30];
	cout<<"Enter file name to be opened : \n";
	cin>>str;
	FileX obj(str);
	obj.Write();
	return 0;
}