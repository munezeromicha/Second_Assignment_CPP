// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

string ones_digits(int n){
    if(n>=0 and n<=9){
        string ones[n] = {"zero","ones","two","three","four","five","six","seven","eight","nine"};
        return ones[n];
    }
}
string check_2(int n){
    string tens[] = {"ten","twelve","thirteen","forteen","fifteen","sixteen","sevteen","eighteen","nineteen"};
    int first_digit = n/10;
    int second_digit = n % 10;
    
    if(first_digit == 1){
        return ten[second_digit];
    }
    string other_digits[] = {"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninenty"};
    if(second_digit == 0){
        return other_digits[first_digit];
    }
    else{
        return other_digits[first_digit]+" "+ones_digits(second_digit);
    }
}
string check_3(int n){
    first_digit = n / 100;
    second_digit = n % 100;
    if(first_digit == 0)
        return check_2();
    return ones_digits(first_digit)+" "+"hundred"+" "+check_2(second_digit);
}
string check_4(int 4){
    first_digit = n / 1000;
    second_digit = n % 1000;
    return ones_digits(first_digit)+" "+
}
int main() {
int n;
cout<<"please insert the number : ";
cin>>n;
int result =ones_digits(n);
cout<<"Answer will be : "<<result<<endl;


    return 0;
}