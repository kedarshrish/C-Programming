#include<stdio.h>
#include<math.h>

float areasq( float n);  
float arearec(float l , float b);
float areacir( float r);

int main(){

    float n = 2.0;
    float l = 4.0;
    float b = 5.0;
    float r = 10.0;

    float sq;
    float rec;
    float cir;


          sq = areasq(n);
          printf("are of square %f\n",sq);

          
          printf("are of rec is %f\n", arearec(l,b));

          cir = areacir(r);
          printf("are of cir is %f\n", cir);

         
          return 0;

        }

float areasq(float n){

     return n*n;
}

float arearec(float l , float b){

    return l*b;

}

float areacir( float r){

    return 3.14*r*r;
}
