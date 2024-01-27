#include<stdio.h>
int main(){
    int n,tamp;
    printf("enter the size of array :- ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array :- ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<n;i++){
        tamp=arr[i];
        int j=i-1;
        while((j>=0)&&(arr[j]>tamp))
        {
        arr[j+1]=arr[j];
        j--;
        }
        arr[j+1]=tamp;
    }
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}