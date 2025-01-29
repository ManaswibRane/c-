#include<iostream>
using namespace std;
int main()
{
    return 0;
}
// class Solution {
// public:
//     string firstPalindrome(vector<string>& words) {
//         int n=words.size();
//         string ans="";
//         for(int i=0;i<n;i++){
//             string str=words[i];
//             reverse(words[i].begin(),words[i].end());
//             if(str==words[i])
//             {
//                return str;
//             }
          
//         }
//         return ans;
//     }
// };
// class Solution {
// public:
//     string firstPalindrome(vector<string>& words) {
//         int n=words.size();
//         string ans="";
//         for(int i=0;i<n;i++){
//             string str= string(words[i].rbegin(),words[i].rend());
//             if(str==words[i])
//             {
//                return str;
//             }
          
//         }
//         return ans;
//     }
// };