#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size;
    
    cin >> size;
    
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            if (i == 0 || i == size-1){
                cout << j+1 << " ";
            }else if (i+j+1 == size){
                cout << j+1 << " ";
            }else{
                cout << "  ";
            }
        }
        cout << "\n";
    }
    return 0;
}
