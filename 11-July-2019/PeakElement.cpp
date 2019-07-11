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
    
    for (int i = 1; i < size-1; i++){
        if (arr[i] > arr[i+1] && arr[i] > arr[i-1]){
            cout << arr[i];
            break;
        }
    }
    return 0;
}
