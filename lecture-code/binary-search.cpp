#include <iostream>
#define NOT_FOUND -1;

int bin_search(int *A, int lo, int hi, int k){

    if(hi < lo){
        return NOT_FOUND;
    }

    int mid = lo +((hi-lo)/2);

    if(A[mid] == k){
        return mid;
    }

    if(A[mid] < k){
        return bin_search(A, mid+1, hi, k);
    }

    return bin_search(A, lo, mid-1, k);

}

int main(){
int arr[] = {1,2,3,4,5,10, 20, 30, 40, 50};
int idx = bin_search(arr, 0, 9, 20);
std::cout << idx << std::endl;

}