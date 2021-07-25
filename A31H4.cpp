//Write an applications which accepts file name from user and display size of file.
//Input : Demo.txt
//Output : Say file size is 56 bytes.

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
		void Size()
		{
			int iRet = 0;
			int iSize = 0;
			char Arr[30] = {'\0'};
			while((iRet = read(fd,Arr,10))!=0)
			{
				iSize = iSize + iRet;
			}
			printf("File size is %d bytes",iSize);
		  
		}

};



int main()
{
	char str[30];
	cout<<"Enter file name to be opened : \n";
	cin>>str;
	FileX obj(str);
	obj.Size();
	return 0;
}