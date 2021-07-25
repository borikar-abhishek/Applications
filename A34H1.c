/*
Write a program which displays all elements which are perfect from singly linear linked list.
Function Prototype :
int DisplayPerfect( PNODE Head);
Input linked list : |11|->|28|->|17|->|41|->|6|->|89|
Output : 6 28
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

struct node
{
	int Data;
	struct node *Next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int No)
{
	PNODE newn = NULL;
	
	newn = (PNODE)malloc(sizeof(NODE));
	newn->Data = No;
	newn->Next = NULL;
	
	if(*Head==NULL)
	{
		*Head = newn;
	}
	else
	{
		newn->Next=*Head;
		*Head = newn;
	}
}
void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("|%d|->\t",Head->Data);
        Head = Head -> Next;
    }
    printf("NULL\n");
}

void DisplayPerfect(PNODE Head)
{
	int i = 1,iSum = 0, iRem = 0;
	while((Head!=NULL)&&(i<(Head->Data)))
	{
		if(((Head->Data)%i)==0)
		{
			iSum = iSum + i;
			i++;
		}
	}
	if((Head->Data)==iSum)
	{
		printf("%d",Head->Data);
	}
}

int main()
{
	PNODE First = NULL;
	int iRet = 0;
	int No = 0;
	
	InsertFirst(&First,89);
	InsertFirst(&First,6);
	InsertFirst(&First,41);
	InsertFirst(&First,17);
	InsertFirst(&First,28);
	InsertFirst(&First,11);
	
	printf("Actual nodes are\n ");
	Display(First);
	
	DisplayPerfect(First);
	
	
	
	return 0;
}