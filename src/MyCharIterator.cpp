#include <iostream>
#include "../include/MyCharIterator.h"

MyCharIterator::MyCharIterator(char* chars)
{
    _size = sizeof(chars);
    _chars = chars;
}

char MyCharIterator::Current()
{
    return _chars[_currentPos];
}

char MyCharIterator::Next()
{
    if(_currentPos < _size)
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
