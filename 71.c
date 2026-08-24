#include<stdio.h>

int main(){



    char name[100];
    printf("enter name ");
    scanf("%s",name);

    int i;
    int n = 0;

    for (i = 0 ; i < 100 ; i++){

         
         n = n + 1 ;

         if(name[i] == '\0'){

            break;
         }
    }

    printf("%d", n-1);
}