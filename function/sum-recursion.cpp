#include <iostream> // Including the Input/Output Stream Library

// Recursive function to calculate the sum of array elements
int arraySum(int arr[], int size) {
  // Base case: if the array is empty, return 0
  if (size == 0)
    return 0;

  // Recursive case: return the sum of the last element and the sum of the rest of the array
  return arr[size - 1] + arraySum(arr, size - 1);
}

int main() {
  int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Initializing an array of integers
  int size = sizeof(nums) / sizeof(nums[0]); // Determining the size of the array

  std::cout << "Array elements: " << std::endl;
  // Loop through the array elements and display them
  for (size_t i = 0; i < size; i++) {
    std::cout << nums[i] << ' ';
  }

  // Calculate the sum of the array elements using recursion
  int sum = arraySum(nums, size); // Calling the recursive function to get the sum

  std::cout << "\nSum of array elements using recursion: " << sum << std::endl; // Display the sum

  return 0; // Returning 0 to indicate successful execution of the program
}
