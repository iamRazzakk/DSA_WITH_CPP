#include <bits/stdc++.h>

using namespace std;

int main()
{
    int *array_a = new int[3];
    for (int i = 0; i < 3; i++)
    {
        /* code */
        cin >> array_a[i];
    }
    int *array_b = new int[5];
    for (int i = 0; i < 3; i++)
    {
        /* code */
        array_b[i]= array_a[i];
    }
    array_b[3] = 40;
    array_b[4] = 50;
    delete[] array_a;
    for (int i = 0; i < 5; i++)
    {
        /* code */
        cout << array_b[i] << " ";
    }

    return 0;
}