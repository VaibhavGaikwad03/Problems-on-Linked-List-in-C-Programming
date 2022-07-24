
/*
Accept the input from the user in Linked list and Display Pallindrome numbers 

Input Linked List : |11|->|28|->|17|->|414|->|6|->|89|
Output : 11     6      414
*/

#include<stdio.h>
#include"LinkedList.h"

void DisplayPalindrome(PNODE head)
{
    int iDigit = 0;
    int iRev = 0;
    int iTemp = 0;

    printf("Palindrome numbers are : \n");
    while(head != NULL)
    {
        iRev = 0;
        iTemp = head -> data;

        while (head -> data > 0)
        {
            iDigit = head -> data % 10;
            iRev = iRev * 10 + iDigit;
            head -> data = head -> data / 10;
        }
        if(iRev == iTemp)
        {
            printf("%d\n",iRev);
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

    DisplayPalindrome(First);

    return 0;
}