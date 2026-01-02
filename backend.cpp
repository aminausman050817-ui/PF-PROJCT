#include <iostream>
#include <fstream>
using namespace std;

// Function prototypes
void menu();
void addRecord();
void showRecords();
void updateRecord();
void deleteRecord();

int main()
{
    int choice;

    do
    {
        menu();
        cin >> choice;

        if (choice == 1)
        {
            addRecord();
        }
        else if (choice == 2)
        {
            showRecords();
        }
        else if (choice == 3)
        {
            updateRecord();
        }
        else if (choice == 4)
        {
            deleteRecord();
        }
        else if (choice == 5)
        {
            cout << "Program Exit\n";
        }
        else
        {
            cout << "Invalid Choice\n";
        }

    } while (choice != 5);

    return 0;
}

// MENU FUNCTION
void menu()
{
    cout << "\n----- BACKEND MENU -----\n";
    cout << "1. Add Record\n";
    cout << "2. Show Records\n";
    cout << "3. Update Record\n";
    cout << "4. Delete Record\n";
    cout << "5. Exit\n";
    cout << "Enter your choice: ";
}

// ADD RECORD
void addRecord()
{
    int id, age;
    string name;

    ofstream file("data.txt", ios::app);

    cout << "Enter ID: ";
    cin >> id;
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Age: ";
    cin >> age;

    file << id << " " << name << " " << age << endl;
    file.close();

    cout << "Record Added Successfully\n";
}

// SHOW RECORDS
void showRecords()
{
    int id, age;
    string name;

    ifstream file("data.txt");

    cout << "\nID   Name   Age\n";

    while (file >> id >> name >> age)
    {
        cout << id << "    " << name << "    " << age << endl;
    }

    file.close();
}

// UPDATE RECORD
void updateRecord()
{
    int id, age, searchId;
    string name;

    ifstream file("data.txt");
    ofstream temp("temp.txt");

    cout << "Enter ID to update: ";
    cin >> searchId;

    while (file >> id >> name >> age)
    {
        if (id == searchId)
        {
            cout << "Enter New Name: ";
            cin >> name;
            cout << "Enter New Age: ";
            cin >> age;
        }

        temp << id << " " << name << " " << age << endl;
    }

    file.close();
    temp.close();

    remove("data.txt");
    rename("temp.txt", "data.txt");

    cout << "Record Updated Successfully\n";
}

// DELETE RECORD
void deleteRecord()
{
    int id, age, searchId;
    string name;

    ifstream file("data.txt");
    ofstream temp("temp.txt");

    cout << "Enter ID to delete: ";
    cin >> searchId;

    while (file >> id >> name >> age)
    {
        if (id != searchId)
        {
            temp << id << " " << name << " " << age << endl;
        }
    }

    file.close();
    temp.close();

    remove("data.txt");
    rename("temp.txt", "data.txt");

    cout << "Record Deleted Successfully\n";
 
}
