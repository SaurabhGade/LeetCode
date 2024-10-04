int hash[1001];
void csort(int *arr, int n){
    for(int i = 0; i < n ; i++)
        hash[arr[i]]++;
    int i = 0;
    int j = 0;
    while(i < 1001){
        while(hash[i]){
            arr[j] = i;
            hash[i]--;
            j++;
        }
        i++;
    }
}

long long dividePlayers(int* skill, int skillSize) {
    csort(skill, skillSize);
    long long ans = 0;
    long long presum = skill[0] + skill[skillSize-1];
    int i = 0, j = skillSize-1;
    while(i < j){
        int a = skill[i];
        int b = skill[j];
        if(a + b != presum )
            return -1;
        ans += a * b;
        i++;j--;
    }
    return ans;
}