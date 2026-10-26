class Solution {
public:
bool isVowel(char a){
    vector<char> arr={'a','e','i','o','u','A','E','I','O','U'};
    if(find(arr.begin(),arr.end(),a)!=arr.end()){
        return true;
    }
    return false;
}
    string reverseVowels(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<j){
           while(i<j && !isVowel(s[i])){
                i++;
           }
           while(i<j && !isVowel(s[j])){
            j--;
           }
           swap(s[i],s[j]);
           i++;j--;
        }
        return s;
    }
};