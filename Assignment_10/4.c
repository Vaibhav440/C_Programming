//Probelm Statement-:Accept N number from user and return frequency of 11 form it.

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength)
{
    int iCnt=0;
    int Counter=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
       if(Arr[iCnt]==11)
       {
            Counter++;
       }
    }
    return Counter;   
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
    iRet=Frequency(ptr,iSize);
    printf("%d",iRet);
    free(ptr);
    return 0;
}