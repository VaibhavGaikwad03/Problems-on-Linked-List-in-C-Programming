
/*
Accept the input from the user in Linked list and Display Multiplication of digits of elements in Linked List

Input Linked List : |11|->|20|->|32|->|41|
Output : 1      0       6       4
*/

#include<stdio.h>
#include"LinkedList.h"

void DisplayMultDigi(PNODE head)
{
    int iDigit = 0;
    int iMult = 0;

    printf("Multiplication of each element from the linked list are : \n");

    while(head != NULL)
    {   
        iMult = 1;
        while((head -> data) > 0)
        {
            iDigit = head -> data % 10;
            iMult = iMult * iDigit;
            head -> data = head -> data / 10;
        }
        printf("%d\n",iMult);

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

    DisplayMultDigi(First);

    return 0;
}