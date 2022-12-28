#include <iostream>
using namespace std;
main()
{
int initial_velocity;
int final_velocity;
int time;
int acceleration;

cout << "Enter initial_velocity: ";
cin >> initial_velocity;
cout << "Enter acceleration: ";
cin >> acceleration;
cout << "Enter time: ";
cin >> time;

final_velocity = (acceleration * time) + initial_velocity;
cout << "Final velocity is" << final_velocity << endl;
}