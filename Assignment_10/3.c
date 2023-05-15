//Probelm Statement-:Accept N number from user and return difference between frequency of even number and Odd number

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool Check(int Arr[],int iLength)
{
    int iCnt=0;
    int bflag=false;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
       if(Arr[iCnt]==11)
       {
            bflag=true;
            break;
       }
    }
    return bflag;   
}
int main()
{
    int iSize=0;
    int iCnt=0;
    bool bRet=0;
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
    bRet=Check(ptr,iSize);
    if(bRet==true)
    {
        printf("11 is present\n");
    }
    else
    {
        printf("11 is not present\n");
    }

    free(ptr);
    return 0;
}