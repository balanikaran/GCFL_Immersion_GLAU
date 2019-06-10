#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    string inputString;
    getline(cin, inputString);
    
    int size = 2 * inputString.length() - 1;
    int mid = (size - 1) / 2;
    int maxIndex = 0;
    for (int i = 0; i < size; i++){
        if (i <= mid){
            maxIndex = i + 1;
        }else{
            maxIndex = maxIndex - 1;
        }
        
        cout << inputString.substr(0, maxIndex);
        cout << "\n";
    }
    
    return 0;
}
