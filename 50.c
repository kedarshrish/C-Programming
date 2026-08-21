#include<stdio.h>

int main(){


    float  gst[3] = {100.0 , 200.0 , 300.0 };

    

    printf("the price with gst is %f\n", gst[0] + 0.18*gst[0] );
      printf("the price with gst is %f\n", gst[1] + 0.18*gst[1] );
        printf("the price with gst is %f\n", gst[2] + 0.18*gst[2] );
}