// Solution synthesis

Parameters - first name, last name, sex, age, major, address(to make things easier ill just add county), student ID (ID is maybe given here instead?) // must be normalized tables
Main menu - add, delete, edit, search
Add - must ask for every parameter and receive everything. Generate student ID?
Delete -
Edit - 
Search - search by any of the parameters. if nothing returns, then give a message that is empty. Searches through all vectors. 
GUI - Last part of project. Add an image maybe for school. 

Classes or structures should be used. 


// Requirements Gathering

In order to create the paramaters for this solution, each parameter must be assigned as a variable 
E.G. : First and last name can be assigned as const John_Doe 
       Sex can be assigned as const male or const female 
       Age == int age  // variable is changeable
       major == int major // subject to change; Each major will be assigned an input number between 1 & 100 // EX: cin 7 = cout "computer science"
       county == const county 
         : county = san_bernardino
       int student_id
In order to construct the main menu: 
