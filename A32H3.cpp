//Write an applications which accepts two files names from user. Append the contents of first at the end of second file.
//Input : Demo.txt      
//        Hello.txt 
//Output : Concat contents of Demo.txt at the end of Hello.txt

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
		  fd = open(Name, O_RDONLY | O_APPEND);
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
		  char str[30];
          read(fd,str,10);		 
			
		}
		void WriteData()
		{
			char Arr[30];
			char str[30];
			write(fd,str,10);
		}
		

};



int main()
{
	char str[30]; 
	char Arr[30];
	cout<<"Enter first file name : \n";
	cin>>str;
	cout<<"Enter second file name : \n";
	cin>>Arr;
	
	FileX obj1(str);
	FileX obj2(Arr);
	obj1.ReadData();
    obj2.WriteData();
	
	return 0;
}