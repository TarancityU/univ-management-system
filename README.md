# univ-management-system


README for C++ code to manage professors and subjects in a university
This C++ program is designed to manage the professors and subjects in a university. The program allows you to hire new professors, list all the professors in the university, and assign professors to teach lectures.

The program consists of two main classes: Professor and Subject. The Professor class represents a professor and stores the professor's name, birth year, and the number of lectures they can teach. 
The Subject class represents a subject and stores the subject's name, the total number of lectures available, and an array of professors who can teach that subject.

The program starts by initializing three subjects: History, Science, and Engineering. You can then choose one of the following options:

Hire professors: Enter the number of professors you want to hire, and then enter their information (name, birth year, number of lectures, subject). 
The program will add the professors to the corresponding subject's array and update the subject's lecture count.

List professors: The program will list all the professors in the university, grouped by subject. 
The list will show the professor's name, birth year, and the number of lectures they can teach.

Assign lectures: Enter the name of the professor you want to assign a lecture to. 
The program will check if the professor is available (i.e., has lectures remaining), and if so, it will reduce the professor's lecture count and update the subject's lecture count. 
If the professor is not available, the program will display an error message.

The program will continue to prompt you for input until you enter the 'Q' option to quit.

Instructions for running the code:

1.Copy the code into a C++ compiler or IDE.
2.Compile and run the code.
3.Follow the prompts to hire professors, list professors, or assign lectures.
