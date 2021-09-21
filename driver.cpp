#include <iostream>
#include <sstream>
using namespace std;
int main() {
    float data[6]; //using this to reserve values for input //( . . . . . )
    float a;
    float b;
    float c;
    float d;
    float e;
    float f;

    string values;
    cout << "Enter values for a, b, c, d, e, f: ";
    getline(cin, values);  //get line will read entire line
    stringstream ss(values); //enables in/output operations for use on lines
    for (int i = 0; i < 6; i++) { //assignment variable values / checks i and increases by 1
        ss >> data[i]; //entering each value from input/knows that i want to take value from string
    }
    a = data[0];
    b = data[1];
    c = data[2]; //assiging values from the array to the variables
    d = data[3];
    e = data[4];
    f = data[5];

    if ((a*d - b*c) == 0) {
        cout << "There is no solution" << endl;
    } else {
        float x = (e*d - b*f) / (a*d - b*c);
        float y = (a*f - e*c) / (a*d - b*c);  //mathematical function
        cout << "X is " << x << endl;
        cout<< "Y is " << y << endl; 
    }
 return 0;
}
