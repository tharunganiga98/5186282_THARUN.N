#include <stdio.h>

void Twosum(long arr[5] , int n){
    long sum=0, min =arr[0], max=arr[0];
    
    for(int i=0; i<n; i++){
        sum = sum+arr[i];
        if(arr[i]<min)
            a=arr[i];
        if(arr[i]>max)
            b=arr[i];
        
    }
    printf("%ld %ld\n", sum-max , sum-min);
}

int main(){
    long arr[5];
    for(int i=0; i<5; i++){
        scanf("%ld\n", &arr[i]);
    }
    Twosum(arr,5);
    return 0;  
}