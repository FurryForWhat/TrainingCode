#include "stdio.h"

int binarysearch(int arr[],int n, int k);

int main(){
    int K= 4;
    int N= 5;
    int arr[5]= {'1','2','3','4','5'};

binarysearch(arr[5], N, K );
    return 0;
}

int binarysearch(int arr[5],int n, int k ) {
    int found= 0;
    int index= 0;
    for( int i= 0; i< n; i++){
        if( k == arr[i]){
            found= k;
            index = i;
        }else{
            i++;
        }
    }

    if(found == k){
        printf(" %d appears at index %d.", k, index );
    }

    printf(" %d is not present.", k);
    return k;
}
