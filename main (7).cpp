#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main() {
    //Letters that will be outputted
    char A = 'A';
    char B = 'B';
    char C = 'C';
    char D = 'D';
    char E = 'E';
    char F = 'F';
    char G = 'G';

    //Strings to hold words for the compliment
    string word1;
    string word2;
    string word3;
    string word4;
    string word5;
    string word6;

    int num1 = 0, num2=0, num3=0, num4=0, num5=0, num6=0;
    srand(time(0));
    cout << "Enter in six numbers:" <<endl;
    //inputted numbers are seed numbers used to generate random numbers between 0-200
    cin >> num1;
    num1 = rand() % 201;
    //cout << num1 << endl;

    cin >> num2;
    num2 = rand() % 201;
    //cout << num2 << endl;

    cin >> num3;
    num3 = rand() % 201;
    //cout << num3 << endl;

    cin >> num4;
    num4 = rand() % 201;
    //cout << num4 << endl;

    cin >> num5;
    num5 = rand() % 201;
    //cout << num5 << endl;

    cin >> num6;
    num6 = rand() % 201;
    //cout << num6 << endl;

    //Letter One conditional statement
    if ((num1 % 2) == 0) {
        cout << C;
        word1 = "You ";

    }
    else {
        cout << E;
        word1 = "You're ";
    }

    //Letter Two conditional statement
    if (num2 > num4) {
        cout << G;
        word2 = "brave, ";
    }
    else if ((num2 % 4) == 0) {
        cout << E;
        word2 = "clever, ";
    }
    else {
        cout << C;
        word2 = "amazing, ";
    }

    //Letter Three conditional statement
    if (num3 < 34) {
        cout << C;
        word3 = "cheerful, ";
    }
    else if ((num3 > 33) && (num3 < 67)) {
        cout << B;
        word3 = "adorable, ";
    }
    else {
        cout << E;
        word3 = "brainy, ";
    }

    //Letter Four conditional statement
    if ((num6 > num1) && (num6 > num2)) {
        cout << A;
        word4 = "and ";
    }
    else {
        cout << F;
        word4 = "plus ";
    }

    //Letter Five conditional statement
    if (((num5 + num6) >= (num2 + num4)) || (num4 >= 120)) {
        cout << G;
        word5 = "enthusiastic ";
    }
    else {
        cout << B;
        word5 = "fantastic ";
    }

    //Letter Six conditional statement
    if (num6 < 70) {
        if ((num1 % 2) == 0) {
            cout << C << endl;
            word6 = "angel.";
        }
    }
    else if ((num6 > 69) && (num6 < 141)) {
        cout << D << endl;
        word6 = "joker.";
        }
    else {
        cout  << G << endl;
        word6 = "pal.";
    }

    //outputs compliment
    cout << word1 << word2 << word3 << word4 << word5 << word6;

}
