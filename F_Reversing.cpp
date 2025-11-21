#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[1005];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> array[i];
    }
    int leftArrayIndex = 0;
    int rightArrayIndex = n - 1;
    while (leftArrayIndex < rightArrayIndex)
    {
        /* code */
        int temp = array[leftArrayIndex];
        array[leftArrayIndex] = array[rightArrayIndex];
        array[rightArrayIndex] = temp;
        leftArrayIndex++;
        rightArrayIndex--;
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << array[i] << " ";
    }

    return 0;
}