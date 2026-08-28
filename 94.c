#include<stdio.h>


struct vectors{

int x1;
int y1;
int x2;
int y2;



};

void printvs();

int main(){

    printvs();


}

void printvs(){

    struct vectors v1;

  printf("enter values of x1 y1 and x2 y2 respectivly \n");
  
 scanf("%d",&v1.x1);
 scanf("%d",&v1.y1);
 scanf("%d",&v1.x2);
 scanf("%d",&v1.y2);



 printf("The sum of vectors is : %di + %dj",v1.x1 + v1.x2 , v1.y1 + v1.y2);

 
}