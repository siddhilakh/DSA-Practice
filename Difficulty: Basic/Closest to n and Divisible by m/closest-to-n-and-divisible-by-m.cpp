class Solution {
  public:
    int closestNumber(int n, int m) {
        // code here
        int q = n/m;
        int lower = q*m;
        int upper;
        if(n*m > 0)
        upper = (q+1) * m;
        else
        upper = (q-1) *m;
        if(abs(n-lower) < abs(n-upper))
        return lower;
        else if(abs(n-lower) > abs(n -upper))
        return upper;
        else
        return abs(lower) > abs(upper) ? lower :upper;
    }
};