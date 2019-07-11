#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long a,r,n;
    cin >> a >> r >> n;
    n = 500;
    long long rs = a * pow(r, n-1);
    cout << rs;
    return 0;
}
