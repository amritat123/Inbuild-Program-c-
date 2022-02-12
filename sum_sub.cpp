#include <stdio.h>
#include <iostream>
using namespace std;

void sum (int *a,int *b){
    int sum;
    sum = *a + *b;
    cout<<sum<<endl;
}
    
void diff(int *a, int *b){
    int sub;
    sub=(*a< *b)?(*b- *a):(*a- *b);
    cout<<sub;
}

int main() {
    int a, b;
    cin>>a>>b;
    sum(&a,&b);
    diff(&a,&b);
    return 0;
}