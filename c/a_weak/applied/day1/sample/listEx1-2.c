#include <stdio.h>
#include <math.h>

#define PI 3.141592653589793

void main() {
    int angle;
    double rad;

    printf("角度を入力して下さい(0 ~ 360) : ");
    scanf("%d", &angle);

    rad = PI * (double)angle / 180.0;

    printf("sin(%d) = %f\n", angle, sin(rad));
    printf("cos(%d) = %f\n", angle, cos(rad));
    printf("tan(%d) = %f\n", angle, tan(rad));
}
