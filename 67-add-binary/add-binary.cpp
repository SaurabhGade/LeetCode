class Solution {
public:
    string addBinary(string a, string b) {
        int m = a.length() - 1;
        int n = b.length() - 1;
        bool x, y, carry = false;
        string ans = "";
        while (m > -1 || n > -1) {
            if (m > -1)
                x = (a[m] == '1');
            else
                x = false;
            if (n > -1)
                y = (b[n] == '1');
            else
                y = false;
            ans += (x ^ y ^ carry) ? '1' : '0';
            carry =
                ((carry && (x || y)) || (!carry) && (x && y)) ? true : false;
            m--;
            n--;
        }
        if (carry)
            ans += '1';
        reverse(ans.begin(), ans.end());
        return ans;
    }
};