#include <iostream>

void quickSort(int array[], const int& first, const int& last) {
    int pivot = array[(first + last) >> 1];
    int left = first;
    int right = last;

    while (left <= right) {
        while (array[left] < pivot)
            left++;
        while (array[right] > pivot)
            right--;

        if (left <= right) {
            /* swap 2 values */
            std::swap(array[left], array[right]);
            left++;
            right--;
        }
    }

    if (first < right)
        quickSort(array, first, right);
    if (left < last)
        quickSort(array, left, last);
}

int main() {
    int array[10] = {2, 7, 8, 4, -9, 0, -100, 20, 45, 3};
    quickSort(array, 0, 9);
    for (int index = 0; index < 10; ++index)
        std::cout << array[index] << " ";
    return 0;
}