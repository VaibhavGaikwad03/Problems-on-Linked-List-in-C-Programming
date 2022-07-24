/*
Accept the input from the user in Linked list and Display Addition of digits of each element

Input Linked List : |110|->|230|->|20|->|240|->|640|
Output : 2      5       2       6       10
*/

#include<stdio.h>
#include"LinkedList.h"

void DisplayAddDigit(PNODE head)
{
    int iDigit = 0;
    int iSum = 0;

    printf("Addition of each element from the linked list are : \n");

    while(head != NULL)
    {   iSum = 0;
        while((head -> data) > 0)
        {
            iDigit = head -> data % 10;
            iSum = iSum + iDigit;
            head -> data = head -> data / 10;
        }
        printf("%d\n",iSum);

        head = head -> next;
    }
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

    DisplayAddDigit(First);

    return 0;
}