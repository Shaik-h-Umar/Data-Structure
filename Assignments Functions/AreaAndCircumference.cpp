#include<iostream>
using namespace std;

float AreaAndCircumference(float r, float pi = 3.14){
    float area = (pi*r*r);
    float circumference = (2*pi*r);
    cout <<"Area : "<<area<<endl;
    cout <<"Circumference : " <<circumference;
    return 0;
}

int main(){
    float radius = 3;
    AreaAndCircumference(radius);
    return 0;
}
