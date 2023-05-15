//Problem Statement-:Accept N number from user and accept one another number as NO,check whethe NO is present or Not.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool Check(int Arr[],int iLength,int iNo)
{
    int iCnt=0;
    int iflag=false;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
       if(Arr[iCnt]==iNo)
       {
            iflag=true;
            break;
       }
    }
    return iflag;   
}
int main()
{
    int iSize=0;
    int iCnt=0;
    int iNo=0;
    bool bRet=0;
    int *ptr=NULL;
    printf("ENTER NUMBER OF ELEMENTS::\n");
    scanf("%d",&iSize);
    printf("Enter the number(no)\n");
    scanf("%d",&iNo);
    ptr=(int*)malloc(iSize*sizeof(int));

    printf("Enter the elements::\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    printf("Elements are::\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }
    bRet=Check(ptr,iSize,iNo);
    if(bRet==true)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }
    free(ptr);
    return 0;
}