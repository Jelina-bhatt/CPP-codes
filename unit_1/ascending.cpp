#include <iostream>
#include <conio.h>
#include <stdlib.h>

int main() {
    int i, j, temp, *ptr;
    ptr = new int[5];
    system("cls");

    std::cout << "Enter 5 integers: ";
    for (i = 0; i < 5; i++) {
        std::cin >> ptr[i];
    }

    // Sorting the array in ascending order
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (ptr[j] < ptr[i]) {
                temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
    }

    std::cout << "Numbers in ascending order are: " << std::endl;
    for (i = 0; i < 5; i++) {
        std::cout << ptr[i] << "\t";
    }

    delete[] ptr;  // Freeing allocated memory
    getch();  
    return 0;
}