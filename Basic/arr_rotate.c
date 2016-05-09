#include <stdio.h>
#include <stdlib.h>

void right_rotate(int arr[], int s, int t){
    int i, last;
    
    last = arr[t];
    for(i=t;i>s;i--){
        arr[i] = arr[i-1];
    }
    arr[s] = last;
}

void left_rotate(int arr[], int s, int t){
    int i, first;
    
    first = arr[s];
    for(i=s; i<t;i++)
        arr[i] = arr[i+1];
    arr[t] = first;
}