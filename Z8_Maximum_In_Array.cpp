#include<iostream>
using namespace std;

int main() {
    int arr[] = {2, 3, 4, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int maxValue = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
        }
    }
    cout << "Maximum value: " << maxValue;
    return 0;
}
