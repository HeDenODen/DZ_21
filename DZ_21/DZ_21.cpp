#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

template <class T>
void Sort(T a[], long size)
{
    long k, n, d, x;
    for (int u = 0; u < size; u++) {
        if (a[u] < 0) {
            k = u;
            break;
        }
    }
    for (int l = size - 1; l >= 0; l--) {
        if (a[l] < 0) {
            n = l;
            break;
        }
    }
    for (long i = k + 1; i < n; i++) {
        d = i;
        x = a[i];
        for (long j = i + 1; j < n; j++) {
            if (a[j] < x) {
                d = j;
                x = a[j];
            }
        }
        if (d != i) {
            a[d] = a[i];
            a[i] = x;
        }
    }

}
template <class N>
void random_arr(N ar[], int size)
{
    N x, d;
    for (int i = 0; i < size; i++) {
        x = rand() % 19;
        d = ar[x];
        ar[x] = ar[i];
        ar[i] = d;
    }
}
template <class P>
void Sort_random_arr(P arr[], int size)
{
    P r_n = rand() % 20;
    P r_i;
    cout << "Random namber is: " << r_n << endl;
    for (int j = 0; j < size; j++) {
        if (arr[j] == r_n) {
            r_i = j;
            cout << "Index = " << r_i << "\n\n";
            break;
        }
    }
    P a, b, c, d;
    for (int k = 0; k < r_i; k++) {
        a = k;
        b = arr[k];
        for (int f = k+1; f < r_i; f++) {
            if (arr[f] > b) {
                a = f;
                b = arr[f];
            }
        }
        if (a != k) {
            arr[a] = arr[k];
            arr[k] = b;
        }
    }
    for (int n = r_i + 1; n < size; n++) {
        c = n;
        d = arr[n];
        for (int l = n + 1; l < size; l++) {
            if (arr[l] < d) {
                c = l;
                d = arr[l];
            }
        }
        if (c != n) {
            arr[c] = arr[n];
            arr[n] = d;
        }
    }
}

int main()
{
    //1
    srand(time(NULL));
    const long SIZE = 10;
    int ar[SIZE];
    for (int i = 0; i < SIZE; i++) {
        ar[i] = -20 + rand() % 41;
        cout << ar[i] << " ";
    }
    cout << "\n\n";
    Sort(ar, SIZE);
    for (int j = 0; j < SIZE; j++) {
        cout << ar[j] << " ";
    }
    cout << "\n\n";

    //2
    const int SIZE1 = 20;
    int array[SIZE1];
    for (int l = 1; l <= SIZE1; l++) {
        array[l-1] = l;
        cout << array[l-1] << " ";
    }
    cout << "\n\n";
    random_arr(array, SIZE1);
    Sort_random_arr(array, SIZE1);
    for (int n = 0; n < SIZE1; n++) {
        cout << array[n] << " ";
    }
    cout << "\n\n";
    return 0;
}
