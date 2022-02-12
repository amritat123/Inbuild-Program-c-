// #include <iostream>
// #include <cstdio>
// using namespace std;
// int main() {
//     int a,b;
//    string c[]={"","one","two","three","four","five","six","seven","eight","nine"};
//     cin>>a>>b;
//     for(int i=a;i<=b;i++)
//         cout<<((i<=9)?c[i]:((i%2==0)?"even":"odd"))<<"\n";
//     return 0;
// }

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b;
   string n[]={"","one","two","three","four","five","six","seven","eight","nine"};
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if (i<=9)
            cout<<n[i]<<endl;
        else if (i>9){
            if (i%2==0)
                cout<<"even"<<endl;
            else 
                cout<<"odd"<<endl;
        }
             
        
    }
    return 0;
}