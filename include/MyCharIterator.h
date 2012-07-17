#ifndef MYCHARITERATOR_H
#define MYCHARITERATOR_H

#include "CharIterator.h"

class MyCharIterator : public CharIterator
{
    char* _chars;
    int _currentPos;
    int _size;

public:
    MyCharIterator(char* chars, int size);
    MyCharIterator(const MyCharIterator& mci);
    MyCharIterator& operator= (const MyCharIterator& mci)
    {
        char* new_chars = new char[mci._size];
        std::copy(mci._chars, mci._chars + mci._size, new_chars);

        delete[] _chars;

        _chars = new_chars;
        _size = mci._size;
        _currentPos = mci._currentPos;

        return *this;
    }
    ~MyCharIterator();

    char Current();
    char Next();
    void Reset();
    char First();
    char Last();
};
#endif // MYCHARITERATOR_H
