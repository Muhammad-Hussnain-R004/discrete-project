#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int arr1[SIZE], arr2[SIZE], commonArr[SIZE];
    int commonCount = 0;  // Variable to count the common elements

    // Input for the first array
    cout << "Enter 5 values for the first array: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> arr1[i];
    }

    // Input for the second array
    cout << "Enter 5 values for the second array: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> arr2[i];
    }

    // Finding common elements and storing them in the third array
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (arr1[i] == arr2[j]) {
                // Check if the element is already in the commonArr to avoid duplicates
                bool found = false;
                for (int k = 0; k < commonCount; k++) {
                    if (commonArr[k] == arr1[i]) {
                        found = true;
                        break;
                    }
                }
                // If not found, add it to the commonArr
                if (!found) {
                    commonArr[commonCount++] = arr1[i];
                }
            }
        }
    }

    // Display the common elements
    cout << "Common elements: ";
    if (commonCount == 0) {
        cout << "None" << endl;
    } else {
        for (int i = 0; i < commonCount; i++) {
            cout << commonArr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
