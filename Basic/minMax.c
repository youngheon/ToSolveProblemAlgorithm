int min(int x, int y){
    if(x < y)
        return x;
    return y;
}

int max(int x, int y){
    if(x > y){
        return x;
    }
    return y;
}

int max_arr(int arr[], int arr_len){
    int maxA, i;
    maxA = arr[0];
    for(i=1; i < arr_len ; i++){
        if( arr[i] > maxA){
            maxA = arr[i];
        }
    }
}

#define max(x,y) ((x)>(y)?(x):(y))
#define min(x,y) ((x)<(y)?(x):(y))

//but, Caution 
int max_arr2(int arr[], int arr_len){
    if(arr_len==1)
        return arr[0];
    else
        return max(arr[arr_len - 1], max_arr2(arr, arr_len-1)); //It's too long time by Macro's recursive
}
