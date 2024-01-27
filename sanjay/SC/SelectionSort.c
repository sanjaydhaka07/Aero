#include<stdio.h>
int main(){
    int n;
    printf("enter the size of array :- ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array :- ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min;
    for(int i=0;i<n;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        if(min!=i){
            int p=arr[i];
            arr[i]=arr[min];
            arr[min]=p;
        }
    }
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}