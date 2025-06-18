#include <stdio.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main()
{
    double a, b, c;
    while (scanf("%lf %lf %lf", &a, &b, &c) == 3)
    {
        if (a + b > c && 0 < a && a <= b && b <= c && c <= 1000)
        {
            double p = (a + b + c) / 2.0;
            double At1 = sqrt(p * (p - a) * (p - b) * (p - c));
            double r = At1 / p;
            double Ac2 = (r * r) * M_PI;
            double R = (a * b * c) / (4.0 * At1);
            double Ac1 = (R * R) * M_PI;
            double At2 = At1 - Ac2;
            double Ac12 = Ac1 - At1;

            printf("%.4lf %.4lf %.4lf\n", Ac12, At2, Ac2);
        }
        else
        {
            printf("INVALIDO\n");
        }
    }

    return 0;
}
