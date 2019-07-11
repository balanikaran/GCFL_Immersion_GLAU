#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;

    if (n % 2 == 0){
        cout << pow(3, n/2 - 1);
    }else{
        cout << pow(2, n/2);
    }
    
    return 0;
}
