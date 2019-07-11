#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin >> t;
    while(t--){
        
        int size;
        cin >> size;
        
        int arr[size][size], i, j, k, ii, ij;
        
        for(i = 0; i < size; i++){
            for (j = 0; j < size; j++){
                cin >> arr[i][j];
            }
        }
    
        // int maxTrace = 0;
        
        for (i = 2; i <= size-1; i++){
            for (j = 0; j < size-i+1; j++){
                for (k = 0; k < size-i+1; k++){
                    
                    for (ii = j; ii < j+i; ii++){
                        for (ij = k; ij < k+i; ij++){
                            cout << arr[ii][ij] << " ";
                        }
                        cout << endl;
                    }
                    
                    cout << endl;
                }
            }
            cout << endl;
        }
        
    }
    return 0;
}
