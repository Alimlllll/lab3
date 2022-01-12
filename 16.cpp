16) Вычислить квадратные корни вещественных чисел x = 2.0, 3.0, ... , 100.0. Распечатать значения x, Öx. Количество итераций, необходимых для вычисления корня, определяется точностью eps > 0 (eps – задано).
Для a > 0 величина Öa вычисляется следующим образом:
a0 = 1; ai+1 = 0.5*( ai+a/ai ) i = 0, 1, 2,...
Считать, что требуемая точность достигнута, если | ai-ai+1| < eps.

#include <stdio.h>
int main()
{
    float n, eps = 0.01;
    scanf("%f", &n);
    float r = n / 2;
    int i = 0;
    while (r - n / r > eps) 
    {
        i++;
        r = 0.5 * (r + n / r);
    }
    printf("%f %f", n, r);
}