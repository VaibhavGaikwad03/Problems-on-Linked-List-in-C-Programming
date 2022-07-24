/*
Accept the input from the user in Linked list and return the summation of numbers 

Input Linked List : |10|->|20|->|30|->|40|
Output : 100
*/

#include<stdio.h>
#include"LinkedList.h"

int Summation(PNODE head)
{
    int iSum = 0;

    while(head != NULL)
    {
        iSum = head -> data + iSum;
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

    iRet = Summation(First);

    printf("Addition is : %d ",iRet);

    return 0;
}