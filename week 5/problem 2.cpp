#include <iostream>
using namespace std;

// function to reverse
void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        // Swap elements
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move towards middle
        start++;
        end--;
    }
}

// function to print
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int size;

    // input size of it
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    // input elements for it
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Original array: ";
    printArray(arr, size);

    // reverse it
    reverseArray(arr, size);

    cout << "Reversed array: ";
    printArray(arr, size);

    return 0;
}
