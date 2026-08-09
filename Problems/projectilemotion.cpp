#include<iostream>
#include<cmath>
using namespace std;
int main (){
    int u, theta;
    const double g = 9.8;
    cout << "Enter the initial velocity (m/s): ";
    cin >> u;
    cout << "Enter the angle of projection (degrees): ";
    cin >> theta;
    double T = (2 * u * sin(theta * M_PI / 180)) / g;
    cout << "Time of flight (T) = " << T << " seconds" << endl;
    double R = (pow(u, 2) * sin(2 * theta * M_PI / 180)) / g;
    cout << "Range (R) = " << R << " meters" << endl;
    double H = (pow(u, 2) * pow(sin(theta * M_PI / 180), 2)) / (2 * g);
    cout << "Maximum Height (H) = " << H << " meters" << endl;
    return 0;
    
}