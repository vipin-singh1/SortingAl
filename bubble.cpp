#include<iostream>
using namespace std;
int main() {
    int arr[] = {21, 4, 100, 123, 12, 1, 203, 149, 45, 96, 28, 30};
    int size = sizeof(arr)/sizeof(int);
    int swap;
    cout<<"Array = ";
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size - 1; j++) {
            if (arr[j] > arr[j+1]) {
                swap = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = swap;
            }
        }
    }
    for(int k = 0; k < size; k++) {
        cout<<arr[k]<<"\t";
    }
    cout<<"\n";
    return 0;
}
