#include <stdio.h>
// void display(int arr[], int size);
// void display(int arr[5], int size);
// void display(int *arr, int size);
// Function to modify array elements

void update(int arr[], int size) {
    printf("\n %d size of arr in fn",sizeof(*arr));
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] * 2;
    }
}

int main() {
    int data[] = {1, 2, 3, 4, 5};
    int n = sizeof(data) / sizeof(data[0]);

    update(data, n);  // passing array

    printf("\n Array after modification: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", data[i]);
    }
    return 0;
}
