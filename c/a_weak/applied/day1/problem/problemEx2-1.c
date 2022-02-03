#include <stdio.h>
#include <math.h>

void main() {
    double x1, y1, x2, y2, b1, b2;

    printf("1つ目のベクトルのx : ");
    scanf("%lf", &x1);
    printf("1つ目のベクトルのy : ");
    scanf("%lf", &y1);
    printf("2つ目のベクトルのx : ");
    scanf("%lf", &x2);
    printf("2つ目のベクトルのy : ");
    scanf("%lf", &y2);

    b1 = pow(x1, 2.0) + pow(y1, 2.0);
    b1 = sqrt(b1);
    b2 = pow(x2, 2.0) + pow(y2, 2.0);
    b2 = sqrt(b2);

    printf("(%f, %f) と (%f, %f) の距離は %.10f\n", x1, y1, x2, y2, fabs(b1 - b2)); // 謎にサイトと答え合わん．電卓で出したのとは合ってたのに...
}
