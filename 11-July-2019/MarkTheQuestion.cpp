#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, maxDiff;
    cin >> n >> maxDiff;
    int temp, count = 0;
    bool skippedOne = false;
    for (int i = 0; i < n; i++){
        cin >> temp;
        if (temp <= maxDiff){
            count = count + 1;
        }else{
            if (skippedOne){
                break;
            }else{
                skippedOne = true;
            }
        }
    }
    cout << count;
    return 0;
}
