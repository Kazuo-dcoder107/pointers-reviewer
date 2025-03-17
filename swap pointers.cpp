#include <iostream>
using namespace std;

void swapPointers(int* p1, int* p2) {
    int store = *p1;
    *p1 = *p2;
    *p2 = store;
}

int main() {
    int x, y;
    
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    
    int* p1 = &x;
    int* p2 = &y;

    cout << "Before swap: " << *p1 << " " << *p2 << endl;
    swapPointers(p1, p2);
    cout << "After swap: " << *p1 << " " << *p2 << endl;

    return 0;
}
