/*
Accept the input from the user in Linked list and return second max number 

Input Linked List : |110|->|230|->|320|->|240|
Output : 240
*/

#include<stdio.h>
#include"LinkedList.h"

int FindSecMax(PNODE head)
{
    int iMax = 0;
    int iSecMax = 0;

    while(head != NULL)
    {
        if(iMax < head -> data)
        {
            iSecMax = iMax;

            iMax = head -> data;
        }
        else if(iMax > head -> data && iSecMax < head -> data)
        {
            iSecMax = head -> data;
        }
        head = head -> next;
    }
    return iSecMax;
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

    iRet = FindSecMax(First);

    printf("Second maximum number is : %d\n",iRet);

    return 0;
}