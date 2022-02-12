//  include<iostream>
// using namespace std;
// int main (){
//     int a=3;
//     int b=2;
//     b=a++;
//     cout<<++b;
//     return 0;

// }

#include <iostream>
using namespace std;

int main() {
    int passengers;
    cin>>passengers;
    int bus=50;
    int c;
    c=passengers%bus;
    if(c==0){
      cout<<"0";
    }else{
        cout<<bus-c;
    }
    

}
