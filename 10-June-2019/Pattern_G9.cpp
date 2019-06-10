#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int range;
    cin >> range;
    
    for (int i = 0; i < range; i++){
        
        for (int j = 0; j < range - i; j++){
            cout << char(65 + j);
        }
        
        for (int l = 0; l < (2*i - 1); l++){
            cout << " ";
        }
        
        int nextHalfRange;
        if (i == 0 || i == 1){
            nextHalfRange = range - 1;
        }else{
            nextHalfRange = range - i;
        }
        
        for (int k = nextHalfRange; k > 0; k--){
            cout << char(65 + k - 1);
        }
        
        cout << "\n";
    }
    
    return 0;
}
