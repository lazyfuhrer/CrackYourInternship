class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n)
    {
      vector<int> ans(n, 0);
    
      for (int i=0; i<arr.size(); i+=2) {
          ans[i] = arr[end-1];
          end--;
      }
    
      for (int i=1; i<arr.size(); i+=2) {
          ans[i] = arr[start];
          start++;
      }
      for (int i=0; i<ans.size(); ++i)
          arr[i] = ans[i];
    }
};    
