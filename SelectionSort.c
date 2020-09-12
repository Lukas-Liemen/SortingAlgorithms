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
    
    return 0;
}

int sort(int array[], int n){
    int memory = 0;
    
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){

            if(array[j] < array[i]){
                memory = array[j];
                array[j] = array[i];
                array[i] = memory;
             }
        }
    }
    return array;
}