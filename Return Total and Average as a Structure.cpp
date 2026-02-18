// Return Total and Average as a Structure.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
using namespace std;

struct result_record
{
    int total;
    float average;
};

result_record calculate_result(int marks1, int marks2, int mark3);


int main()
{
    int marks1;
    int marks2;
    int marks3;

    cin >> marks1 >> marks2 >> marks3;

    result_record result_main = calculate_result(marks1, marks2, marks3);

    cout << "Total: " << result_main.total << endl;
    cout << "Average: " << result_main.average << endl;

    return 0;
}

result_record calculate_result(int marks1, int marks2, int mark3)
{
    result_record temp_result;
    temp_result.total = marks1 + marks2 + mark3;
    temp_result.average = temp_result.total / 3.0f;

    return temp_result;
}
