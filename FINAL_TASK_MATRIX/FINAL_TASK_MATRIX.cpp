#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    printf("Задание №1\n\n");
    printf("Отсортировать массив из n x m элементов построчно : каждая строка от минимального к максимальному элементу по значению. \n");
    int n, m;
    printf("Введите n: ");
    scanf("%d", &n);
    printf("Введите m: ");
    scanf("%d", &m);
    int mas[100][100];

    srand(time(NULL));                      // Заполняем массив псевдослучайными числами
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            mas[i][j] = 1 + rand() % 9;
        }
    }

    for (int i = 0; i < n; i++)              // Выводим начальный массив в консоли
    {
        for (int j = 0; j < m; j++)
        {
            printf("%2d", mas[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    for (int i = 0; i < n; i++)               // Сортируем кажду строку от мин к макс
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < m - 1; k++)
            {
                if (mas[j][k] > mas[j][k + 1])
                {
                    int temp = mas[j][k];
                    mas[j][k] = mas[j][k + 1];
                    mas[j][k + 1] = temp;
                }
            }
        }
    }

    for (int i = 0; i < n; i++)              // Выводим отсортированный массив в консоли
    {
        for (int j = 0; j < m; j++)
        {
            printf("%2d", mas[i][j]);
        }
        printf("\n");
    }

    printf("Задание №2\n\n");
    printf("В массиве n x m элементов поменять местами первый и последний столбец. Вывести полученный результат. \n");

    int o, p;
    printf("Введите n: ");
    scanf("%d", &o);
    printf("Введите m: ");
    scanf("%d", &p);
    int arr[100][100];

    srand(time(NULL));                      // Заполняем массив псевдослучайными числами
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = 1 + rand() % 9;
        }
    }

    for (int i = 0; i < n; i++)              // Выводим начальный массив в консоли
    {
        for (int j = 0; j < m; j++)
        {
            printf("%2d", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    for (int i = 0; i < o; i++)              // Меняем первый столбец массива с последним
    {
        int temp = arr[i][0];
        arr[i][0] = arr[i][p - 1];
        arr[i][p - 1] = temp;
    }

    for (int i = 0; i < n; i++)              // Выводим измененный массив в консоли
    {
        for (int j = 0; j < m; j++)
        {
            printf("%2d", arr[i][j]);
        }
        printf("\n");
    }
}