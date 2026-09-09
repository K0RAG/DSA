#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {

public:

    int characterReplacement(string s, int k) {
        int l=0,r=0,maxlen=0,maxfreq=0;
        int hash[26]={0};
        while(r<s.size()){
            hash[s[r]-'A']++;
            maxfreq=max(maxfreq,hash[s[r]-'A']);
            if(r+1-l-maxfreq>k){
                hash[s[l]-'A']--;
                l++;
            }
            maxlen=max(maxlen,r+1-l);
            r++;
        }
        return maxlen;

    }

};

int main() {
    Solution obj;

    string s;
    int k;

    cout << "Enter string: ";
    cin >> s;

    cout << "Enter k: ";
    cin >> k;

    cout << "Longest repeating character replacement length: "
         << obj.characterReplacement(s, k) << endl;

    return 0;
}