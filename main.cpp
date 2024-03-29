#include <iostream>
#include "include/MyCharIterator.h"

using namespace std;

int main()
{
    char str[] = {'0', 'h', 'k', '8', '-', '\0'};

    cout << "Before constr: " << sizeof(str) << endl;
    cout << "Before constr: " << str << endl;

    MyCharIterator* _i = new MyCharIterator(str, sizeof(str));
    MyCharIterator _iter = *_i;

    do
    {
        cout << _iter.Current() << '\n';
    }
    while(_iter.Next());

    cout << "First: " << _iter.First() << '\n';
    cout << "Last: " << _iter.Last() << '\n';
    cout << "Next from last: " << _iter.Next() << '\n';

    delete _i;

    return 0;
}
