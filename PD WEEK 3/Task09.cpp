#include <iostream>
using namespace std;
main()
{
int num1;
int num2;
int num3;
int num4;
int num5;
int num6;
int num7;
int num8;
int num9;
int num10;
int num11;
int num12;
int num13;
int num14;
int num15;
int one_to_five;
int six_to_ten;
int eleven_to_fifteen;
int total;

cout << "Enter first number: ";
cin >> num1;
cout << "Enter second number: ";
cin >> num2;
cout << "Enter third number: ";
cin >> num3;
cout << "Enter fourth number: ";
cin >> num4;
cout << "Enter fifth number: ";
cin >> num5;
cout << "Enter sixth number: ";
cin >> num6;
cout << "Enter seven number: ";
cin >> num7;
cout << "Enter eight number: ";
cin >> num8;
cout << "Enter night number: ";
cin >> num9;
cout << "Enter tenth number: ";
cin >> num10;
cout << "Enter eleven number: ";
cin >> num11;
cout << "Enter twelve number: ";
cin >> num12;
cout << "Enter thirteen number: ";
cin >> num13;
cout << "Enter fourteen number: ";
cin >> num14;
cout << "Enter fifteen number: ";
cin >> num15;

one_to_five = num1 + num2 + num3 + num4 + num5;
six_to_ten = num6 * num7 * num8 * num9 * num10;
eleven_to_fifteen = num11 - num12 - num13 - num14 - num15;

total = (one_to_five + six_to_ten) - eleven_to_fifteen;
cout << "The total is" << total << endl;
}