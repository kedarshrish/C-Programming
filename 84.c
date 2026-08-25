#include<stdio.h>
#include<string.h>



void removespc();

int main(){


  removespc();


}

void removespc(){

  char str[100];
  printf("enter a string:");
  gets(str);
  
  int n = strlen(str);
  int i;
  int j = 0;
  for(i = 0 ; i < n ; i++){

    if(str[i] != ' '){

        str[j] = str[i];
        j++;


       
    }
   

   }
 str[j] = '\0';
    printf("The string without spaces is: %s", str);
    
   


}




