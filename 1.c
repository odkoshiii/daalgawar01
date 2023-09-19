#include "stdio.h"

void read(int A[], int n)
{
        int i;
        for (i = 0; i < n; i++)
                scanf("%d", &A[i]);
}

void print(int A[], int n)
{
        int i;
        for (i = 0; i < n; i++)
                printf("%d ", A[i]);
        printf("\n");
}

int max(int A[], int n)
{
    if (n <= 0) {
        return -1; 
    }
    
    int maxValue = A[0];
    for (int i = 1; i < n; i++) {
        if (A[i] > maxValue) {
            maxValue = A[i];
        }
    }
    
    return maxValue; 
}

int min(int A[], int n)
{
    if (n <= 0) {
        return -1; 
    }

    int minValue = A[0];
    for (int i = 1; i < n; i++) {
        if (A[i] > minValue) {
            minValue = A[i];
        }
    }    
    return minValue;         
}

void copy(int A[], int n, int B[])
{
    for (int i = 0; i < n; i++) {
        B[i] = A[i]; 
    }
}


int find(int A[], int n, int x)
{
    for (int i = 0; i < n; i++) {
        if (A[i] == x) {
            return i; 
        }
    }

    return -1;
}


int make_set(int A[], int n, int B[])
{
    if (n <= 0) {
        return -1;
    }

    for (int i = 0; i < n; i++) {
        B[i] = i; 
    }

    return 0; 
}


int union_set(int A[], int n, int B[], int m)
{
    if (n <= 0 || m <= 0) {
        return -1;
    }

    int representativeA = A[0];
    int representativeB = B[0];

    // Merge set B into set A.
    for (int i = 0; i < n; i++) {
        A[i] = representativeA;
    }
    for (int i = 0; i < m; i++) {
        B[i] = representativeA; 
    }

    return 0;
}


int intersection_set(int A[], int n, int B[], int m, int C[]) {
    int i = 0, j = 0, k = 0;


    while (i < n && j < m) {
        if (A[i] < B[j]) {

            i++;
        } else if (A[i] > B[j]) {
            j++;
        } else {
            C[k] = A[i];
            k++; 
            i++; 
            j++;  
        }
    }

    return k;  
}