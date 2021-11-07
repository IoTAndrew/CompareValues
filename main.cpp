#include <iostream>

using namespace std;

double getMax (double num, double num2, double num3);

int main() {
    double num1;
    double num2;
    double num3; //comment that might help

    cout << "giv namber plz" << endl;
    cin >> num1;
    cout << "giv namber 2 plz" << endl;
    cin >> num2;
    cout << "giv namber 3 plz" << endl;
    cin >> num3;

    cout << "The bigger one is : " << getMax(num1, num2, num3) << endl;

}

double getMax (double num, double num2, double num3){
    if (num >= num2 && num >= num3){
        return num;
    }
    else if (num2 >= num && num2 >= num3){
        return num2;
    }
    else if (num3 >= num && num3 >= num2){
        return num3;
    }
    else {
        cout << "None, numbers are equal" << endl;
        return 0;
    }
}