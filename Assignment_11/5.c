//Problem Statment=Accept N numbers from user and return product of all odd elements.

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[],int iLength)
{
    int iCnt=0;
    int Mul=1;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
       if((Arr[iCnt]%2)!=0)
       {
            Mul=Mul*Arr[iCnt];
       }
       else if((Arr[iCnt]%2)==0)
       {
           Mul=0;
       }
    }
    return Mul;   
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
    iRet=Product(ptr,iSize);
    printf("%d",iRet);
    free(ptr);
    return 0;
}