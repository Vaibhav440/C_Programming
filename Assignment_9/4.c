//Problem Statment-:Accept N number from user and display all such elements which are e divisible by 3 and 5.

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
  int iCnt=0;
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
     if((Arr[iCnt]%3)==0 && Arr[iCnt]%5==0)
     {
        printf("%d",Arr[iCnt]);
     }
  }
}
int main()
{
    int iSize=0;
    int iCnt=0;
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

    Display(ptr,iSize);
    return 0;
}