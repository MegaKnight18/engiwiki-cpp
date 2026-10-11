#include <stdio.h>

int main(){
    int a;
    int b;
    int r=1;
    scanf("%d%d", &a,&b);
    
    for(int i=0; i < b; i++){
        r=r*a;
    }     
    printf("%d",r);
}
