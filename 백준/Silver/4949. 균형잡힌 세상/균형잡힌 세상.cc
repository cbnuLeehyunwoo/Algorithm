#include <iostream>
#include <string>
using namespace std;

void push(int);
int peek();
int pop();
void resetStack();

typedef struct node {
    int data;
    struct node* next;
} stack;

stack* top = NULL;

int main() {
    while (true) {
        string str = "";
        getline(cin, str);
        if (str == ".") {
            return 0;
        }
        
        bool valid = true; // 괄호가 유효한지 여부를 저장
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == '(' || str[i] == '[') {
                push(str[i]);
            } else if (str[i] == ')') {
                if (peek() == '(') {
                    pop();
                } else {
                    valid = false; // 짝이 맞지 않음
                    break;
                }
            } else if (str[i] == ']') {
                if (peek() == '[') {
                    pop();
                } else {
                    valid = false; // 짝이 맞지 않음
                    break;
                }
            }
        }
        
        if (valid && top == NULL) {
            cout << "yes" << "\n";
        } else {
            cout << "no" << "\n";
        }
        resetStack();
    }
}

void push(int data) {
    stack* new_node = (stack*)malloc(sizeof(stack));
    new_node->data = data;
    new_node->next = top;
    top = new_node;
}

int peek() {
    if (top == NULL) {
        return 0; // 스택이 비었을 때 반환값을 0으로 설정
    }
    return top->data;
}

int pop() {
    if (top == NULL) {
        return 0; // 안전 처리
    }
    stack* del = top;
    int value = top->data;
    top = top->next;
    free(del);
    return value;
}

void resetStack() {
    stack* del = NULL;
    while (top != NULL) {
        del = top;
        top = top->next;
        free(del);
    }
}
