class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int sum = 0;
        int num = n;
        while(num > 0) {
            int digit = num % 10;
            sum = sum + (digit * digit * digit);
            num = num/10;
        }
        return sum ==n;
    }
};