#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    char range;
    int size;   
    
    cin >> range;
    
    size = int(range) - 65 + 1;
    
    size = 2 * size - 1;
    int mid = (size - 1) / 2;
    char charToPrint;
    for (int i = 0; i < size; i++){
        if (i < mid + 1){
            charToPrint = char(65 + i);
        }else{
            charToPrint = char(int(charToPrint) - 1);
        }
    
        for (int j = 0; j < size; j++){
            if (i + j == mid){
                cout << charToPrint;
            }else if (i == j + mid){
                cout << charToPrint;
            }else if (j == i + mid){
                cout << charToPrint;
            }else if ((i-mid) + (j-mid) == mid){
                cout << charToPrint;
            }else{
                cout << " ";
            }
        }
        cout << "\n";
    }
    
    return 0;
}
