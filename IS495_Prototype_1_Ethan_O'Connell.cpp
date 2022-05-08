// Prototype #1 for my capstone project for the course IS 495.
// Program creates a structure of records for students using
// the SUNY Poly Bicycle Rental Service.  These records can
// be populated by the user and displayed to the user.
// Written by Ethan O'Connell
// Language: C++
// Compiler: GNU GCC (Code::Blocks 13.12)
//  Spring 2016

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
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
    };

    Students myStructArray[5];      // Declares an array of structs

    int array_size = 5;
    char yes_no;

    for (int i = 0; i < array_size; i++)    // User can enter information about the students for each record
    {

        cout << "Enter information for new record (Y/N)? ";
        cin >> yes_no;

        yes_no = toupper(yes_no);

        if (yes_no == 'Y')
        {

            cout << "\n*** Entering information for record # " << i + 1 << " ***\n\n";

        cout << "Enter student's bicycle identification number: ";
        cin >> myStructArray[i].bike_id;

        cout << "Enter student's first name: ";
        cin >> myStructArray[i].first_name;

        cout << "Enter student's last name: ";
        cin >> myStructArray[i].last_name;

        cout << "Enter the student's gender (M/F): ";
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

        cout << "Enter dormitory room number: ";
        cin >> myStructArray[i].room_number;

        }
        else if (yes_no == 'N')
        {
            cout << "Display records? (Y/N): ";
            cin >> yes_no;

            yes_no = toupper(yes_no);

            if (yes_no == 'Y')
            {
                for (int j = 0; j < i; j++)     // Records entered can be displayed to the user
                {
                    cout << "\n\n***Displaying Student Records***\n\n";

                    cout  << "Record #" << j << endl;
                    cout << "Bicycle ID number: " << myStructArray[j].bike_id << endl;
                    cout << "Name: " << myStructArray[j].first_name << ' ' << myStructArray[j].last_name << endl;
                    cout << "Gender (Male / Female): " << myStructArray[j].gender << endl;
                    cout << "Email Address: " << myStructArray[j].email_address << endl;
                    cout << "Phone Number: " << myStructArray[j].phone_number << endl;
                    cout << "Residence Hall: " << myStructArray[j].residence_hall << endl;

                    if (myStructArray[j].residence_hall == "Adirondack" || myStructArray[j].residence_hall == "Mohawk")
                    {
                        cout << "Building: " << myStructArray[j].building_letter << endl;
                    }

                    cout << "Room Number: " << myStructArray[j].room_number << endl;

                    exit(1);

                }
            }
            else if (yes_no == 'N')
            {
                exit(1);
            }
        }
    }

    return 0;
}
