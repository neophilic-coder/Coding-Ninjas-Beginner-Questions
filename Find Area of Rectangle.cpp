#include <iostream>
using namespace std;
int getArea(int L, int B){
    int area = L*B;
    return area;
}
int main() {
    //Write your code here
    int length;
    int breadth;
    cin>>length;
    cin>>breadth;
    int area = getArea(length, breadth);
    cout<<area;
    return 0;
}
