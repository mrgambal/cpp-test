#include <iostream>
#include <algorithm>
#include "../include/MyCharIterator.h"

MyCharIterator::MyCharIterator(char* chars)
    : _size(sizeof(chars)/sizeof(chars[0])), _chars(new char[sizeof(chars)/sizeof(chars[0])])
{
    std::cout << "In constr: " << sizeof(chars) << std::endl;
    std::cout << "In constr: " << chars << std::endl;
    std::copy(chars, chars + _size, _chars);
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
    _currentPos = _size - 1;
    return Current();
}

MyCharIterator::~MyCharIterator()
{
    delete[] _chars;
}
