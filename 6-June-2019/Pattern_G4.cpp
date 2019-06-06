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
    
    int mid = (size - 1)/2;
    
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            if (i == mid || j == mid){
                cout << "*";
            }else if (i+j == mid){
                cout << "*";
            }else if (j == i+mid){
                cout << "*";
            }else if (i == j+mid){
                cout << "*";
            }else if((i-mid + j-mid) == mid){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << "\n";
    }
    
    return 0;
}
