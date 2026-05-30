#include <iostream>
using namespace std;

int main () {
    double a, b;
    char op;

    cout << "nhap bieu thuc: ";
    cin >> a >> op >> b;

    switch(op) {
        case '+':
            cout << "ket qua: " << a + b;
            break;
        case '-':
            cout << "ket qua: " << a - b;
            break;
        case '*':
            cout << "ket qua: " << a * b;
            break;
        case '/':
            if (b == 0)
                cout << "khong the chia cho 0";
            else
                cout << "ket qua: " << a / b;
            break;
        default:
            cout << "phep tinh khong hop le";


    }

    return 0;
}