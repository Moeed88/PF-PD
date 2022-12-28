#include <iostream>
using namespace std;

main()
{ 
string name;
float matric;
float matric_percentage;
float matric_aggregate;
float inter;
float inter_aggregate;
float inter_percentage;
float ecat;
float ecat_percentage;
float ecat_aggregate;
float aggregate;


cout << "Enter name: ";
cin >> name;

cout << "Enter matric marks: ";
cin >> matric;

cout << "Enter inter marks: ";
cin >> inter;

cout << "Enter ecat marks: ";
cin >> ecat;

matric_percentage = (matric/1100);
matric_aggregate = matric_percentage * 10;
inter_percentage = (inter/550);
inter_aggregate = inter_percentage * 40;
ecat_percentage = (ecat/400);
ecat_aggregate = ecat_percentage * 50;


aggregate = matric_aggregate + inter_aggregate + ecat_aggregate;
cout << " Your aggregate is " << aggregate << endl;
}

