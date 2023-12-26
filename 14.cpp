#include <stdio.h>
#include <limits.h> //підключення бібліотек
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    printf("Veit number :"); //розмір масиву
    scanf_s("%d", &n);

    // Виділення динамічної пам'яті для масиву
    int* array = (int*)malloc(n * sizeof(int));

    if (array == NULL) { 
        printf("Не вдалося виділити пам'ять.\n");
        return 1;
    }

    int array[n]; // оголошення масиву 

    printf("Vedit elementu masuvy:\n");//введення елементів масиву
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &array[i]);
    }

    int min = *array;// початково дорівнюють значенню першого елементу
    int max = *array;  
    int minPosition = 0;//оголошення змінних
    int maxPosition = 0;

    // Використання адресної арефметики для обчислення мінімуму та максимуму
    for (int i = 1; i < n; i++) { 
        if (*(array + i) < min) {
            min = *(array + i); // пошук мінімального
            minPosition = i;
        }
        else if (*(array + i) > max) {
            max = *(array + i);  // пошук максимального
            maxPosition = i;
        }
    }

    printf("Min: %d\n", min); // вивід
    printf("Max: %d\n", max);

    int distance = abs(minPosition - maxPosition); // пошук різниці
    printf("Distance: %d\n", distance);

    // Звільнення виділеної пам'яті
    free(array);

    return 0;
}