#include <iostream>
using namespace std;

double getTerm(int n) {
    if (n == 1) {
        return 10;
    }
       
    if (n == 2) {
        return 5;
    }
        
    return getTerm(n - 1) / 2;
}

int main() {
    int n;
    cout << "Enter the number of the member of the array: ";
    cin >> n;

    double result = getTerm(n);
    cout << "n-th term of the array: " << result << endl;
}