class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        // نبدأ من آخر رقم ونزود عليه 1
        for (int i = n - 1; i >= 0; i--) {
            // لو الرقم أقل من 9، نزود 1 وخلاص
            if (digits[i] < 9) 
            {
                digits[i]++;
                return digits;
            }

            // لو الرقم 9، يبقى نخليه 0 ونكمل الباقي
            digits[i] = 0;
        }

        // لو طلعنا من اللوب، يبقى كل الأرقام كانت 9
        // نضيف 1 في أول الفكتور
        digits.insert(digits.begin(), 1);

        return digits;
    }
};