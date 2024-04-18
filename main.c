#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"

int main(){
int choix;
int r=0,n;

do{
printf("Comment voulez executer votre suite fibonacci ?\n");
printf("Tapez 1 pour executer itterativement ou tapez 2 pour executer recursivement:");
scanf("%d",&choix);
if(choix !=1||choix !=2)
{
    printf("Choix invalide!\n");

}else{
    if(choix==1){
        printf("Vous avez choissi la forme itterative\n");
        fibo_iter(n);
    }else{
       printf("Vous avez choissi la forme recursive\n");
        fibo_recur(n); 
    }

}
printf("Si vous voulez recommencer tapez 0 ou tapez 1 pour quitter\n");
scanf("%d",&cr);
if(cr==0){
    return r;
}else if(cr==1){
 return r++;
}
}while(r!=1);

return 0;
}