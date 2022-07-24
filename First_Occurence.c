/*
Accept the input Linked list as an input from the user and accept another number. return first occurence of that number

Input Linked List : |10|->|20|->|30|->|40|->|50|->|30|->|70|
Input : 30
Output : 3
*/

#include<stdio.h>
#include"LinkedList.h"

int FirstOcc(PNODE head, int iNo)
{
    int iCount = 1;
    int iCnt = 0;

    while(head != NULL)
    {
        if(head -> data == iNo)
        {
            iCnt = iCount;
            break;
        }
        else
        {
            iCount++;
        }
        head = head -> next;
    }
    return iCnt;
}

int main()
{
    PNODE First = NULL;
    int i = 0, iRet = 0, iSize = 0, iValue = 0, iNo = 0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iSize);

    printf("Enter the data into Linked List : \n");
    for(i = 0; i < iSize; i++)
    {
        scanf("%d",&iValue);
        InsertFirst(&First, iValue);
    }

    printf("Enter the number : \n");
    scanf("%d",&iNo);

    Display(First);

    iRet = FirstOcc(First, iNo);

    printf("The number occurs at position : %d ",iRet);

    return 0;
}