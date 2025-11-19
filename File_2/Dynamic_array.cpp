#include <iostream>

using namespace std;

int main()
{
    // for static
    // int array[5];
    int *array = new int[5];
    for (int i = 0; i < 5; i++)
    {
        /* code */
        cin >> array[i];
    }
    for (int i = 0; i < 5; i++)
    {
        /* code */
        cout << array[i];
    }

    return 0;
}