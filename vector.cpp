#include<iostream>
#include<vector>
using namespace std ;
int main (){
    vector<int>var(4,3);// [3,3,3,3]
    
    var.push_back(60);//[3,3,3,3,60]
    var.at(0);//3
    int a =var.at(0);
    cout<<a<<"\n";

    var.pop_back();//[3,3,3,3]
    var.erase(var.begin(),var.begin()+3);//[3]
    var.clear();

    for ( int  i=0;i<var.size();i++){
        cout<<var[i]<<" ";
    }
    cout <<"back"<<var.back();
    cout <<"front"<<var.front();

}
