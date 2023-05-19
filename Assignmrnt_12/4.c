//Problem statement-:Accept N number from user and display all such numbers which contais 3 digits in it.

#include<stdio.h>
#include<stdlib.h>
void Digits(int Arr[],int iLength)
{
    int iCnt=0;
    int iDigit=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
       int iCount=0;
       int iTemp=Arr[iCnt];
       while(iTemp!=0)
       {
        iDigit=iTemp%10;
        iCount++;
        iTemp=iTemp/10;
       }
       if(iCount==3)
       {
        printf("%d\n",Arr[iCnt]);
       }

    }
     
}
int main()
{
    int iSize=0;
    int iCnt=0;
    int iRet=0;
    int *ptr=NULL;
    printf("ENTER NUMBER OF ELEMENTS::\n");
    scanf("%d",&iSize);
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
    Digits(ptr,iSize);
    free(ptr);
    return 0;
}