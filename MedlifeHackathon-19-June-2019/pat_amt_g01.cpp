#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    int n;
    cin >> n;

    int low = 1, high = n * (n+1), count, mid, jRange;
    for(int i = 0; i < n; i++){

        for (int j = 0; j < 4*i; j++){
            cout << "-";
        }

        jRange = 2 * (n - i);
        mid = jRange / 2;
        count = -1;
        for (int j = 0; j < jRange; j++){
            if (j != 0){
                cout << "*";
            }
            if (j < mid){
                if (low < 10){
                    cout << low++ << "  ";
                }else{
                    cout << low++ << " ";
                }
                count = count + 1;
            }else{
                if(high < 10){
                    cout << high - count << "  ";
                }else{
                    cout << high - count << " ";
                }
                count = count - 1;
            }
        }
        high = high - mid;
        cout << endl;
    }

    return 0;
}
