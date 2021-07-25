//Write an applications which accepts file name from user and read all that data from that file and dislay contents on screen.
//Input : Demo.txt
//Output : Display all data of file

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
		void Read()
		{
		   char Arr[30] = {'\0'};
		   int iRet = 0;
		   
		   while((iRet = read(fd,Arr,10))!= 0)
		   {
			  printf("%s",Arr);  
		   }
		  
		}

};



int main()
{
	char str[30];
	cout<<"Enter file name to be opened : \n";
	cin>>str;
	FileX obj(str);
	obj.Read();
	return 0;
}