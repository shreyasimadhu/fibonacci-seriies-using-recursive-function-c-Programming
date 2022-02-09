#include<stdio.h>
int fibonacci(int);
int main(){
    int n,i=0,c;
    scanf("%d",&n);
    printf("Fibonacci For %d is \n",n);
    for(c=1;c<=n;c++){
        printf(" %d",fibonacci(i));
        i++;
    }
    return 0;
}

int fibonacci(int n){
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return(fibonacci(n-1)+fibonacci(n-2));
}
