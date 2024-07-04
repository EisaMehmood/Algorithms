#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n =6;
     for(int i = 0; i<n; i++)
    {    
        int j = 0;
        for(; j<n-i-1;j++)
        {
            cout<<" ";
        }
        for(int k = j ;k<n; k++)
        {
            cout<<"#";
        }
        cout<<endl;
    }
    
    return 0;
}
