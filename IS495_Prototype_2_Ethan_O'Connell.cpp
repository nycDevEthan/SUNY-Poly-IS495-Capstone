// Prototype #2 for my capstone project for the course IS 495.
// This program expands upon prototype #1 and adds more features.
// These features include the addition of Sort and Search functions.
// This program is intended for the use of the SUNY Poly Bicycle Rental Service.
// Written by Ethan O'Connell
// Language: C++
// Compiler: GNU GCC (Code::Blocks 13.12)
//  Spring 2016

#include <iostream>
#include <stdlib.h>

using namespace std;

const int array_size = 5;

struct Students
    {
        int bike_id;
        string first_name;
        string last_name;
        char gender;
        string email_address;
        string phone_number;
        string residence_hall;
        char building_letter;
        int room_number;
    } myStructArray[array_size], temp;


void Store (Students myStructArray[array_size], char yes_no);
void Sort(Students myStructArray[array_size], int i, int j);
void Display(Students myStructArray[array_size], int i, int j);
void Search (Students myStructArray[array_size], int i, int j, char yes_no);

int main()
{
    Students myStructArray[array_size];

    char yes_no;
    int i, j;

    Store (myStructArray, yes_no);
    Search(myStructArray, i, j, yes_no);
    Sort(myStructArray, i, j);
    Display(myStructArray, i, j);

    return 0;
}

// Function to store student information in an array of structs.
// This function was written for my capstone for IS 495.
// Written by Ethan O'Connell
// Language: C++
// Compiler: GNU GCC (Code::Blocks 13.12)
//  Spring 2016
void Store (Students myStructArray[array_size], char yes_no)
{
    int i, j;


    for (i = 0; i < array_size; i++)
    {

        cout << "\n*** Entering information for record # " << i + 1 << " ***\n\n";

        cout << "Enter student's bicycle identification number: ";
        cin >> myStructArray[i].bike_id;

        cout << "Enter student's first name: ";
        cin >> myStructArray[i].first_name;

        cout << "Enter student's last name: ";
        cin >> myStructArray[i].last_name;

        cout << "Enter student's gender (M/F): ";
        cin >> myStructArray[i].gender;

        cout << "Enter student's email address: ";
        cin >> myStructArray[i].email_address;

        cout << "Enter student's phone number: ";
        cin >> myStructArray[i].phone_number;

        cout << "Enter student's residence hall: ";
        cin >> myStructArray[i].residence_hall;

            if (myStructArray[i].residence_hall == "Adirondack" | myStructArray[i].residence_hall == "Mohawk")
            {
                cout << "Enter the building letter: ";
                cin >> myStructArray[i].building_letter;
        }

        cout << "Enter student's dormitory room number: ";
        cin >> myStructArray[i].room_number;

        }

    return;
}

// Function to sort student records stored in an array of structs.
// The sorting technique is a bubble sort to sort the records
// in ascending order.
// This function was written for my capstone for IS 495.
// Written by Ethan O'Connell
// Language: C++
// Compiler: GNU GCC (Code::Blocks 13.12)
//  Spring 2016
void Sort(Students myStructArray[array_size], int i, int j)
{

        Students temp;

        for (i = 0; i < (array_size - 1); i++)
        {
                for (j = (i + 1); j < array_size; j++)
                {
                        if (myStructArray[i].bike_id > myStructArray[j].bike_id)
                        {
                                temp = myStructArray[i];
                                myStructArray[i] = myStructArray[j];
                                myStructArray[j] = temp;
                        }
                }
        }

        return;
}

// Function to display student records stored in an array of structs.
// This function was written for my capstone for IS 495.
// Written by Ethan O'Connell
// Language: C++
// Compiler: GNU GCC (Code::Blocks 13.12)
//  Spring 2016
void Display(Students myStructArray[array_size], int i, int j)
{
        for (i = 0; i < array_size; i++)
        {
                cout << "*** Student Records ***\n";

                    cout  << "Record #" << i + 1 << endl;
                    cout << "Bicycle ID number: " << myStructArray[i].bike_id << endl;
                    cout << "Name: " << myStructArray[i].first_name << ' ' << myStructArray[i].last_name << endl;
                    cout << "Gender: " << myStructArray[i].gender << endl;
                    cout << "Email Address: " << myStructArray[i].email_address << endl;
                    cout << "Phone Number: " << myStructArray[i].phone_number << endl;
                    cout << "Residence Hall: " << myStructArray[i].residence_hall << endl;

                    if (myStructArray[i].residence_hall == "Adirondack" || myStructArray[i].residence_hall == "Mohawk")
                    {
                        cout << "Building: " << myStructArray[i].building_letter << endl;
                    }

                    cout << "Room Number: " << myStructArray[i].room_number << endl;
        }

        return;
}

// Function to search for a student record stored in an
// array of structs.  The search is based on a user entered
// last name that is used as the search parameter.
// This function was written for my capstone for IS 495.
// Written by Ethan O'Connell
// Language: C++
// Compiler: GNU GCC (Code::Blocks 13.12)
//  Spring 2016
void Search(Students myStructArray[array_size], int i, int j, char yes_no)
{
    string last;
    i = 0;

        cout << "\n\nEnter last name: ";
        cin >> last;

        while (last != myStructArray[i].last_name && i < array_size)
        {
            i++;
        }

            if (last == myStructArray[i].last_name)
            {
                cout  << "Record #" << i + 1 << endl;
                cout << "Bicycle ID number: " << myStructArray[i].bike_id << endl;
                cout << "Name: " << myStructArray[i].first_name << ' ' << myStructArray[i].last_name << endl;
                cout << "Gender: " << myStructArray[i].gender << endl;
                cout << "Email Address: " << myStructArray[i].email_address << endl;
                cout << "Phone Number: " << myStructArray[i].phone_number << endl;
                cout << "Residence Hall: " << myStructArray[i].residence_hall << endl;

                    if (myStructArray[i].residence_hall == "Adirondack" || myStructArray[i].residence_hall == "Mohawk")
                    {
                        cout << "Building: " << myStructArray[i].building_letter << endl;
                    }

                cout << "Room Number: " << myStructArray[i].room_number << endl;
            }
            else
            {
                cout << "\nRecord not found...\n";
            }

    return;
}

