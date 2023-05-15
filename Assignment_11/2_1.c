//Problem Statement-:Accept N numbers from user and accept one anothe number as NO,return index of first occurance of that NO.

#include<stdio.h>
#include<stdlib.h>
#define ERR_NOTFOUND -1
int FirstOcc(int Arr[],int iLength,int iNo)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
       if(Arr[iCnt]==iNo)
       {
          break;
       }
    }
    if(iCnt==iLength)
    {
        return ERR_NOTFOUND;
    }
    else
    {
        return iCnt;
    }
}
int main()
{
    int iSize=0;
    int iCnt=0;
    int iSearch=0;
    int iRet=0;
    int *ptr=NULL;

    printf("Enter the Size of array::\n");
    scanf("%d",&iSize);

    ptr=(int*)malloc(iSize*sizeof(int));

    printf("Enter the elements you want to insert\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the element you want to search::\n");
    scanf("%d",&iSearch);

    printf("Elements are\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    iRet=FirstOcc(ptr,iSize,iSearch);
    if(iRet==ERR_NOTFOUND)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("First occurrence of number is %d\n",iRet);
    }
    
    free(ptr);
    return 0;
}