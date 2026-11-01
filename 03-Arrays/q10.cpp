// C++ program to reverse an array
#include <iostream>
int main() {
    int n;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    int arr[n];

    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int left = 0;
    int right = n - 1;

    while (left < right) {
        std::swap(arr[left], arr[right]);

        left++;
        right--;
    }

    std::cout << "Reversed array: ";

    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
