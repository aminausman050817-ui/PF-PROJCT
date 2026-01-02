#include <iostream>
#include <string>
using namespace std;

const int ADD = 1;
const int VIEW = 2;
const int UPDATE = 3;
const int DELETE_COURSE = 4; 
const int EXIT = 5;
void addCourse(string, string, string);
void viewCourses();
void updateCourse(string);
void deleteCourse(string);

void showMenu() {
    cout << "\n--- Course Learning System ---\n";
    cout << "1. Add Course\n";
    cout << "2. View Courses\n";
    cout << "3. Update Course\n";
    cout << "4. Delete Course\n";
    cout << "5. Exit\n";
    cout << "------------------------------\n";
    cout << "Enter choice: ";
}

int main() {
    int choice;
    string courseId, courseTitle, courseDesc;

    while (true) {
        showMenu();
        cin >> choice;
        cin.ignore();
        if (choice < ADD || choice > EXIT) {
            cout << "Invalid choice. Please try again.\n";
            continue;
        }

        if (choice == ADD) {
            cout << "Course ID: ";
            getline(cin, courseId);
            cout << "Title: ";
            getline(cin, courseTitle);
            cout << "Description: ";
            getline(cin, courseDesc);
            addCourse(courseId, courseTitle, courseDesc);
            cout << "Course added successfully.\n";
        }
        else if (choice == VIEW) {
            viewCourses();
        }
        else if (choice == UPDATE) {
            cout << "Course ID to update: ";
            getline(cin, courseId);
            updateCourse(courseId);
            cout << "Course updated successfully.\n";
        }
        else if (choice == DELETE_COURSE) {
            cout << "Course ID to delete: ";
            getline(cin, courseId);
            deleteCourse(courseId);
            cout << "Course deleted successfully.\n";
        }
        else if (choice == EXIT) {
            char confirm;
            cout << "Are you sure you want to exit? (y/n): ";
            cin >> confirm;
            if (confirm == 'y' || confirm == 'Y') break;
            cin.ignore(); // 
        }
    }

    return 0;
}
void addCourse(string id, string title, string desc) {
}

void viewCourses() {
}

void updateCourse(string id) {
}

void deleteCourse(string id) {
}





