#include<stdio.h>


typedef struct bankdetailsandinformatoin{

    char name[100];
    int acnum;

} bdandif;



int main(){

    bdandif b1 = {"Shrish", 12411013};
    // printf("Enetr details :\n");
    // scanf("%s",b1.name);
    // scanf("%d",&b1.acnum);

    // printf("\n");

    printf("%s\n",b1.name);
    printf("%d\n",b1.acnum);

    return 0;


}