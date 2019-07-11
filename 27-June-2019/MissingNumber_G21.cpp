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
    
    int arr[size];
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }
    
    float r = (float) pow(arr[size-1]/arr[0], 1.0/size);
    int term;
    for (int i = 0; i < size; i++){
        term = arr[0] * pow(r, i);
        if(arr[i] != term){
            cout << term;
            break;
        }
    }
    
    return 0;
}
