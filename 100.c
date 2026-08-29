#include<stdio.h>

int main(){

FILE *fptr;

fptr = fopen("hello.txt", "w");

fputc('A',fptr);
fputc('P',fptr);
fputc('P',fptr);
fputc('L',fptr);
fputc('E',fptr);




// fprintf(fptr , "%c" , 'M');
// fprintf(fptr , "%c" , 'A');
// fprintf(fptr , "%c" , 'N');
// fprintf(fptr , "%c" , 'G');
// fprintf(fptr , "%c" , 'O');


// printf("%c\n",fgetc(fptr));
// printf("%c\n",fgetc(fptr));
// printf("%c\n",fgetc(fptr));
// printf("%c\n",fgetc(fptr));
// printf("%c\n",fgetc(fptr));

fclose(fptr);


}