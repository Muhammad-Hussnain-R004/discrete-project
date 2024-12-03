#include <iostream>
using namespace std;

int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    const int SIZE = 10;
    int arr[SIZE];

    cout << "Enter 10 integers: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }

    int totalSum = sumArray(arr, SIZE);
    cout << "The sum of the array elements is: " << totalSum << endl;
    return 0;
}

