#include<stdio.h>
#include<math.h>

int main(){

char day;
printf("Enter a Number(1-7) :");
scanf("%c",&day);

switch(day){

case 'm' :  
printf("Monday");
break ;

case 't' :  
printf("Tuesday");
break ;

case 'w' :  
printf("wednesday");
break ;

case 'T' :  
printf("Thursday");
break ;

case 'f' :  
printf("Friday");
break ;

case 's' :  
printf("Satuday");
break ;

case 'S' :  
printf("Sunday");
break ;

default :
printf("Not a correct day ");


}

return 0;

}