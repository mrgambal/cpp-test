#include <iostream>
#include <algorithm>
#include "../include/MyCharIterator.h"

MyCharIterator::MyCharIterator(char* chars, int size)
    : _size(sizeof(size)), _chars(new char[size])
{
    _size = size;
    std::copy(chars, chars + _size + 1, _chars);
}

MyCharIterator::MyCharIterator(const MyCharIterator& mci)
    : _size(mci._size), _currentPos(mci._currentPos), _chars(new char[mci._size])
{
    std::copy(mci._chars, mci._chars + mci._size, _chars);
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
    _currentPos = _size - 2;
    return Current();
}

MyCharIterator::~MyCharIterator()
{
    delete[] _chars;
}
