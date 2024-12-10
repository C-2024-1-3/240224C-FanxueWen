#include <iostream>
using namespace std;

void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
    int current1 = 0;
    int current2 = 0;
    int current3 = 0;
    while (current1 < size1 && current2 < size2) {
        if (list1[current1] < list2[current2]) {
            list3[current3++] = list1[current1++];
        }
        else {
            list3[current3++] = list2[current2++];
        }
    }


    while (current1 < size1) {
        list3[current3++] = list1[current1++];
    }


    while (current2 < size2) {
        list3[current3++] = list2[current2++];
    }
}

int main() {
    int list1[80], list2[80], list3[160];
    int size1, size2;


    cout << "Enter the size of list1: ";
    cin >> size1;
    cout << "Enter list1: ";
    for (int i = 0; i < size1; i++) {
        cin >> list1[i];
    }


    cout << "Enter the size of list2: ";
    cin >> size2;
    cout << "Enter list2: ";
    for (int i = 0; i < size2; i++) {
        cin >> list2[i];
    }

    merge(list1, size1, list2, size2, list3);
    cout << "The merged list is: ";
    for (int i = 0; i < size1 + size2; i++) {
        cout << list3[i] << " ";
    }
    cout << endl;

    return 0;
}