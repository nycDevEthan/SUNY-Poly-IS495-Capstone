/*---------------------------------------------------------------------
  Written by Ethan O'Connell
  Language: C++
  Compiler: GNU GCC (Code::Blocks 13.12)
  December 2015


    This header file defines a Student class.
    Basic Operations:
        Store: Stores user entered information into records within an array of objects.
        Sort: Uses a bubble sort to sort records stored in an array of objects.
        Display: Displays the records stored within an array of objects.
        Search:  User enters a last name of a student and the records
                 stored within an array of objects is searched.

---------------------------------------------------------------------*/


#include <iostream>
#include <string>

using namespace std;

class Student
{
	int bike_id;
	string first_name;
    string last_name;
    char gender;
	string email_address;
	string phone_number;
	string residence_hall;
	string building_letter;
	int room_number;

    int i;          // Counter variable
    string last;    // Last name variable used as search parameter


	public:

	void Store(int i);
	void Sort(int i, Student s[]);
	void Display(int i);
	void Search(int j, string last);
};
