#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

string isIsomorphic(string s1, string s2){
    int arrS1[26] = {0}, arrS2[26] = {0};
    
    if (s1.length() != s2.length()){
        return "Not Isomorphic";
    }else{
        int size = s1.length();
        for (int i = 0; i < size; i++){
            arrS1[toupper(s1[i]) - 'A']++;
            arrS2[toupper(s2[i]) - 'A']++;
        }
        
        sort(arrS1, arrS1 + 26);
        sort(arrS2, arrS2 + 26);
        for (int i = 0; i < 26; i++){
            if (arrS1[i] != arrS2[i]){
                return "Not Isomorphic";
            }
        }
        return "Isomorphic";
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s1, s2;
    
    getline(cin, s1);
    getline(cin, s2);
    
    cout << isIsomorphic(s1, s2);
    
    return 0;
}
