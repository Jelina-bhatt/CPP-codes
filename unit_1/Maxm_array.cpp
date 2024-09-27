#include<iostream>
using namespace std;

// Function to find the largest element in an array
int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter array elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Call the function to get the maximum value
    int max_value = findMax(arr, size);
    cout << "The largest element in the array is: " << max_value << endl;

    return 0;
}
