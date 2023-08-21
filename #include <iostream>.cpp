#include <iostream>

int* ShiftByOne(int arr[], int size) {
    if (size <= 1) {
        return arr;  // Nothing to shift
    }
    
    int lastElement = arr[size - 1];
    
    for (int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    
    arr[0] = lastElement;
    
    return arr;
}

int* GetMax(int arr[], int size) {
    if (size == 0) {
        return nullptr;  // Empty array
    }
    
    int* maxElement = &arr[0];
    
    for (int i = 1; i < size; i++) {
        if (arr[i] > *maxElement) {
            maxElement = &arr[i];
        }
    }
    
    return maxElement;
}

unsigned int GetSize(char arr[]) {
    unsigned int size = 0;
    
    while (arr[size] != '\0') {
        size++;
    }
    
    return size;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    
    int* shiftedArr = ShiftByOne(arr1, size1);
    for (int i = 0; i < size1; i++) {
        std::cout << shiftedArr[i] << " ";
    }
    std::cout << std::endl;
    
    int arr2[] = {5, 3, 9, 1, 7};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    
    int* maxElement = GetMax(arr2, size2);
    std::cout << "Max element: " << *maxElement << std::endl;
    
    char arr3[] = "Hello, World!";
    unsigned int size3 = GetSize(arr3);
    std::cout << "Size of array: " << size3 << std::endl;
    
    return 0;
}