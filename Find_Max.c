/*
Accept the input from the user in Linked list and return maximum number

Input Linked List : |110|->|230|->|320|->|240|
Output : 320
*/

#include<stdio.h>
#include"LinkedList.h"

int FindMax(PNODE head)
{
    int iMax = head -> data;

    while(head != NULL)
    {
        if(iMax < head -> data)
        {
            iMax = head -> data;
        }
        head = head -> next;
    }
    return iMax;
}

int main()
{
    PNODE First = NULL;
    int i = 0, iRet = 0, iSize = 0, iValue = 0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iSize);

    printf("Enter the data into Linked List : \n");
    for(i = 0; i < iSize; i++)
    {
        scanf("%d",&iValue);
        InsertFirst(&First, iValue);
    }

    Display(First);

    iRet = FindMax(First);

    printf("Maximum number is : %d\n",iRet);

    return 0;
}