#include <stdio.h>  

int main() {
    int index;  
    printf("Введіть поштовий індекс: ");  
    scanf("%d", &index);  

    switch (index) {
        case 58000:
            printf("Чернівці\n");
            break;
        case 1001:
            printf("Київ\n");
            break;
        case 79000:
            printf("Львів\n");
            break;
        case 65000:1
            printf("Одеса\n");
            break;
        case 50000:
            printf("Кривий Ріг\n");
            break;
        default:
            printf("Невідомий поштовий індекс!\n");  // Якщо індекс не знайдено
            break;
    }

    return 0; 
}
