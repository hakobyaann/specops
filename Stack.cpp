#include <iostream>

class Stack
{
    public:
        int arr[5];
        int sp;
};

void init(Stack*);
void push(Stack*, int);
int pop(Stack*);
int main()
{
    Stack s;
    init(&s);
    push(&s, 1);
    push(&s, 2);
    push(&s, 3);
    push(&s, 4);
    push(&s, 5);
    std::cout << pop(&s);
    return 0;
}
void init(Stack* st)
{
    st->sp = 0;
}
void push(Stack* st, int num)
{
    if (5 == st->sp)
    {
        std::cout << "Stack is full!" << std::endl;
        return;
    }
    st->arr[st->sp] = num;
    ++st->sp;
}
int pop(Stack* st)
{
    if (0 == st->sp)
    {
        std::cout << "Stack is empty" << std::endl;
        return -1;
    }
    --st->sp;
    return st->arr[st->sp];
}
