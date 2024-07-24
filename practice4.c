#include <stdio.h>


int count_in_array(int A[], int size, int n) {
    int counting = 0;
    for (int i = 0; i < size; i++) {
        if (A[i] == n) 
        counting++;
    }
    return counting;
}


int first_index(int A[], int size, int n) {
    for (int i = 0; i < size; i++) {
        if (A[i] == n) return i;
    }
    return -1;
}


int last_index(int A[], int size, int n) {
    for (int i = size - 1; i >= 0; i--) {
        if (A[i] == n) 
        return i;
    }
    return -1;
}

void reverse_array(int A[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int tempo = A[i];
        A[i] = A[size - 1 - i];
        A[size - 1 - i] = tempo;
    }
}


int partial_reverse(int A[], int size, int n) {
    int count = count_in_array(A, size, n);
    if (count < 2) 
    return -1;

    int first = first_index(A, size, n);
    int last = last_index(A, size, n);

    if ((last - first) <= 2) 
    return 0;

    
    for (int i = 0; i < (last - first + 1) / 2; i++) {
        int temp = A[first + i];
        A[first + i] = A[last - i];
        A[last - i] = temp;
    }
    return 1;
}


int main() {
   
    int A[] = {1, 2, 3, 4, 5, 3, 6, 3, 7};
    int n = 3;
    int size = sizeof(A) / sizeof(A[0]);
   

    int result = partial_reverse(A, size, n);
    printf("Result of partial_reverse: %d\n", result);
    
    
    if (result == 1) {
        
        printf("Array after partial reverse: ");
        for (int i = 0; i < size; i++) {
           
            printf("%d ", A[i]);
        }
        
        printf("\n");
    }

    return 0;
}