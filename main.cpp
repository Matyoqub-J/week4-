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

int main() {
    double a,b,c,d;
    cin>>a>>b;
    cin>>c>>d;
    problem10(a,b,c,d);
//    int x, y;
//    cin >> x >> y;
//    problem9(x, y);
//    return 0;
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