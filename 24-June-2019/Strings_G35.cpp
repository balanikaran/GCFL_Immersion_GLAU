/*
    Sample Input 0
        5 5
        11111
        00010
        1
        2
        3
        4
        5

    Sample Output 0
        NO
        NO
        NO
        NO
        YES

    Sample Input 1
        5 5
        11001
        00010
        1
        2
        3
        4
        5

    Sample Output 1
        NO
        YES
        YES
        YES
        YES 
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string a, b;
    int size, t;
    
    cin >> size >> t;
    cin >> a;
    cin >> b;
    char *x = new char[a.size() + 1];
    strcpy(x, a.c_str());
    char *y = new char[b.size() + 1];
    strcpy(y, b.c_str());
    
    int bit, res;
    while(t--){
        cin >> bit;
        y[bit-1] = '1';
        res = strcmp(y, x);
        if (res >= 0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
