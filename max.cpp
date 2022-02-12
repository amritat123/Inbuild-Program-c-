// #include <iostream>
// #include <cstdio>
// using namespace std;

// int main() {
//     int a, b, c, d;
//     cin>>a>>b>>c>>d;
//     if(a>b && a>c && a>d)
//         cout<<(a);
//      if (b>a && b>c && b>d)
//         cout<<(b);
//      if (c>a && c>b && c>>d)
//         cout<<(c);
//     else 
//         cout<<(d);
        

//     return 0;
// }


// using  with function max number:-

#include <iostream>
#include <cstdio>
using namespace std;

int max( int a, int b, int c, int d){
    if ( a > b && a > c & a > d) return a;
    if ( b > a && b > c && b > d) return b;
    if ( c > a && c > b && c > d) return c;
    else  return d;
}

int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int your_ans=max(a,b,c,d);
    cout<<your_ans;
    return 0;
}