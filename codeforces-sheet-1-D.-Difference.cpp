#include <iostream>
using namespace std;
int main()
{
    int B,D;
    long long A,C;
    cin >> A >> B >> C >> D;
    long long X  = ( A * B ) - ( C * D );
    cout << "Difference = " << X;
    return 0;
}