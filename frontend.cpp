#include <iostream>
#include <string>
using namespace std;

cost int ADD= 1;
cost int VIEW= 2;
cost int UPDATE= 3;
cost int DELETE= 4;
cost int EXIST= 5;

void addCourse(string, string, string);
void viewCourses();
void updateCourse(string);
void deleteCourse(string);

int main() {
    int choice;
    string id, title, desc;

    while (true) {
        cout << "\n--- Course Learning System ---\n";
        cout << "1. Add Course\n";
        cout << "2. View Courses\n";
        cout << "3. Update Course\n";
        cout << "4. Delete Course\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            cout << "Course ID: ";
            getline(cin, id);
            cout << "Title: ";
            getline(cin, title);
            cout << "Description: ";
            getline(cin, desc);
            addCourse(id, title, desc);
        }
        else if (choice == 2) {
            viewCourses();
        }
        else if (choice == 3) {
            cout << "Course ID to update: ";
            getline(cin, id);
            updateCourse(id);
        }
        else if (choice == 4) {
            cout << "Course ID to delete: ";
            getline(cin, id);
            deleteCourse(id);
        }
        else if (choice == 5) {
            break;
        }
        else {
            cout << "Invalid choice\n";
        }
    }
    return 0;
}



