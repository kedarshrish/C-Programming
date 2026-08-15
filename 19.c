#include<stdio.h>

int main(){

int n;

do {

    printf("enetr n : ");
    scanf("%d",&n);
    printf("entered n is %d \n",n);

    if(n%7 == 0){

        break;
    }


}while(1);

printf("end;");

return 0;

}