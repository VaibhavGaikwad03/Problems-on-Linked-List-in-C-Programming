/*
Accept the input from the user in Linked list and Display Large Digits from the elements of linked list

Input Linked List : |11|->|250|->|532|->|415|
Output : 1      5       5       9
*/

#include<stdio.h>
#include"LinkedList.h"

void DisplayLarge(PNODE head)
{
    int iDigit = 0;
    int iMax = 0;

    while(head != NULL)
    {
        while (head -> data != 0)
        {
            iDigit = head -> data % 10;
            if(iMax < iDigit)
            {
                iMax = iDigit;
            }
            head -> data = head -> data / 10;
        }
        printf("%d\n",iMax);
        iMax = 0;

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

    DisplayLarge(First);

    return 0;
}