#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t, l, b;
    cin >> t;
    double result;
    int count = 0;
    while(t--){
        cin >> l >> b;
        result = (double)l / (double)b;
        // cout << result << endl;
        if (result >= 1.600000 && result <= 1.700000){
            count = count + 1;
        }
    }
    cout << count;
    return 0;
}
