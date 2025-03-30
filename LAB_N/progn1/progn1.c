#include <stdio.h>
#include <math.h>

int main() {
    int b, c;
    double a;

    printf("Введіть b та c: ");
    scanf("%d %d", &b, &c);
    // A) Використання скороченої форми if
    if (b == 1) a = 4 * b + 5 * c;
    if (b == 2) a = sqrt(4 - b * c);
    if (b == 3) a = (double)(b - 2) / (c * c);
    printf("Результат (скорочена форма if): a = %.2f\n", a);
    // Б) Використання повної форми if ... else if
    if (b == 1) {
        a = 4 * b + 5 * c;
    } else if (b == 2) {
        a = sqrt(4 - b * c);
    } else if (b == 3) {
        a = (double)(b - 2) / (c * c);
    
    }
    printf("Результат (повна форма if ... else if): a = %.2f\n", a);

    return 0;
}
