#include<iostream>
using namespace std;
int main (){
    string name ="c++ language";
      
    char how_much[12];

    cout<<"name is : "<<name<<'\n'; 

    name .copy(how_much,sizeof name); 

    cout<<"how much char:- "<<how_much; 

return 0;
}
