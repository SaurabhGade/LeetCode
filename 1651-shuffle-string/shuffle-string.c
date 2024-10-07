char* restoreString(char* s, int* arr, int n) {
    char *ans = malloc(n+1);
    int i = 0;
    for( i = 0 ; i < n; i++)
        ans[arr[i]] = s[i];
    ans[i] = 0;
    return ans;
}