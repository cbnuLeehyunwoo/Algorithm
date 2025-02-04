#include <iostream>
#include <vector>

using namespace std;

vector<int> element;

int leftChildIndex(int index) { return (2 * index) + 1; }
int rightChildIndex(int index) { return (2 * index) + 2; }
int parentIndex(int index) { return (index - 1) / 2; }

void siftUp(int index) {
    while (index > 0) {
        int parent = parentIndex(index);
        if (element[index] > element[parent]) {
            swap(element[index], element[parent]);
            index = parent;
        } else {
            break;
        }
    }
}

void siftDown(int index) {
    int size = element.size();
    while (true) {
        int left = leftChildIndex(index);
        int right = rightChildIndex(index);
        int largest = index;

        if (left < size && element[left] > element[largest]) {
            largest = left;
        }
        if (right < size && element[right] > element[largest]) {
            largest = right;
        }
        if (largest == index) break;

        swap(element[index], element[largest]);
        index = largest;
    }
}

void printremove() {
    if (element.empty()) {
        cout << 0 << "\n";
        return;
    }
    cout << element[0] << "\n";
    element[0] = element.back(); // 마지막 요소를 루트로 이동
    element.pop_back();
    if (!element.empty()) siftDown(0); // 요소가 남아 있을 때만 실행
}

void insert(int item) {
    element.push_back(item);
    siftUp(element.size() - 1);
}

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int input;
        cin >> input;
        if (input == 0) {
            printremove();
        } else {
            insert(input);
        }
    }
}
