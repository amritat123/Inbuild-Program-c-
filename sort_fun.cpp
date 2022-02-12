// # include<iostream>
// # include<vector>
// # include<algorithm>
// using namespace std;
// int main (){
//     vector<int>var;
//     // cin>>var;
//     var.push_back(211);
//     var.push_back(2);
//     var.push_back(234);
//     var.push_back(21);
//     int my_ar[3]={1,2,3};

//     sort(var.begin(),var.end());
//     sort(my_ar,my_ar+3);
//     cout<<my_ar;

//     return 0;  
// }

# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;

int main(){
    int num,n;
    int arr[10];

    for (int i=0;i<=num;i++){
        cin>>arr[i];
    }
    sort(arr,arr+num);

    for (int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}
