#include <stdio.h>
#include <math.h>

int main ()
{
    float a, b, c, D, x, x1, x2;
    printf("Input a in a(x^2) + bx + c = 0:\n");
    scanf("%f", &a);
    printf("Input b in a(x^2) + bx + c = 0:\n");
    scanf("%f", &b);
    printf("Input c in a(x^2) + bx + c = 0:\n");
    scanf("%f", &c);
    if (a == 0) {
        if (b == 0) {
            printf("Infinite number of roots");
        }
        else {
            x = -c / b;
            printf("One root: x = %f", x);
        }
    }
    else {
        D = (b * b) - (4 * a * c);
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        printf("Two roots: x1 = %f, x2 = %f", x1, x2);
    }
}