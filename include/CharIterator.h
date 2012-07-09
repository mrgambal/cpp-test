#ifndef CHARITERATOR_H
#define CHARITERATOR_H

class CharIterator
{
    public:
        virtual char Current() = 0;
        virtual char Next() = 0;
        virtual void Reset() = 0;
        virtual char First() = 0;
        virtual char Last() = 0;
};

#endif // CHARITERATOR_H
