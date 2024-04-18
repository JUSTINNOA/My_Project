#include <stdio.h>
#include <stdlib.h>
#include "main.h"
//Form itterative de fib
void fibo_iter(int n){
    int a,b,fib;
    printf("Entrez le nombre n:");
    scanf("%d",&n);
    a=0;
    b=1;
    fib=0;
    printf("La suite fibonacci de %d est:",n);
    if(n==0||n==1){
        return n;
    }
    else{
        for(i=1;i<=n;i++){
        fib=fib+a;
        a=b;
        b=fib;
        }
        printf("%d\t",fib);
    }
}
//Form recursive de fib
void fibo_recur(int n){
    printf("Entrez le nombre n:");
    scanf("%d",&n);
    printf("La suite fibonacci de %d est:",n);
    if(n==0||n==1){
        return n;
    }
    else{
        for(i=1;i<=n;i++)
        {
        return fibo_recur(n-1)+fibo_recur(n-2);
        } 
    }
}
