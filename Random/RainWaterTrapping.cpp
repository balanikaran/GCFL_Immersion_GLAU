#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    
    int size;
    int arr[100000];
    int left[100000], right[100000];
    while(t--){
        cin >> size;
        for (int i = 0; i < size; i++){
            cin >> arr[i];
        }
        
        int max = -1;
        for (int i = 0; i < size; i++){
            if (max < arr[i]){
                max = arr[i];
            }
            left[i] = max;
        }
        
        max = -1;
        for (int i = size-1; i >= 0; i--){
            if (max < arr[i]){
                max = arr[i];
            }
            right[i] = max;
        }
        
        cout << "left = ";
        for (int i = 0; i < size; i++){
            cout << left[i];
        }
        
        cout << endl << "right = ";
        for (int i = 0; i < size; i++){
            cout << right[i];
        }
        
        cout << endl;
        
    }
	return 0;
}