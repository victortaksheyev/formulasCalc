// WIP - will find the conjunction / disjunction of 2 sets

#include <iostream>
#include <cmath>

using namespace std;

// returns min of 2 numbers
double min (int x, int y) {
    double min = x;
    if (y < min) min = y;
    return min;
}

double max(int x, int y) {
    double max = x;
    if (y > max) max = y;
    return max;
}

void print(int x, int y) {
    cout << "[" << x << "," << y << "]";
}


int main () {
    double fint1, fint2, sint1, sint2, nint1, nint2;                           // first interval;
    char conjOrDis;
    bool conj;

    // ask user for one interval
    cout << "1st interval - 1st num: ";
    cin >> fint1;
    cout << "1st interval - 2st num: ";
    cin >> fint2;

    // as user for another interval
    cout << "2st interval - 1st num: ";
    cin >> sint1;
    cout << "2st interval - 2st num: ";
    cin >> sint2;

    // ask disjunction or conjuction
    cout << "conjunction('c') or disjunction('d')?" << endl;
    cin >> conjOrDis;

    if (conjOrDis == 'c')  conj = true;
    else conj = false;

    if (!conj) {
        nint1 = min(fint1, sint1);
        nint2 = max(fint2, sint2);
        cout << "conjunction of "; print(fint1, fint2);
        cout << " and "; print(sint1, sint2); cout << "       " << endl;
        print(nint1, nint2);

    } else {

    }
 

    // output final result
}