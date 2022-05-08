// Prototype #3 driver file for my capstone project for the course IS495.
// This program queries the user for a number of student records.
// The user can then store information for each student in each record.
// The records are then sorted and displayed.
// The user can then search for a specific record based on a student's last name.
// Written by Ethan O'Connell
// Language: C++
// Compiler: GNU GCC (Code::Blocks 13.12)
//  Spring 2016

#include <iostream>
#include "IS495_Prototype_3_Header_Ethan_O'Connell.h"

const int MAX = 3;

using namespace std;

int main()
{
    Student s[MAX];

    int i, j;
    string last;

    cout << "Enter the number of students: ";
    cin >> j;

    for (i = 0; i < j; i++)
    {
        s[i].Store(i);
    }

    for (i = 0; i < j; i++)
    {
        s[i].Sort(i, s);
    }

    for (i = 0; i < j; i++)
    {
        s[i].Display(i);
    }

    cout << "Search records by entering a student's last name.\n";
    cout << "Enter a last name: ";
    cin >> last;

    for (i = 0; i < j; i++)
    {
        s[i].Search(j, last);
    }

    return 0;
}
