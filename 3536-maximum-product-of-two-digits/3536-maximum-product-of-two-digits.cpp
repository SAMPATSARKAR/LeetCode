class Solution {
public:
    int maxProduct(int n) {
        string a = to_string(n);
        sort(a.rbegin(),a.rend());
        int b = 0;
        b = (a[0]-'0') * (a[1]-'0');
        return b;
    }
};