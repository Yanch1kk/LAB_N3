#include <stdio.h>  

int main() {
    double x, y;  
    
    
    printf("Введіть координати точки A (x y): ");  
    scanf("%lf %lf", &x, &y); 

    // Обчислюємо значення y для заданого x на прямій, що проходить через точки (0,1) та (1,2)
    double y_line = x + 1;  

    if (y > y_line) {  
        printf("Точка знаходиться вище за лінію.\n");  
    } else if (y < y_line) {  
        printf("Точка знаходиться нижче за лінію.\n");  
    } else {  
        printf("Точка знаходиться на лінії.\n");  
    }

    return 0;  
}
