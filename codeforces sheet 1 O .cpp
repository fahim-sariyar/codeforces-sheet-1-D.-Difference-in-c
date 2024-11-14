#include <bits/stdc++.h>
using namespace std;
int main() {
    string input;
    getline(cin, input);
 
    stringstream ss(input);
    int A, B;
    char S;
    // Parsing the input
    ss >> A >> S >> B;
    // Performing the operation based on the operator S
    switch (S) {
        case '+':
            cout << A + B << endl;
            break;
        case '-':
            cout << A - B << endl;
            break;
        case '*':
            cout << A * B << endl;
            break;
        case '/':
            if (B != 0) {
                cout << A / B << endl;
            } else {
                cerr << "Error: Division by zero." << endl;
            }
            break;
        default:
            cerr << "Error: Invalid operator." << endl;
    }
    return 0;
}
