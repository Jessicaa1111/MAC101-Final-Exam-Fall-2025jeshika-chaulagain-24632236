/*
 * CS101 Final Exam - File 2: bmi_calculator.cpp
 * The Tool Test: BMI Calculator
 *
 * Student Name: _______________Jeshika Chaulagain_________
 * Date: __________12/18/2025______________
 *
 * OBJECTIVE:
 * Create an interactive program that calculates a user's Body Mass Index (BMI).
 *
 * REQUIREMENTS:
 * 1. Ask the user for their weight in kilograms
 * 2. Ask the user for their height in meters
 * 3. Calculate BMI using the formula: BMI = weight / (height × height)
 * 4. Display the calculated BMI to the user
 * 5. BONUS: Tell the user their BMI category (Underweight, Normal, Overweight, Obese)
 *
 * HINTS:
 * - Use 'double' or 'float' for decimal numbers
 * - Use 'cin' to get input from the user
 * - Use 'cout' to display messages and results
 *
 * BMI CATEGORIES (BONUS):
 * - Underweight: BMI < 18.5
 * - Normal weight: BMI 18.5 - 24.9
 * - Overweight: BMI 25 - 29.9
 * - Obese: BMI >= 30
 *
 * GRADING FOCUS:
 * - Can you get input from the user?
 * - Can you perform the calculation correctly?
 * - Can you display the result in a user-friendly way?
 */

#include <iostream>
using namespace std;

int main()
{
  // Declare variables to store weight, height, and BMI
    double weight;
    double height;
    double bmi;
    // I used double because it helps to store decimal points also, so the user can inputer any values
      // I used cout so the user knows the displayed texts
    cout << "Welcomeeeeeeee! toooo theee BMI Calculator!" << endl;
    cout << "This program will calculate your Body Mass Index (NO Judgement here) let's start." << endl;
    cout << endl;

    // Ask the user for weight in kilograms
    cout << "Enter your weight in kilograms ( don't feel shy ): ";
    cin >> weight;
   // I asked user to enter their weight in kg and height in meters.
    //I used cin to store the values entered by the user
    cout << "Enter your height in meters: ";
    cin >> height;

    // I calculated BMI using the formula given 
    bmi = weight / (height * height);

    // I displayed the calculated BMI using cout so the user can see their result easily
    cout << "Your BMI is.................................Drumroll pls: " << bmi << endl;
    //I used if, else if, and else statements to compare the BMI value and determine the user’s BMI category
    // Determine BMI category
    if (bmi < 18.5)
    {
        cout << "Category: Underweight ( it's okay you are perfect just love your self and work on diet )" << endl;
    }
    else if (bmi < 25)
    {
        cout << "Category: Normal weight, yayyyyyyyy" << endl;
    }
    else if (bmi < 30)
    {
        cout << "Category: Overweight  its okay try to include lil healthy in ur diet" << endl;
    }
    else
    {
        cout << "Category: Obese ( it's fine u will get through this)" << endl;
    }

    cout << "\nThank you for using the BMI Calculator, i hope you use it next time too!88and happy Holidaysssss and Happy new year" << endl;
    //I printed a thank-you message for the user and returned 0 to end the program.
    return 0;
}
 