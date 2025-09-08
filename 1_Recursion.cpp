#include<bits/stdc++.h>
using namespace std;

int recur(int n)
{
    if(n>5)
        return 0;
    int sum = recur(n+1);
    return sum + n;
}

int main()
{
    cout << recur(1) << endl;
    
    return 0;
}
