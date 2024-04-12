#include <bits/stdc++.h>
#include <stack>
using namespace std;

int tong2(char s,int a,int b)
{
    int tong = 1;
    if (s=='*') return a*b;
    if (s=='-') return a-b;
    if (s=='+') return a+b;
    if (s=='/') return a/b;
    if (s == '%') return a%b;
    if (s == '^') {
        for (int i=1; i<=b; i++)
        tong = tong*a;
        return tong; 
    }

}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {

        string s;
        cin >> s;
        stack<int> st;
        int tong=0;
        for (int i=0; i<s.length(); i++)
        {
            if (s[i]=='+' ||s[i]=='-' ||s[i]=='*' ||s[i]=='/')
            {
                int t1=st.top(); st.pop();
                int t2=st.top();st.pop();
                tong = tong2(s[i],t2,t1);
                st.push(tong);
            }
        else st.push(s[i]-'0');
        }
        cout<<tong<<endl;
    }

    
    
}