#include<iostream> 
#include <stack>
using namespace std;

class Stack {
    private:
        int *arr;
        int top;
        int size;
    public:
    Stack(int size) {
        this -> size = size;
        top = -1;
        arr = new int[size];
    }
    void push(int element) {
        if((size - top) > 1) {
            top++;
            arr[top] = element;
        }
        else {
            cout << "stack overflow " << endl;
        }
    }
    
    void pop() {
        if(top >= 0) {
            top--;
        }
        else {
            cout << "Stack underflow " << endl;
        }
    }
    
    int peak() {
        if(top >= 0) {
            return arr[top];
        }
        else {
            cout << "Stack is Empty" << endl;
            return -1;
        }
    }
    
    bool isEmpty() {
        if(top >= 0 && top < size) {
            return false;
        }
        else {
            return true;
        }
    }
    
};

int main() {
    
    Stack s(10);
    
    s.push(34);
    s.push(254);
    s.push(324);
    s.push(394);
    
    cout << "the top element in stack is : " << s.peak() << endl;
    
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    
    if(s.isEmpty()) {
        cout << "The Stack is Empty !!! " << endl;
    }
    
    return 0;
}