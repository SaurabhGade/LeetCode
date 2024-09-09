void csort(int *arr, int n){
    int hash[101];
    for(int i = 0 ; i < 101; i++)
        hash[i] = 0;
    for(int i = 0 ; i < n; i++)
        hash[arr[i]]+=1;
    int k = 0;
    for(int i = 0; i < 101; i++){
       while(hash[i] > 0){
        arr[k] = i;
        k++;hash[i]--;
       }
    }
}

int heightChecker(int* arr, int n) {
    int hrr[n];
    memcpy(hrr, arr, sizeof(int)*n);
    csort(arr, n);
    int ans = 0;
    for(int i = 0 ; i < n ; i++){
        ans += (arr[i] != hrr[i])? 1: 0;
    }
    return ans;
}