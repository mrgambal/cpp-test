#include <iostream>
#include "../include/MyCharIterator.h"

MyCharIterator::MyCharIterator(char* chars)
{
    _size = 0;
    _chars = chars;

    for(int pos = 0; chars[pos] != '\0'; ++pos)
    {
        _size++;
    }
}

char MyCharIterator::Current()
{
    return _chars[_currentPos];
}

char MyCharIterator::Next()
{
    if(_currentPos < _size - 1)
    {
        ++_currentPos;
        return Current();
    }
    else
        return 0;
}

void MyCharIterator::Reset()
{
    _currentPos = 0;
}

char MyCharIterator::First()
{
    _currentPos = 0;
    return Current();
}

char MyCharIterator::Last()
{
    _currentPos = _size - 1;
    return Current();
}

MyCharIterator::~MyCharIterator()
{
    delete[] _chars;
}
