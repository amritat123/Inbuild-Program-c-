#include<iostream>
#include<vector>
using namespace std;

// class Box
// {
//     private:
//     int l,b,h;
//     public : 
//     Box()
//     {
//         l=b=h=0;
        
//     }
    // Box(int length, int breadth, int height){
    //     length=l,breadth=b,height=h;
    //     Box (const  Box &b1)
    //     {
    //     length=b1.l; 
    //     breadth= b1.b;
    //     height=b1.h;
    //     }

    // }
    // int getlength(){
    //     return l;
    // int getbreadth()
    //     return b;
    // int getheight()
    //     return h;
    // int long long CalculateVolume()
    // return volume;
    // }

class Box {
private:
int l, b, h;
public:
Box() {
    l=b=h = 0;
}
Box(int length, int breadth, int height) {
l= length;
b = breadth;
h = height;
}
Box(const Box &B) {
l = B.l;
b= B.b;
h = B.h;
}
int getLength() {
return l;
}
int getBreadth() {
return b;
}
int getHeight() {
return h;
}
long long CalculateVolume() {
return (long long)(b) * l * h;
}
bool operator<(Box &B) {
if (l< B.l) {
return true;
} else if (l== B.l) {
if (b < B.b) {
return true;
} else if (b== B.b) {
if (h < B.h) {
return true;
}
}
}

return false;
}
};
ostream &operator<<(ostream &out, Box &B) {
out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
return out;
};

