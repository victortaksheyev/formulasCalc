#include <iostream>
#include <math.h>

using namespace std;

int main () {
    double n;
    double average;
    cout << "Enter N ";
    cin >> n;
    cout << "Enter average ";
    cin >> average;

    double *data = new double[(int)n];
    // enter data in array
    cout << "Enter data into array: ";
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }

    // main algorithm
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += pow((data[i]-average),2);
    }
    double numerator = sqrt((1/(n-1))*sum);
    double solution = numerator/sqrt(n);
    cout << "Final result: " << solution << endl;
}