#ifndef MYCHARITERATOR_H
#define MYCHARITERATOR_H

#include "CharIterator.h"

class MyCharIterator : public CharIterator
{
    char* _chars;
    int _currentPos;
    int _size;

public:
    MyCharIterator(char* chars);
    ~MyCharIterator();

    char Current();
    char Next();
    void Reset();
    char First();
    char Last();
};
#endif // MYCHARITERATOR_H
