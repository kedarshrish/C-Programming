#include<stdio.h>

int main(){

char ch;
printf("Enter a charachter ");
scanf("%c",&ch);

if(ch>= 'a' && ch<= 'z'){

    printf("charcter is lowercase");
}

else if (ch>='A' && ch<='Z'){

    printf("character is Uppercase");

}

else{

    printf("neither an lowercase character nor a Uppercase");
}

return 0;


}