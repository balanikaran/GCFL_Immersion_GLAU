#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int countHops(int remainingStairs, int totalStairs){
    if (remainingStairs < 0){
        return 0;
    }
    
    if (remainingStairs == 0){
        return 1;
    }
    
    return countHops(remainingStairs - 1, totalStairs) + countHops(remainingStairs - 2, totalStairs) + countHops(remainingStairs - 3, totalStairs);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin >> n;
    
    cout << countHops(n, n);
    return 0;
}
