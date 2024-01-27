#include<stdio.h>
int sanjay(int n){
    if (n==1){
        return 1;
    }
    else {
        if(n%2==0){
            n=n/2;
        }
        else {
            n= n*3 +1;
        }
        printf("%d ",n);
        sanjay(n);
    }
}
int main(){
    int n;
    printf("Enter the positie number ");
    scanf("%d",&n);
    sanjay(n);
}