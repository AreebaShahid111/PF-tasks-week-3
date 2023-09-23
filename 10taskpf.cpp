#include<iostream>
using namespace std;
main() {
int wins;
int loses;
int draws;
int points;
string name;
cout<< " Enter the name of the cricket team: ";
cin >> name;
cout<< "Enter the number of wins:";
cin >> wins;
cout<< "Enter the number of loses:";
cin >> loses;
cout<< "Enter the number of draws:";
cin >> draws;
points = (wins * 3) + (loses * 0) + (draws * 1);
cout<< name << " has obtained " << points << " points in the Asia Cup Tournament.";





}