//Probelm Statement-:Accept N number from user accept one another number as  NO,return frequency of NO form it.

#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[],int iLength,int iNo)
{
    int iCnt=0;
    int iCounter=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
       if(Arr[iCnt]==iNo)
       {
            iCounter++;
       }
    }
    return iCounter;   
}
int main()
{
    int iSize=0;
    int iCnt=0;
    int iNo=0;
    int bRet=0;
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
    bRet=Frequency(ptr,iSize,iNo);
    printf("%d",bRet);
    free(ptr);
    return 0;
}