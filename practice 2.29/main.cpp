#include <iostream>

using namespace std;

int main()
{
    int x;

    cout << "Please type an integers from 0 to 10." << endl;
    cin >> x;

    for ( x = 0 ; x >= 0 && x <= 10 ;  x = x+1 )
        {
        cout << "integer   square   cube\t" << endl;
        cout << x << "           " << x * x << "       " << x * x * x << endl;
        }
    return 0;
}
