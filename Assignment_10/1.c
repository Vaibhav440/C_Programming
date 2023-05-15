//Problem Statment-Accept N number from user and return frequency of even numbers

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iLength)
{
  int iCnt=0;
  int icount=0;
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
     if((Arr[iCnt]%2)==0)
     {
        icount++;
     }
  }
  return icount;
}
int main()
{
    int iSize=0;
    int iCnt=0;
    int iRet=0;
    int *ptr=NULL;
    printf("Enter number of elements::\n");
    scanf("%d",&iSize);
    ptr=(int*) malloc(iSize*sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory was not assigned..\n");
        return -1;
    }

    printf("Enter the elements::\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
      scanf("%d",&ptr[iCnt]);
    }

    printf("Elements of Arry are::\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
      printf("%d\n",ptr[iCnt]);
    }

    iRet=CountEven(ptr,iSize);
    printf("%d\n",iRet);
    return 0;
}