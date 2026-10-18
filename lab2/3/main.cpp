#include <stdio.h>

int main(){
    int n;

  
    scanf("%d", &n);
    int min = n;
    int max = n;    
    while(n != 0) {
        if (max < n){
            max = n;
        }
        if (min > n){
            min = n;
        }
        scanf("%d",&n );
    }    
    printf("%d %d", max, min);
}
