#include <iostream>
using namespace std;

void stairCaseSearch(int arr[5][5], int key){

    int row = 0, col = 4;
    bool found = false;

    while(row < 5 && col >= 0){

        if (arr[row][col] == key){
            cout << key << " found at co-ordinates => (" << row + 1 << ", " << col + 1 << ")" << endl;
            found = true;
            break;
        }else if(key > arr[row][col]){
            row = row + 1;
        }else if(key < arr[row][col]){
            col = col - 1;
        }

    }

    if (!found){
        cout << "Not found..." << endl;
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

    int key;
    cin >> key;

    stairCaseSearch(arr, key);

    return 1;
}