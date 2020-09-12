#include <stdio.h>

int main(){
    int array[4];
    int n;

    array[0] = 3;
    array[1] = 5;
    array[2] = 2;
    array[3] = 7;

    n = sizeof(array)/sizeof(array[0]);
    sort(array, n);

    for(int i = 0; i < n; i++){
        printf("%i", array[i]);
    }
}

int sort(int array[], int n){
    int tosort;
    for(int i = 1; i < n; i++){
        tosort = array[i];

        int j;
        for( j = i-1; j >= 0 && tosort < array[j]; j--){
            array[j+1] = array[j];
        }
        array[j+1] = tosort;
    }
    return array;
}