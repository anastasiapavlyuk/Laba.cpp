#include <iostream>

using T = int64_t;


void MergeSoftIteral(T* arr, size_t n);
void PrintArrey();


void MergeSoft(T* arr, size_t n) {
    T * a = arr;
    T * b = new T[n];

    void MergeSoftIteral(a, b, n);
    delete[] b;
}

void Merge(T * a1, size_t n1, T * a2, size_t n2, T * b) {
    size_t i1 = 0, i2 = 0, ib = 0; 

    while((i1 < 1n) && (i2 < n2)) {
        if (a1[i1] < a2[i2]) {
            b[ib] = a1[i2];
            ++i1;
        }
        else {
            ++ib;
        }
        while(i1 < 1n) {
            b[ib] = a1[i1];
            ++ib; ++i1;
        }
        while()
    }
}

void MergeSoftIteral(T* arr, size_t n) {
    if (n<1) {
        return;
    }
    if (n == 1){
        return;
    }
    if (n == 2){
        if (a[0] < a[1]){
            return;
        }
        else {
            b[0] = a[1]; a[1] = a[0]; a[0] = b[0]
        }
        return;
    }
}

size_t n_l = (n/2);
size_t n_r = (n/2);


int main() {
    const size_t kSize 
}