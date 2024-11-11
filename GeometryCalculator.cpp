// GeometryCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
File name: GeometryCalculator.cpp
Programmer: Ozair GHaissi	
Date: 11/10/2024
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int choice;
    const double PI = 3.14159;

    do {
        // Display menu
        cout << "Geometry Calculator\n";
        cout << "1. Calculate the Area of a Circle\n";
        cout << "2. Calculate the Area of a Rectangle\n";
        cout << "3. Calculate the Area of a Triangle\n";
        cout << "4. Quit\n";
        cout << "Enter your choice (1–4): ";
        cin >> choice;

        if (choice == 1) {
            // Area of Circle
            double radius;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            if (radius < 0) {
                cout << "Invalid input. Radius cannot be negative.\n";
            }
            else {
                double area = PI * radius * radius;
                cout << "The area of the circle is: " << fixed << setprecision(2) << area << endl;
            }
        }
        else if (choice == 2) {
            // Area of Rectangle
            double length, width;
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            if (length < 0 || width < 0) {
                cout << "Invalid input. Length and width cannot be negative.\n";
            }
            else {
                double area = length * width;
                cout << "The area of the rectangle is: " << fixed << setprecision(2) << area << endl;
            }
        }
        else if (choice == 3) {
            // Area of Triangle
            double base, height;
            cout << "Enter the base of the triangle: ";
            cin >> base;
            cout << "Enter the height of the triangle: ";
            cin >> height;
            if (base < 0 || height < 0) {
                cout << "Invalid input. Base and height cannot be negative.\n";
            }
            else {
                double area = 0.5 * base * height;
                cout << "The area of the triangle is: " << fixed << setprecision(2) << area << endl;
            }
        }
        else if (choice == 4) {
            cout << "Exiting the program.\n";
        }
        else {
            cout << "Invalid choice. Please enter a number between 1 and 4.\n";
        }

    } while (choice != 4);

    return 0;
}
