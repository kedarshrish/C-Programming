#include<stdio.h>

void chname();


int main(){

    
     chname();

     return 0;

}

void chname(){

int i;

char firstname[] = "SHRISH";
    

for(i = 0 ;  ; i++){

   printf("%c",firstname[i]);
  

   if (firstname[i] == '\0'){

    break;

   }

}

printf("\n");

char lastname[] = "KEDAR";

int j;
for(j=0 ; ; j++){

 printf("%c",lastname[j]);

if (lastname[j] == '\0'){

    break;

   }

}


}