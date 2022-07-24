
/*
Accept the input from the user in Linked list and Display Prime numbers

Input Linked List : |11|->|20|->|17|->|41|->|22|->|89|
Output : 11     17      41      89
*/

#include<stdio.h>
#include"LinkedList.h"

void DisplayPrime(PNODE head)
{
    int i = 0;
    int iCnt = 0;

    printf("The perfect numbers are : \n");

    while(head != NULL)
    {   
        iCnt = 0;
        for(i = 2; i < head -> data; i++)
        {
            if(head -> data % i == 0)
            {
                iCnt++;
            }
        }
        if(iCnt == 0)
        {
            printf("%d\n",head -> data);
        }
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

    DisplayPrime(First);

    return 0;
}