#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    int k;

    scanf("%d",&k);
    if(n>k){
        for(int i=n-k;i<n;i++){
            printf("%d",&arr[i]);
        }
        for(int i=0;i=n-k;i++){
            printf("%d",&arr[i]);
        }
        }
        else{
             int j=k-n;
        for(int i=n-j;i<n;i++){
            printf("%d",&arr[i]);
        }
        for(int i=n-j;i<n,i++){

        }
        for(int i=0;i<n-j;i++){
            printf("%d",arr[i]);
        }
    }
    return 0;
    }
