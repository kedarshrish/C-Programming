#include<stdio.h>
#include<string.h>


int main(){

char str[100];
printf("enetr a string : ");
scanf("%s",str);


int n = strlen(str);
int j;

for(j = 0 ; j < n ; j++){

  if(str[j]== 'a'){

    str[j] = 'A';
  }

  else if(str[j] == 'e'){

    str[j] = 'E';
  }

  else if(str[j] == 'i'){

    str[j] ='I';
  }

  else if(str[j] == 'o'){

    str[j] = 'O';
  }

  else if(str[j] == 'u'){

    str[j] = 'U';
  }

}


printf("%s",str);

}
