#include <iostream>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N;
    int arr[N], B[N], i;
    cin >> N;
    cout << N << "\n";
    int num;
    for (i=0;i<N;i++)
    {
        cin >> arr[num];
    }
    for (i=0;i<N;i++)
    {
        B[num]=arr[N-i-1];
        cout << B[num] << " " << "\n";
     
    }

    return  0;
}