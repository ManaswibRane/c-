#include<iostream>
using namespace std;
int main()
{

    return 0;
}
// upperbound---->finds position of first element greater than your give input
//upper_bound(begin(letters),end(letters),target)
// class Solution {
// public:
//     char nextGreatestLetter(vector<char>& letters, char t) {
//        int idx=upper_bound(begin(letters),end(letters),t)-begin(letters);
//    if(idx==letters.size()){
//     return letters[0];
//    }
//         return letters[idx];
//     }
// };