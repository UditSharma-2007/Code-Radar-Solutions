#include <stdio.h>
int main(){
    float num;
    printf("Enter a floating-point number:");
    scnaf("%f",&num);
    printf("you entered %f",num);
    return 0;
}