#include <bits/stdc++.h>
using namespace std;
int main() {
    int A, B, C;
    cin >> A >> B >> C;
    
    int min_val = A;
    int max_val = A;
    
    if (B < min_val) {
        min_val = B;
    }
    if (C < min_val) {
        min_val = C;
    }
    
    if (B > max_val) {
        max_val = B;
    }
    if (C > max_val) {
        max_val = C;
    }
    cout << min_val << " " << max_val << endl;
    return 0;
}
