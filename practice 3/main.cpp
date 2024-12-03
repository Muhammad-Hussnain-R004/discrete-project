#include <iostream>
using namespace std;

// Function declarations
void acceptElements(int arr[], int n);
void displayElements(const int arr[], int n);
int sumOfElements(const int arr[], int n);
void sumOfEvenOdd(const int arr[], int n, int &sumEven, int &sumOdd);
void findMaxMin(const int arr[], int n, int &max, int &min);
void bubbleSortDescending(int arr[], int n);
void selectionSortAscending(int arr[], int n);
bool sequentialSearch(const int arr[], int n, int key);
bool binarySearch(const int arr[], int n, int key);

int main() {
    int arr[100]; // Array to hold up to 100 elements
    int n = 0;    // Number of elements in the array
    char choice;

    do {
        cout << "\nMenu Options:\n";
        cout << "1. Accept elements of the array\n";
        cout << "2. Display elements of the array\n";
        cout << "3. Sum of all elements\n";
        cout << "4. Sum of even and odd elements\n";
        cout << "5. Display maximum and minimum elements\n";
        cout << "6. Sort in descending order (Bubble Sort)\n";
        cout << "7. Sort in ascending order (Selection Sort)\n";
        cout << "8. Search using Sequential Search\n";
        cout << "9. Search using Binary Search\n";
        cout << "10. Exit\n";
        cout << "Enter your choice (1-10): ";
        int option;
        cin >> option;

        switch (option) {
            case 1:
                cout << "Enter the number of elements: ";
                cin >> n;
                acceptElements(arr, n);
                break;
            case 2:
                displayElements(arr, n);
                break;
            case 3:
                cout << "Sum of elements: " << sumOfElements(arr, n) << endl;
                break;
            case 4: {
                int sumEven = 0, sumOdd = 0;
                sumOfEvenOdd(arr, n, sumEven, sumOdd);
                cout << "Sum of even elements: " << sumEven << endl;
                cout << "Sum of odd elements: " << sumOdd << endl;
                break;
            }
            case 5: {
                int max, min;
                findMaxMin(arr, n, max, min);
                cout << "Maximum: " << max << ", Minimum: " << min << endl;
                break;
            }
            case 6:
                bubbleSortDescending(arr, n);
                cout << "Array sorted in descending order.\n";
                break;
            case 7:
                selectionSortAscending(arr, n);
                cout << "Array sorted in ascending order.\n";
                break;
            case 8: {
                int key;
                cout << "Enter the number to search: ";
                cin >> key;
                if (sequentialSearch(arr, n, key))
                    cout << "Number found.\n";
                else
                    cout << "Number not found.\n";
                break;
            }
            case 9: {
                int key;
                cout << "Enter the number to search: ";
                cin >> key;
                if (binarySearch(arr, n, key))
                    cout << "Number found.\n";
                else
                    cout << "Number not found.\n";
                break;
            }
            case 10:
                cout << "Exiting program.\n";
                return 0;
            default:
                cout << "Invalid choice. Try again.\n";
        }

        cout << "Do you want to perform another operation? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}

// Function definitions
void acceptElements(int arr[], int n) {
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void displayElements(const int arr[], int n) {
    cout << "Array elements are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int sumOfElements(const int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

void sumOfEvenOdd(const int arr[], int n, int &sumEven, int &sumOdd) {
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            sumEven += arr[i];
        else
            sumOdd += arr[i];
    }
}

void findMaxMin(const int arr[], int n, int &max, int &min) {
    max = min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
}

void bubbleSortDescending(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void selectionSortAscending(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int minIndex = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

bool sequentialSearch(const int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return true;
    }
    return false;
}

bool binarySearch(const int arr[], int n, int key) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
            return true;
        if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return false;
}

