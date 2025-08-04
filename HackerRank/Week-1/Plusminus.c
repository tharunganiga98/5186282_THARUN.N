#include <stdio.h>

void fraction(int arr[],int n){
    int a=0,b=0,c=0;
    
    for(int i=0; i<n; i++){
        
        if(arr[i]>0)
            a++;
        else if (arr[i]<0)
            b++;
        else
             c++;
    }
 printf("%.6f\n", (float)a / n);
    printf("%.6f\n", (float)b / n);
    printf("%.6f\n", (float)c / n);
}

int main() {
    int n;
    scanf("%d", &n);         
    int arr[n];             

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  
    }

    fraction(arr, n);
    return 0;
}
\