#include <iostream>
#include <cmath>

using namespace std;

void problem1(int x);
void problem2(int x);
void problem3(int x, int y, int z);
void problem4(int x, int y);
void problem5(int year);
void problem6(double a, double b, double c);
void problem7 (int a, int b, int c);
void problem8 (char x);
void problem9 (int x , int y);
void problem10(double a, double b, double c, double d);
void problem11(int x);
void problem12(char x);
void problem13(int x, int y);
void problem14(int x);
void problem15(int x);
void problem16(char x);

int main() {
    char a, b;
//    cout << "Enter an 3 digit num: ";
    cin>>a;
    problem16(a);
}

void problem1(int x) {
    if ( x >= 0 ) cout << "Positive" << endl;
    else cout << "Negative" << endl;

}

void problem2(int x) {
    string value = "negative ";
    if (x >= 0 ) value = "positive ";
    if (x%2 == 0) value += "and even";
    else value += "and odd";
    cout << value<< endl;
}

void problem3(int x, int y, int z) {
    if ( x > y && x > z ) cout << x << endl;
    else if ( y > x && y > z) cout << y <<endl;
    else if (z > x && z > y) cout << z << endl;
}

void problem4 (int x,  int y) {
    if (x % y == 0) cout << x << " is divisible by " << y << endl;
    else cout << x << " is not divisible by " << y << endl;
}

void  problem5 (int year) {
    if ( year % 4 == 0 ) {
        if ( year % 100 == 0 && year % 400 != 0 ) cout << year << " is not a leap year" <<endl;
        else cout << year << " is a leap year" <<endl;
    }else cout << year << " is not a leap year" <<endl;
}

void problem6 (double a, double b ,double c) {
    double dis = b*b- (4 * a * c);
    dis = sqrt(dis);

    double x1 , x2;
    x1 = (b * -1 + dis);
    x2 = (b * -1 - dis);

    cout << x1/(2*a) << "\n" << x2/ (2*a) << endl;
}

void problem7 (int a, int b , int c) {
    if ( (a+b+c) == 180 ) cout<< "triangle is valid";
    else cout << "triangle is not valid";
}

void problem8 (char x) {
    int y = (int) x;
    if( y >= 66 && y <= 90 ) cout<< "upper case alphabet";
    else if ( y >= 97 && y <=122 ) cout <<"lower case alphabet";
    else cout << "not an alphabet";
}

void problem9(int x , int y) {
    double point = x*x + y*y;
    point = sqrt(point);
    if ( point > 10 ) cout <<" does not lie in a circle";
    else cout<<"point lies in circle";
}

void problem10 (double a, double b, double c, double d) {
    double price1 = b/a;
    double price2 = d/c;
    cout << price1 <<"   " << price2<< endl;
    if (price1 > price2) cout <<"Package 2 has a better price";
    else if (price1 == price2) cout << "Two packages are equal";
    else cout << "Package 1 has a better price";
}

void problem11( int x ) {
    int rev = 0;
    int num = x;
    while ( x != 0 ) {
        rev += x % 10;
        x /= 10;
        rev *= 10;
    }
    rev /= 10;
    if ( rev == num )   cout << rev << " is a palidrome number"<<endl;
    else cout << num << " is not a palidrome number" <<endl;
}

void problem12(char x) {
    switch (x) {
        case 'g': cout << "Go!"; break;
        case 'y': cout << "Get ready!"; break;
        case 'r': cout << "Stop"; break;
    }
}

void problem13( int x, int y ) {
    cout << "Today is ";

    for (int i = 0; i < 2; i++) {
        if (i == 1) cout << " the future day is ";

        switch (x) {
            case 0: cout << "Sunday"; break;
            case 1: cout << "Monday"; break;
            case 2: cout << "Tuesday"; break;
            case 3: cout << "Wednesday"; break;
            case 4: cout << "Thursday"; break;
            case 5: cout << "Friday"; break;
            case 6: cout << "Saturday"; break;
        }
        x = (x+y)%7;
        if ( x == 7 ) x = 0;
    }
}

void problem14(int x) {
    switch (x) {
        case 0 ... 59: cout << "F"; break;
        case 60 ... 69: cout << "D"; break;
        case 70 ... 79: cout << "C"; break;
        case 80 ... 89: cout << "B"; break;
        case 90 ... 100: cout << "A"; break;
    }
}

void problem15(int x) {
        if (x== 0) cout<< "zero";
        else if (x > 0) cout<<"positive";
        else cout<<"negative";
}

void problem16(char x) {
    switch (x) {
        case 'g': cout << "Hallo"; break;
        case 'u': cout << "Salom"; break;
        case 'e': cout << "Hello"; break;
        case 'r': cout << "Privet"; break;
        default: cout << " I don't know this number"; break;
    }
}