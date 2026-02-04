#include<iostream>
using namespace std;

int main() {
    int choice;

    do {
        cout << "\n-- MENU --" << endl;
        cout << "1. Bubble Sort" << endl;
        cout << "2. Selection Sort" << endl;
        cout << "3. Exit" << endl;

        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice) {

            case 1: {
                int n;
                cout << "Enter number of elements for Bubble Sort : ";
                cin >> n;

                int arr[n];
                cout << "Enter elements : ";
                for (int i = 0; i < n; i++) {
                    cin >> arr[i];
                }

                // Bubble Sort
                for (int j = 0; j < n - 1; j++) {
                    for (int i = 0; i < n - 1 - j; i++) {
                        if (arr[i] > arr[i + 1]) {
                            int t = arr[i];
                            arr[i] = arr[i + 1];
                            arr[i + 1] = t;
                        }
                    }
                }

                cout << "After Bubble Sort : ";
                for (int i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;
            }

            case 2: {
                int n;
                cout << "Enter number of elements for Selection Sort : ";
                cin >> n;

                int arr[n];
                cout << "Enter elements : ";
                for (int i = 0; i < n; i++) {
                    cin >> arr[i];
                }

                // Selection Sort
                for (int i = 0; i < n - 1; i++) {
                    int minIndex = i;
                    for (int j = i + 1; j < n; j++) {
                        if (arr[j] < arr[minIndex]) {
                            minIndex = j;
                        }
                    }
                    int t = arr[minIndex];
                    arr[minIndex] = arr[i];
                    arr[i] = t;
                }

                cout << "After Selection Sort : ";
                for (int i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;
            }

            case 3:
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Invalid choice! Try again." << endl;
        }

    } while (choice != 3);

    return 0;
}
