/*
 * CS101 Final Exam - File 1: sort_array.cpp
 * The Logic Test: Sorting an Array
 *
 * Student Name: ____Jeshika Chaulagain____________________
 * Date: ___________12/18/2025_____________
 *
 * OBJECTIVE:
 * Write a program that sorts an array of 100 integers in ascending order.
 *
 * REQUIREMENTS:
 * 1. Use the provided array 'numbers' containing integers 1-100 in random order
 * 2. Implement a sorting algorithm (Bubble Sort is recommended for simplicity)
 * 3. Display the array before and after sorting (at least the first 10-20 elements)
 *
 * HINTS:
 * - You'll need a nested loop (a loop inside another loop)
 * - You'll need to swap two elements when they're in the wrong order
 * - To swap: temp = a; a = b; b = temp;
 *
 * GRADING FOCUS:
 * - Do you understand the sorting logic?
 * - Can you use nested loops correctly?
 * - Does your swap mechanism work?
 */

#include <iostream>
using namespace std;

int main()
{
    //I was given an array called numbers that contains integers from 1 to 100 in random orderss
    int numbers[100] = {
        63, 12, 89, 45, 23, 78, 34, 91, 56, 7,
        82, 29, 67, 14, 95, 41, 18, 73, 50, 36,
        98, 5, 61, 27, 84, 48, 10, 75, 32, 69,
        21, 58, 93, 15, 80, 44, 3, 70, 37, 96,
        52, 19, 86, 31, 65, 9, 77, 42, 24, 88,
        54, 1, 71, 39, 94, 25, 81, 47, 13, 68,
        35, 99, 59, 22, 85, 46, 11, 74, 30, 97,
        51, 6, 72, 38, 92, 26, 83, 49, 16, 66,
        33, 100, 57, 20, 87, 43, 8, 76, 40, 62,
        28, 90, 55, 17, 79, 4, 64, 2, 53, 60
    };

    // Display the array BEFORE sorting (first 10 elements) so, we know
    cout << "Array before sorting , as you can see (first 10 numbers):" << endl;
    for (int i = 0; i < 10; i++)
    //I used for loop to print the first 10 numbers so I could see the array before sorting
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Bubble Sort algorithm
    // I usee two loops the outer loops control how many passes of algorithm it makes
    // The inner loop compare two adjacent number
    for (int i = 0; i < 100; i++)
    {
        // Inner loop 
        for (int j = 0; j < 99; j++)
        {
            // if the current number is greater than the next number, I swap them using a temporary variable so the smaller number moves forward
            if (numbers[j] > numbers[j + 1])
            {
                int temp = numbers[j];        // Store first value temporarily for a short time
                numbers[j] = numbers[j + 1];  // Move smaller value forward
                numbers[j + 1] = temp;        // Put bigger value in the next stage
            }
        }
    }
     // my sorting mechanism sorry forgot spelling it works.
    // After sorting, I printed the first 10 numbers again to confirm the array is now in ascending order and is fine
    cout << "\nArray after sorting (first 10 numbers):" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    cout << "\nSorting completed....! The numbers are now in order, yayyyyyyy ;)" << endl;
    // I displayed the sorting is completed message and used return 0 to end the code
    return 0;
}