#include <iostream>

using namespace std;

int main(){
int age;
cout<< "enter your age (dont lie): ";
cin>> age;
if (age < 20){
    cout<< "you young!";
}
else if (age > 20 && age < 80){
    cout<< "you old!";
}
else{
    cout<<"you dead!";
}
return 0;
}