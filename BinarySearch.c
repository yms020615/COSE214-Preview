int BinarySearch(int a[], int k, int n) {
    int l = 0, r = n-1;
    while (l <= r) {
        int m = (l + r) / 2;
        if (k == a[m])
            return m;
        else if (k < a[m])
            r = m-1;
        else
            l = m+1;
    }
    return -1;
}
