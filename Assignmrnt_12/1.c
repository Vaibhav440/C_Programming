//Problem statement-:Accept N number from user and return the largest number.

#include<stdio.h>
#include<stdlib.h>
int Maximum(int Arr[],int iLength)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
      int iCnt=0;
      int iMax=Arr[0];
      for(iCnt=0;iCnt<iLength;iCnt++)
      {
         if(Arr[iCnt]>iMax)
         {
            iMax=Arr[iCnt];
         }
      }
      return iMax;
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
    iRet=Maximum(ptr,iSize);
    printf("%d is the largest number",iRet);
    free(ptr);
    return 0;
}