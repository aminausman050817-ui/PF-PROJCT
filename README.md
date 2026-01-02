 PROJECT NAME: course learning material management system
 
 GROUP MEMBERS :
 
   Amina Usman ( 022 )
   Azhan ahmad ( 010 )
   Talha abdul jabbar ( 182 )
   
   SECTION : A
   SEMESTER-1 ( Evening )
   SUBJECT ( PROGRAMMING FUNDAMENTAL )
 
 Project Introduction:
 
  This project is a simple Course Learning Material Management System developed in C++.  
  The system allows users to ( Add, View, Update, and Delete )course learning materials.  
  All data is stored permanently using file handling.
  
  The project is divided into three separate files  (Frontend, Logic, Backend) to follow proper software design and team collaboration.


Project Objectives:
  To understand file handling in C++
  To implement CRUD operations
  To work in a team using GitHub
  To compile multiple files and run them as one project

Project Planning:
  The project was planned in the following steps:
  First we decide project topic (Course Learning Material) then we divide work among group members and decided which member performed which task.
  We Separate project into frontend, logic, and backend. Implement file handling for permanent storage then Compile all files together using g++ and Upload code on GitHub using commits.

Task Distribution (Group Members)
 Member 1 – Backend Developer ( Azhan ahmed )
  File: `backend.cpp`

Tasks Performed:
  Implemented file handling
  Created functions to read data from `data.txt`
  Created functions to write data into `data.txt`
  Ensured data persistence

How it works:
  Reads course records from file
  Writes updated records back to file

Member 2 – Logic Developer ( Talha abdul jabbar )
File: `logic.cpp`

Tasks Performed:
Implemented CRUD operations:
  Add Course
  View Courses
  Update Course
  Delete Course
Connected logic with backend file handling functions

How it works:
  Takes data from frontend
  Processes it
  Sends it to backend for storage

Member 3 – Frontend Developer ( Amina usman )
File: `frontend.cpp`

Tasks Performed:
  Designed menu-driven interface
  Took user input
  Displayed output on screen
  Connected frontend with logic functions

How it works:
User interacts with menu
Calls logic functions based on user choice

How All 3 Files Run as One Program:

This project is divided into three C++ files:
  frontend.cpp (User Interface)
  ogic.cpp (CRUD Operations)
  backend.cpp (File Handling)

These files are not run separately.  
They are compiled together using the g++ compiler to create a single executable file.
Open the project folder in VS Code and run the following command in the terminal:
g++ frontend.cpp logic.cpp backend.cpp -o course
This command combines all three source files and generates one executable file named `course`.
After successful compilation, run the project using:
course or ./course
The generated executable runs the complete system, allowing the frontend, logic, and backend to work together as one program.


## 📂 Project Structure
