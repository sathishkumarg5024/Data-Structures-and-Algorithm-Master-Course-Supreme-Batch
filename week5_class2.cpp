#include<iostream>
#include<string>
using namespace std;
// solved on leetcode





string main(){
string ans ="";
int i =0;
string s ="abbcca";
while(i<s.length()){
    if(ans[ans.length()-1]==s[i]){
        ans.pop_back();
    }
    else{
        ans.push_back(s[i]);
    }
    i++;
}

return ans;
}