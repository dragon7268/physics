#include <stdio.h>
#include <math.h>

int main() {
    double r, t, x, y;
    printf("반지름 값을 입력하시오: ");
    scanf_s("%lf", &r);
    printf("각도 값을 입력하시오: ");
    scanf_s("%lf", &t);

    const double PI = 3.1415926;
    double rad = t * PI / 180.0;
    printf("x좌표: %lf, y좌표: %lf\n", r * cos(rad), r * sin(rad));

    printf("x 값을 입력하시오: ");
    scanf_s("%lf", &x);
    printf("y 값을 입력하시오: ");
    scanf_s("%lf", &y);
    printf("%.2f %.2f\n", sqrt(x * x + y * y), atan2(y, x));
}