//Write an applications which accepts file name and one character from user. Count the frequency of that character in file.
//Input : Demo.txt      
//        DDDham
//Output : Frequency of D is 3 

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
		void ReadData(char ch)
		{
			int iCnt = 0;
			int i= 0;
			char Arr[30] = {'\0'};
			
			while(read(fd,Arr,1)!=0)
			{
				if(ch==Arr[i])
				{
					iCnt++;
				}
			}
			printf("Frequency of %c is : %d",ch,iCnt);
		}

};



int main()
{
	char str[30];
	char ch = '\0';
	
	cout<<"Enter file name to be opened : \n";
	cin>>str;
	cout<<"Enter the character : \n";
	cin>>ch;
	
	FileX obj(str);
	
	obj.ReadData(ch);
	
	
	return 0;
}