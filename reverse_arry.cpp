#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;  
    int my_arr[n];
    
    for (int i=0;i<n;i++)
    
        cin>> my_arr[i];
        
    for (int i=n;i>=0;i--)
    
        cout<< my_arr[-i]<< " ";

    return 0;
}

