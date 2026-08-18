#include<stdio.h>


float calper(float sc , float ma , float sa);
int main(){

printf("the percentage is %f", calper(50 , 50 , 50));

}

float calper(float sc , float ma , float sa){

  float  marks = (sc + ma + sa) * 0.33333333333334;
  return marks; 


}