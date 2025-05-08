#include<iostream>
#include<set>
using namespace std;

int main() {
    int arr[] = {4, 2, 2, 4, 3, 1, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    set<int> uniqueElements;

    // Insert elements into set (duplicates automatically removed)
    for (int i = 0; i < size; i++) {
        uniqueElements.insert(arr[i]);
    }

    // Print unique elements
    cout << "Array after removing duplicates:\n";
    for (int num : uniqueElements) {
        cout << num << " ";
    }

    return 0;
}
