#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>var{1,2,3,4,5};
    var.erase(var.begin());

    for (int x:var)
        cout<<x<<" ";
    return 0;
}