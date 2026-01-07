#include "empty_stack_exception.h"

template <class T, int MAXSIZE>
class Stack
{
private:
    T stack[MAXSIZE];
    int top;

public:
    Stack() : top(0) {}
    bool empty(){
        return top == 0;
    }
    void push(const T a)
    {
        if (top != MAXSIZE){
            stack[top++] = a;
        }

    }
    T pop()
    {
        if (top > -1)
            return stack[top--];
        throw empty_stack_exception("Empty Stack");
    }
};