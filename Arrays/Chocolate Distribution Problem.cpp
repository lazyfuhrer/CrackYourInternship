class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    long long diff = LLONG_MAX;
    sort(a.begin(), a.end());
    
    if (m==1)
        return 0;
    else {
        long long start=0, end = m-1;
        while (end <= n-1) {
            if (a[end]-a[start] < diff)
                diff = a[end]-a[start];
            start++; end++;    
        }
        return diff;
    }
    }
};
