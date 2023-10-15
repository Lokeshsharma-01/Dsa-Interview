#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        int i=0, n=x.length();
        stack<char> s;
        while(i<n){
            char ch = x[i];
            if(ch=='{' || ch=='(' || ch=='[') s.push(ch);
            else{
                if(s.empty()) return false;
                else{
                    char top = s.top();
                    if(ch==']' && top == '['){
                        s.pop();
                    }else if(ch==')' && top == '('){
                        s.pop();
                    }else if(ch=='}' && top=='{'){
                        s.pop();
                    }else return 0;
                }
            }
            i++;
        }
        if(s.empty()) return 1;
        return 0;
    }
};