// Prototype #3 implementation file for my capstone project for the course IS495.
// This file contains the function definitions for Store, Sort, Display, and Search.
// Written by Ethan O'Connell
// Language: C++
// Compiler: GNU GCC (Code::Blocks 13.12)
//  Spring 2016

#include <iostream>
#include "IS495_Prototype_3_Header_Ethan_O'Connell.h"

using namespace std;


// Function to store student information in an array of objects.
// This function was written for my capstone for IS 495.
// Written by Ethan O'Connell
// Language: C++
// Compiler: GNU GCC (Code::Blocks 13.12)
//  Spring 2016
void Student::Store(int i)
{

        cout << "\n*** Entering student information for record # "<< i + 1 << " ***\n\n";

        cout << "Enter the bicycle identification number (*numbers only*): ";
        cin >> bike_id;

        cout << "Enter the student's first name: ";
        cin >> first_name;

        cout << "Enter the student's last name: ";
        cin >> last_name;

        cout << "Enter the student's gender (M/F): ";
        cin >> gender;

        gender = toupper(gender);

        cout << "Enter the student's email address: ";
        cin >> email_address;

        cout << "Enter the student's phone number: ";
        cin >> phone_number;

        cout << "Enter student's residence hall: ";
        cin >> residence_hall;

            if (residence_hall == "Adirondack" | residence_hall == "Mohawk")
            {
                cout << "Enter the building letter of the residence hall: ";
                cin >> building_letter;
            }

        cout << "Enter the student's dormitory room number: ";
        cin >> room_number;

        return;
}

// Function to display student records stored in an array of objects.
// This function was written for my capstone for IS 495.
// Written by Ethan O'Connell
// Language: C++
// Compiler: GNU GCC (Code::Blocks 13.12)
//  Spring 2016
void Student::Display(int i)
{
                cout << "\n\n***Displaying Records of Students Renting Bicycles***\n\n";

                    cout  << "Record #" << i + 1 << endl;
                    cout << "Bicycle ID number: " << bike_id << endl;
                    cout << "Name: " << first_name << ' ' << last_name << endl;
                    cout << "Gender (Male / Female): " << gender << endl;
                    cout << "Email Address: " << email_address << endl;
                    cout << "Phone Number: " << phone_number << endl;
                    cout << "Residence Hall: " << residence_hall << endl;

                    if (residence_hall == "Adirondack" || residence_hall == "Mohawk")
                    {
                        cout << "Building: " << building_letter << endl;
                    }

                    cout << "Room Number: " << room_number << "\n\n";

        return;
}

// Function to search for a student record stored in an
// array of objects.  The search is based on a user entered
// last name that is used as the search parameter.
// This function was written for my capstone for IS 495.
// Written by Ethan O'Connell
// Language: C++
// Compiler: GNU GCC (Code::Blocks 13.12)
//  Spring 2016
void Student::Search(int j, string last)
{
    int x = 0;

                if (last == last_name)
                {
                    cout  << "\nRecord #" << j << endl;
                    cout << "Bicycle ID number: " << bike_id << endl;
                    cout << "Name: " << first_name << ' ' << last_name << endl;
                    cout << "Gender (Male / Female): " << gender << endl;
                    cout << "Email Address: " << email_address << endl;
                    cout << "Phone Number: " << phone_number << endl;
                    cout << "Residence Hall: " << residence_hall << endl;

                    if (residence_hall == "Adirondack" || residence_hall == "Mohawk")
                    {
                        cout << "Building: " << building_letter << endl;
                    }

                    cout << "Room Number: " << room_number << endl;
                }

                x++;

    return;
}

// Function to sort student records stored in an array of objects.
// The sorting technique is a bubble sort to sort the records
// in ascending order.
// This function was written for my capstone for IS 495.
// Written by Ethan O'Connell
// Language: C++
// Compiler: GNU GCC (Code::Blocks 13.12)
//  Spring 2016
void Student::Sort(int i, Student s[])
{
    Student temp;       // Temporary variable to swap
    int j = (i + 1);

            if (s[i].bike_id > s[j].bike_id)    // Swaps if this pair
            {                       // is not in order
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;  // "Floats the lowest
            }                                // to the highest
}
