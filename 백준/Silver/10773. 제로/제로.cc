
#include <iostream>
#include <climits>
#include <string>
using namespace std;

typedef struct node {
	int data;
	struct node* next;
}stack;
stack* top = NULL;
void push(int a);
int pop();
void getresult();
int result = 0;

int main() {
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		if (temp == 0) {
			pop();
		}
		else
			push(temp);
	}
	getresult();
}

void push(int a) {
	stack* newnode = (stack*)malloc(sizeof(stack));
	newnode->data = a;
	newnode->next = top;
	top = newnode;
}

int pop() {
	stack* del;
	int value;
	if (top == NULL) {
		exit(0);
	}
	value = top->data;
	del = top;
	top = top->next;
	free(del);
	return value;
}

void getresult() {
	if (top == NULL) {
		cout << 0;
		return;
	}
	stack* i;
	stack* count = top;
	i = count;
	while (i != NULL) {
		result += i->data;
		i = count->next;
		count = count->next;
	}
	cout << result;
}