#include <iostream>
using namespace std;
main(){

float weight;
float required_days;
float days_per_kg;
days_per_kg = 15;

cout << "Enter Weight that you want to lose: ";
cin >> weight;
required_days = days_per_kg * weight;
cout << "It will take you " << required_days << " days to lose " << weight << " kgs" << endl;
}