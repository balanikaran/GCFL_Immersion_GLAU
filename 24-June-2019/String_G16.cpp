/*
Sample Input 0
    how
    are
    you
Sample Output 0
    h$wa#eYOU
 */


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

bool isVowel(char x){
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U'){
        return true;
    }
    
    return false;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string a, b, c;
    getline(cin, a);
    getline(cin, b);
    getline(cin, c);
    
    int size;
    size = a.size();
    
    for (int i = 0; i < size; i++){
        if (isVowel(a[i])){
            a[i] = '$';
        }
    }
    
    size = b.size();
    for (int i = 0; i < size; i++){
        if (!isVowel(b[i])){
            b[i] = '#';
        }
    }
    
    size = c.size();
    for (int i = 0; i < size; i++){
        c[i] = toupper(c[i]);
    }
    
    cout << a << b << c;
    
    return 0;
}
