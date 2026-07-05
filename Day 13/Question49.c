#include<stdio.h>

 int main(){
    int arr[100],n,i;

    printf("enter number of element:");
    scanf("%d",&n);

    printf("enter %d elements:\n",n);

    for(i=0; i<n; i++)
    {
      scanf("%d",&arr[i]);
    }

    printf("array elements are:\n");

    for(i=0; i<n; i++)
    {

        printf("%d\n",arr[i]);
    }
    return 0;

 }