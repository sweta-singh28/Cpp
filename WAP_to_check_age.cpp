#include<iostream>
using namespace std;
int main(){
int age;
cout<<"Enter your age: " <<endl;
cin>>age;
if (age<18)
{
    cout<<"KID" <<endl;
}
else if (age==18)
{
    cout<<"TEENAGER" <<endl;
}
else{
    cout<<"ADULT" <<endl;

}
    return 0;

}