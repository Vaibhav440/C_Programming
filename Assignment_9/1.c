//Accept N numbers from user and return difference between summation of even elements and summation of odd elements.

#include<stdio.h>
#include<stdlib.h>
int Difference(int Arr[],int iLength)
{
  int iCnt=0;
  int iSum1=0;
  int iSum2=0;
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
    if((Arr[iCnt]%2)==0)
    {
        iSum1=iSum1+Arr[iCnt];
    }

    if((Arr[iCnt]%2)!=0)
    {
        iSum2=iSum2+Arr[iCnt];
    }
  }
  return iSum1-iSum2;
}
int main()
{
    int iSize=0;
    int iCnt=0;
    int iRet=0;
    int *ptr=NULL; 
    printf("Enter the number of elements:\n");
    scanf("%d",&iSize);
    ptr=(int*)malloc(iSize*sizeof(int));
    if(ptr==0)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter the elments:\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
      scanf("%d",&ptr[iCnt]);
    } 

    
    printf("Elements of array are:\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
      printf("%d\n",ptr[iCnt]);
    }
    iRet=Difference(ptr,iSize);
    printf("Difference is %d\n",iRet);
    free(ptr);

   return 0;
}

