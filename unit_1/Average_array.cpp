#include<iostream>
using namespace std;


// Function to calculate the average of array elements
double calculateAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (double)sum / size;
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

    // Call the function to calculate the average
    double average = calculateAverage(arr, size);
    cout << "The average of the array elements is: " << average << endl;

    return 0;
}
