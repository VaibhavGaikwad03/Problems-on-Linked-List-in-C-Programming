/*
Accept the input from the user in Linked list and return minimum number

Input Linked List : |110|->|230|->|320|->|240|
Output : 110
*/

#include<stdio.h>
#include"LinkedList.h"

int FindMin(PNODE head)
{
    int iMin = head -> data;

    while(head != NULL)
    {
        if(iMin > head -> data)
        {
            iMin = head -> data;
        }
        head = head -> next;
    }
    return iMin;
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

    iRet = FindMin(First);

    printf("Minimum number is : %d\n",iRet);

    return 0;
}