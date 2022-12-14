#ifndef _STACK_H_
#define _STACK_H_

typedef unsigned long Item;

class Stack
{
    private:
        enum{MAX = 10};
        Item items[MAX];
        int top;
    public:
        Stack();
        bool isempty() const;
        bool isfull() const;
        bool push(Item & item);
        bool pop(Item & item);
};

#endif
