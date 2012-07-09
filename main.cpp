#include <iostream>
#include "include/MyCharIterator.h"

using namespace std;

int main()
{
    char str[] = {'0', 'h', 'k', '8', '-', '\0'};
    MyCharIterator* _iter = new MyCharIterator(str);

    do
    {
        cout << _iter->Current() << '\n';
    }
    while(_iter->Next());

    cout << "First: " << _iter->First() << '\n';
    cout << "Last: " << _iter->Last() << '\n';
    cout << "Next from last: " << _iter->Next() << '\n';

        return 0;
}
