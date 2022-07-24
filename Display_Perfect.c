
/*
Accept the input from the user in Linked list and Display Perfect numbers

Input Linked List : |11|->|28|->|17|->|41|->|6|->|89|
Output : 6      28
*/

#include<stdio.h>
#include"LinkedList.h"

void DisplayPerfect(PNODE head)
{
    int i = 0;
    int iSum = 0;

    printf("The perfect numbers are : \n");

    while(head != NULL)
    {
        iSum = 0;
        for(i = 1; i < head -> data; i++)
        {   
            if((head -> data) % i == 0)
            {
                iSum = iSum + i;
            }
        }
        if(head -> data == iSum)
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

    Dis(First);

    return 0;
}