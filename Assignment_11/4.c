//Problem statement-:Accept N number from user and accept Range,Display all elements from that range.

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iLength,int iStart,int iEnd)
{
  int iCnt=0;
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
    if(Arr[iCnt]>iStart && Arr[iCnt]<iEnd)
    {
        printf("\n%d\n",Arr[iCnt]);
    }
  }
}
int main()
{
    int iSize=0;
    int iCnt=0;
    int iNo1=0;
    int iNo2=0;
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

    printf("Enter the Starting point\n");
    scanf("%d",&iNo1);

    printf("Enter the Ending point\n");
    scanf("%d",&iNo2);

    printf("Elements are\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    Range(ptr,iSize,iNo1,iNo2);
    free(ptr);

    return 0;
}