#include <stdio.h>
#include <limits.h> //���������� �������
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    printf("Veit number :"); //����� ������
    scanf_s("%d", &n);

    // �������� �������� ���'�� ��� ������
    int* array = (int*)malloc(n * sizeof(int));

    if (array == NULL) { 
        printf("�� ������� ������� ���'���.\n");
        return 1;
    }

    int array[n]; // ���������� ������ 

    printf("Vedit elementu masuvy:\n");//�������� �������� ������
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &array[i]);
    }

    int min = *array;// ��������� ��������� �������� ������� ��������
    int max = *array;  
    int minPosition = 0;//���������� ������
    int maxPosition = 0;

    // ������������ ������� ���������� ��� ���������� ������ �� ���������
    for (int i = 1; i < n; i++) { 
        if (*(array + i) < min) {
            min = *(array + i); // ����� ����������
            minPosition = i;
        }
        else if (*(array + i) > max) {
            max = *(array + i);  // ����� �������������
            maxPosition = i;
        }
    }

    printf("Min: %d\n", min); // ����
    printf("Max: %d\n", max);

    int distance = abs(minPosition - maxPosition); // ����� ������
    printf("Distance: %d\n", distance);

    // ��������� ������� ���'��
    free(array);

    return 0;
}