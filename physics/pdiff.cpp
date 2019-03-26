// calculates percent difference between any experimental and actual values

#include <iostream>
#include <cmath>
using namespace std;

float calcPDiff(float known, float exp);
int main () {
    
    float known, exp;
    cin >> known >> exp;
    cout <<"Percent diff: " << calcPDiff(known, exp) << " %" << endl;
    return 0;
}

float calcPDiff(float known, float exp) {
    return (abs(known - exp)/((exp+known)/2)*100);
}
