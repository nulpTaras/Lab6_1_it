//
// Created by Taras Neridnyi on 30.10.2024.
//
#include <iomanip>
#include <iostream>
#include <cstdlib>

using namespace std;

void create(int* &a, const int size, const int Low, const int High)
{
    a = new int[size];
    for (int i=0; i<size; i++)
        a[i] = Low + rand() % (High-Low+1);
}

void print(int* a, const int size) {
    for (int i=0; i<size; i++)
        cout << setw(4) << a[i] << " ";
}

int calculateSum(int* a, const int size)
{
    int sum = 0;
    for (int i=0; i<size; i++)
        if ( i % 4 != 0 && i > 0 ) {
            sum += a[i];

        }
    return sum;
}

int calculateCount(const int size)
{
    int count  = 0;
    for (int i=0; i<size; i++)
        if ( i % 4 != 0 && i > 0 ) {
            count ++;
        }
    return count;
}

void replace(int* a, const int size)
{
    for (int i=0; i<size; i++)
        if ( i % 4 != 0 && i > 0 ) {
            a[i] = 0;
        }
}