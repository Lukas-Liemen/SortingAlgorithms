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
    int memory = 0;

    for(int i = 0; i < n; i++){
        for(int j = 1; j < n; j++){
            if(array[j] < array[j-1]){
                memory = array[j];
                array[j] = array[j-1];
                array[j-1] = memory;
            }
        }
    }

    return array;
}