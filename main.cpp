#include <iostream>
using namespace std;
int main() {
    int n=0, a=1, b=1, c=0;
    cin >> n;
    cout << a << endl;
    cout << b << endl;
    for (int i=0; i<=n; i=i+a){
        c=a+b;
        a=b;
        b=c;
        cout << c <<endl;

    }
    return 0;
}
