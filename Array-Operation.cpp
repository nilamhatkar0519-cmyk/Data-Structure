#include <iostream>
using namespace std;

int main() {

    int choice;
    int size = 5;
    int maxSize = 10;
    int arr[10] = {101, 102, 103, 104, 105};

    do {
        cout << "\n--Menu--" << endl;
        cout << "1. Traverse Operation" << endl;
        cout << "2. Update Operation" << endl;
        cout << "3. Insert Operation" << endl;
        cout << "4. Search Operation" << endl;
        cout << "5. Delete Operation" << endl;
        cout << "6. Exit" << endl;

        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice) {

        case 1: {
            cout << "--Traverse Operation--" << endl;
            for (int i = 0; i < size; i++)
                cout << arr[i] << " ";
            cout << endl;
            break;
        }

        case 2: {
            cout << "--Update Operation--" << endl;
            int position, value;

            cout << "Enter position: ";
            cin >> position;

            if (position >= 0 && position < size) {
                cout << "Enter value: ";
                cin >> value;
                arr[position] = value;
            } else {
                cout << "Invalid position!" << endl;
            }

            for (int i = 0; i < size; i++)
                cout << arr[i] << " ";
            cout << endl;
            break;
        }

        case 3: {
            cout << "--Insert Operation--" << endl;
            int insPos, insVal;

            if (size == maxSize) {
                cout << "Array is full!" << endl;
                break;
            }

            cout << "Enter position: ";
            cin >> insPos;

            if (insPos < 0 || insPos > size) {
                cout << "Invalid position!" << endl;
                break;
            }

            cout << "Enter value: ";
            cin >> insVal;

            for (int i = size; i > insPos; i--) {
                arr[i] = arr[i - 1];
            }

            arr[insPos] = insVal;
            size++;

            for (int i = 0; i < size; i++)
                cout << arr[i] << " ";
            cout << endl;
            break;
        }

        case 4: {
            cout << "--Search Operation--" << endl;
            int key;
            bool found = false;

            cout << "Enter value to search: ";
            cin >> key;

            for (int i = 0; i < size; i++) {
                if (arr[i] == key) {
                    cout << "Found at index " << i << endl;
                    found = true;
                }
            }

            if (!found)
                cout << "Not found" << endl;

            break;
        }

        case 5: {
            cout << "--Delete Operation--" << endl;
            int delPos;

            cout << "Enter position: ";
            cin >> delPos;

            if (delPos < 0 || delPos >= size) {
                cout << "Invalid position!" << endl;
                break;
            }

            for (int i = delPos; i < size - 1; i++) {
                arr[i] = arr[i + 1];
            }

            size--;

            for (int i = 0; i < size; i++)
                cout << arr[i] << " ";
            cout << endl;
            break;
        }

        case 6:
            cout << "Exit" << endl;
            break;

        default:
            cout << "Invalid Input" << endl;
        }

    } while (choice != 6);

    return 0;
}
