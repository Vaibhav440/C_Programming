//Accept N numbers from user and display all such elements which are divisible by 5
#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[],int iLength)
{
  int iCnt=0;
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
    if((Arr[iCnt]%5)==0)
    {
        printf("%d\n",Arr[iCnt]);
    }
  }
}
int main()
{
    int iSize=0;
    int iCnt=0;
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
    Display(ptr,iSize);
  
    free(ptr);

   return 0;
}

