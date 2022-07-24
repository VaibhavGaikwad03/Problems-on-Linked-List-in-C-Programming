/*
Accept the input from the user in Linked list and Display reverse numbers

Input Linked List : |11|->|28|->|17|->|41|->|6|->|89|
Output : |11|->|82|->|71|->|14|->|6|->|98|
*/

#include<stdio.h>
#include"LinkedList.h"

void Reverse(PNODE head)
{
    int iDigit = 0;
    int iRev = 0;

    while(head != NULL)
    {
        iRev = 0;
        while (head -> data > 0)
        {
            iDigit = head -> data % 10;
            iRev = iRev * 10 + iDigit;
            head -> data = head -> data / 10;
        }
        printf("|%d| ->",iRev);

        head = head -> next;
    }
    printf("NULL\n");
}

int main()
{
    PNODE First = NULL;
    int i = 0, iSize = 0, iValue = 0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iSize);

    printf("Enter the data into Linked List : \n");
    for(i = 0; i < iSize; i++)
    {
        scanf("%d",&iValue);
        InsertFirst(&First, iValue);
    }

    Display(First);

    Reverse(First);

    return 0;
}