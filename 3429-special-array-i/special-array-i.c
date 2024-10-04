bool isArraySpecial(int* arr, int numsSize) {
    if(numsSize <= 1) return true;
    bool f = false;
    f = (arr[0] % 2 == 0);
    for(int i = 0 ; i < numsSize; i++){
        if(f){
            if(i % 2 == 0 && arr[i] % 2 != 0)
                return false;
            if(i % 2 != 0 && arr[i] % 2 == 0)
                return false;
        }else{
            if(i % 2 == 0 && arr[i] % 2 == 0)
                return false;
            if(i % 2 != 0 && arr[i] % 2 != 0)
                return false;
        }
    }
    return true;
}