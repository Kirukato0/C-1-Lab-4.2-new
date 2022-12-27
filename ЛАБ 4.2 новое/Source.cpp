#include <iostream>
#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <clocale>
#include <random>

int* quantityRet(int** a, int N, int M)
{
    int pos = 0, neg = 0;
    for (int i = 0; i < N; i++)
    {
        if (i > 2)
        {
            for (int j = 0; j < M; j++)
            {
                if (a[i][j] < 0)
                    neg += a[i][j];
                else pos += a[i][j];
            }
        }
    }
    std::cout << "\n";
    int* arrays;
    arrays = new int[2];
    arrays[0] = neg;
    arrays[1] = pos;
    return arrays;
}