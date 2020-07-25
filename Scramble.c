#include<stdio.h>
#define MAX 10
#define MIN 0
int main()
{
 char arr1[10],arr2[10],i;
 printf("Enter a ten letter word in all capitals, letter-by-letter:\n");
 for(i=0;i<10;i++)
 {
  scanf("%c",&arr1[i]);
 }
 printf("The given word is : ");
 for(i=0;i<10;i++)
 {
  printf("%c",arr1[i]);
 }
 for(i=0;i<10;i++)
 {
  if((i%2==0)&&((i-2)>=0))
  {
    arr2[i]=arr1[i-2];
  }
  else if((i%2==0)&&((i-2)<0))
  {
    arr2[i]=arr1[MAX-2];
  }
  else if((i%2!=0)&&((i+2)<=9))
  {
    arr2[i]=arr1[i+2];
  }
  else if((i%2!=0)&&((i+2)>9))
  {
    arr2[i]=arr1[MIN+2];
  }
  }
  printf("\nThe output is : ");
  for(i=0;i<10;i++)
  {
    printf("%c",arr2[i]);
  }
 }
OUTPUT:-
Enter a ten letter word in all capitals, letter-by-letter:
ASSIGNMENT
The given word is : ASSIGNMENT
The output is : NIANSEGTMS 
