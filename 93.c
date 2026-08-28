#include<stdio.h>
#include<string.h>


struct address{
int houseno;
int block;
char city[100];
char state[100];


};

int main(){

struct address add[5];

printf("Enetr info  1st person: \n");

scanf("%d",&add[0].houseno);
scanf("%d",&add[0].block);
scanf("%s",add[0].city);
scanf("%s",add[0].state);

printf("%d\n",add[0].houseno);
printf("%d\n",add[0].block );
printf("%s\n",add[0].city);
printf("%s\n",add[0].state);


printf("Enetr info of 2nd person : \n");

scanf("%d",&add[1].houseno);
scanf("%d",&add[1].block);
scanf("%s",add[1].city);
scanf("%s",add[1].state);

printf("%d\n",add[1].houseno);
printf("%d\n",add[1].block );
printf("%s\n",add[1].city);
printf("%s\n",add[1].state);


}


