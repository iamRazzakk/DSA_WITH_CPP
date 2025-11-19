#include <iostream>

using namespace std;

int *funFunction()
{
    // for static
    // int array[5];
    int *array = new int[5];
    for (int i = 0; i < 5; i++)
    {
        /* code */
        cin >> array[i];
    }
    return array;
}

int main()
{
    int *x = funFunction();
    for (int i = 0; i < 5; i++)
    {
        cout << x[i] << " ";
    }
    return 0;
}