#include <iostream>
#include <climits> // for INT_MIN
using namespace std;

int main() {
    int arr[] = {10, 5, 20, 8, 12};
    int size = sizeof(arr) / sizeof(arr[0]);

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;   // update second largest
            largest = arr[i];          // update largest
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        cout << "No second largest number found (all elements may be equal)." << endl;
    } else {
        cout << "Second largest number is: " << secondLargest << endl;
    }

    return 0;
}
