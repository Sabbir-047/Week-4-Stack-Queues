#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    queue<int> q;

    // Stack operation
    int n;
    cin >> n;
    // taking stack values
    while(n--){
        int x;
        cin >> x;
        st.push(x);
    }


    // queue operation
    int m;
    cin >> m;
    // taking queue values
    while(m--){
        int y;
        cin >> y;
        q.push(y);
    }

    
    // conditions for the problem
    while (!st.empty() || !q.empty())
    {
        if (st.top() == q.front())
            cout << "YES" << endl;
        else
            cout << "NO\n";
            break;
    }
    
    return 0;
}