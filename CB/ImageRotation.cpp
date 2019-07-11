#include <iostream>
using namespace std;

void swap(int arr[5][5], int i, int j){
    if (i == j){
        return;
    }
    int temp = arr[i][j];
    arr[i][j] = arr[j][i];
    arr[j][i] = temp;
}

void mirrorTheArray(int arr[][5]){
    int n = 5;
    for (int i = 0; i < n; i++){
        for(int j = 0; j < (n-1)/2; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[i][n-1-j];
            arr[i][n-1-j] = temp;
        }
    }
}

int main(){

    int arr[5][5] = {
        { 1,  2,  3,  4,  5},
        { 6,  7,  8,  9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };

    for (int i = 0; i < 5; i++){
        for(int j = i; j < 5; j++){
            swap(arr, i, j);
        }
    }

    mirrorTheArray(arr);
    for (int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }

    return 1;
}