#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <iostream>
using namespace std;

typedef int infotype;

const int MAX_STACK = 20;

struct Stack {
    infotype info[MAX_STACK];
    int top;            // -1 berarti stack kosong
};

void createStack(Stack &S);
void push(Stack &S, infotype x);
infotype pop(Stack &S);
void printInfo(Stack S);
void balikStack(Stack &S);

// Soal 2
void pushAscending(Stack &S, infotype x);
// Soal 3
void getInputStream(Stack &S);

#endif
