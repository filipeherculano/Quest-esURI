#include <stdio.h>

float mod(float a, float b){
        int r;
        r = a - b;
        if (r < 0){
                r = r*(-1);
                return r;
        }
        else{
                return r;
        }
}


int main(){
        float a, b, c;
        scanf ("%f %f %f", &a, &b, &c);
        if ((mod(a,b) < c && c < a+b) || (mod(a,c) < b && b < a+c) || (mod(b,c) < a && a < b+c)){
                printf("Perimetro = %.1f\n", a+b+c);
        }       
        else{
                printf("Area = %.1f\n", (c*(a+b))/2);
        }       
        return 0;
}
