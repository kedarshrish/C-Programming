#include<stdio.h>
#include<string.h>


void slice();

int main(){


slice();

}

void slice(){

char str[100];
printf("enter a string:");

gets(str);
int i;
int n,m;
printf("enter n and m :");
scanf("%d %d",&n , &m);

for(i = n ; i <=m ; i++){

    printf("%c",str[i]);
}


}