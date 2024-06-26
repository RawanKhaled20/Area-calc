/* Author: Rawan Khaled */

#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main() {
    int input;
    float result, First_side, Second_side;
    double pi = M_PI;

    cout << "----------------------------Welcome to this Area Calculator----------------------------------" << endl;

    while (true) {
        cout << "Please Enter the number of the type of Shape you want to calculate the area for" << endl;
        cout << "1.Square" << endl << "2.Rectangle" << endl << "3.Circle" << endl << "4.Triangle" << endl << "5.Rhombus" << endl;
        cin >> input;

        switch (input) {
            case 1:
                while (true) {
                    cout << "Enter the side length of the square: ";
                    cin >> First_side;
                    if (First_side <= 0)
                        cout << "This is not a valid side length. Enter a positive number." << endl;
                    else
                        break;
                }
                result = pow(First_side, 2);
                cout << "The Area of the Square is equal to " << result << endl;
                break;

            case 2:
                while (true) {
                    cout << "Enter the length and width of the rectangle respectively: ";
                    cin >> First_side >> Second_side;
                    if (First_side <= 0 || Second_side <= 0)
                        cout << "These are not valid side lengths. Enter positive numbers." << endl;
                    else
                        break;
                }
                result = First_side * Second_side;
                cout << "The Area of the Rectangle is equal to " << result << endl;
                break;

            case 3:
                while (true) {
                    cout << "Enter the radius of the circle: ";
                    cin >> First_side;
                    if (First_side <= 0)
                        cout << "This is not a valid radius. Enter a positive number." << endl;
                    else
                        break;
                }
                result = pi * pow(First_side, 2);
                cout << "The Area of the Circle is equal to " << result << endl;
                break;

            case 4:
                while (true) {
                    cout << "Enter the height and base lengths of the triangle respectively: ";
                    cin >> First_side >> Second_side;
                    if (First_side <= 0 || Second_side <= 0)
                        cout << "These are not valid side lengths. Enter positive numbers." << endl;
                    else
                        break;
                }
                result = 0.5 * First_side * Second_side;
                cout << "The Area of the Triangle is equal to " << result << endl;
                break;

            case 5:
                while (true) {
                    cout << "Enter the lengths of the two diagonals of the rhombus respectively: ";
                    cin >> First_side >> Second_side;
                    if (First_side <= 0 || Second_side <= 0)
                        cout << "These are not valid side lengths. Enter positive numbers." << endl;
                    else
                        break;
                }
                result = 0.5 * First_side * Second_side;
                cout << "The Area of the Rhombus is equal to " << result << endl;
                break;

            default:
                cout << "You chose a number that is not in the list. Try again with a number in the list. Press 'Y' in the next question. " << endl;
        }

        // Ask the user if they want to calculate another shape
        char again;
        cout << "Do you want to calculate the area again? (Y/N): ";
        cin >> again;

        if (again != 'Y' && again != 'y') {
            break; // Exit the program if the user doesn't want to calculate another shape
        }
    }

    return 0;
}
