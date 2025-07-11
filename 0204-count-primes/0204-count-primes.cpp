class Solution {
public:
    int countPrimes(int n) {
        if (n < 2) 
           return 0;

        vector<bool> isPrime(n, true);

        isPrime[0] = false;
        isPrime[1] = false;

        // نبدأ من 2 لحد sqrt(n)
        for (int i = 2; i * i < n; i++) 
        {
            if (isPrime[i]) {
                // نلغي مضاعفات i
                for (int j = i * i; j < n; j += i) 
                    isPrime[j] = false;
            }
        }

        int count = 0;
        for (int i = 2; i < n; i++) 
            if (isPrime[i]) count++;

        return count;
    }
};