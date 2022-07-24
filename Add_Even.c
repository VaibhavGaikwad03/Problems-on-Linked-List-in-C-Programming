/*
Accept the input from the user in Linked list and return addition of Even numbers

Input Linked List : |11|->|20|->|32|->|41|
Output : 52
*/

#include<stdio.h>
#include"LinkedList.h"

int AddEven(PNODE head)
{
    int iSum = 0;
    while(head != NULL)
    {
        if((head -> data) % 2 == 0)
        {
            iSum = iSum + head -> data;
        }       
        head = head -> next;
    }
    return iSum;
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

    iRet = AddEven(First);

    printf("The Addition of Even numbers is : %d ",iRet);

    return 0;
}