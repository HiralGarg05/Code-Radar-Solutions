#include <stdio.h>
int main(){
    int a,isPrime;
    scanf("%d",&a);
    if(a<2){
        printf("Not Prime");
    }
    for(int i=2;i<a;i++){
        if(n%i==0){
            isPrime=0;
            break;
        }
    }
    if(isPrime){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}
