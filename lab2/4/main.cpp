#include <stdio.h>
#include <math.h>
//abs(-1) -> 1

int main(){
    int n;

  
    scanf("%d", &n);
    int min = n;
    int max = n;    
    while(n != 0) {
        if (abs(max) < abs(n)){
            max = n;
        }
        if (abs(min) > abs(n)){
            min = n;
        }
        scanf("%d",&n );
    }    
    printf("%d %d", max, min);
}

