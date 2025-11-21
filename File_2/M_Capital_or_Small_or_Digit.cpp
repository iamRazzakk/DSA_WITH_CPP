#include <iostream>

using namespace std;

int main()
{
    char a;
    cin >> a;
    int ascii = int(a);
    if (ascii >= 48 && ascii <= 57)
    {
        /* code */
        cout << "IS DIGIT" << endl;
    }
    else
    {
        cout << "ALPHA" << endl;
        if (ascii >= 65 && ascii <= 90)

        {
            /* code */
            cout << "IS CAPITAL" << endl;
        }
        else if (ascii >= 97 && ascii <= 122)

        {
            cout << "IS SMALL" << endl;
        }
    }

    return 0;
}