/*
ABCDEFEDCBA
ABCDE EDCBA
ABCD   DCBA
ABC     CBA
AB       BA
A         A
AB       BA
ABC     CBA
ABCD   DCBA
ABCDE EDCBA
ABCDEFEDCBA
*/

#include <iostream>
using namespace std;

int main(){

    int n, range;
    cin >> n;
    range = (2 * n) - 1;

    for (int i = 0; i < range; i++){

        if (i < n){

            for (int j = 1; j < n-i+1; j++){
                cout << j;
            }

            for (int j = 1; j <= (2*i) - 1; j++){
                cout << "#";
            }

            for (int j = n-i; j > 0; j--){
                if(j == n-i){
                    continue;
                }
                cout << j;
            }

        }else{

        }
        cout << endl;
    }

    return 0;
}