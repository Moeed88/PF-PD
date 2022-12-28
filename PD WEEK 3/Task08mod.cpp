#include <iostream>
using namespace std;
main(){
int x,y,z;
int w, a, b, c, d, num, result;

cout << "Enter four digit number: ";
cin >> num;

a = num%10;
w = num/10;
b = w % 10;
x = w/10;
c = x%10;
y = x/10;
d = y%10;
z = y/10;
r = a + b + c + d;

cout << result << endl;
}