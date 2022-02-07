# Student-grading-
A program, which reads values related to the activity of a number of students and prints whether student has passed the course and also his/her grade to the standard output. In this program you define a struct, whose elements are:
name (an array of char)
the student's activeness for taking part into lectures and exercises (a decimal number between 0 and 1),
whether the project work is done (bool),
the percentage of points got from the exam (double)
whether the course has been passed or not (bit-field)
course final grade between 0 and 5 (bit-field) 
The student passes the course if he/she has got at least 40% of the exam scores, and has done the project work. Each extra 12 total points will increase the grade by one. If the activity is more than 0.5, the student will get one extra grade. Otherwise, activity does not affect the final grade. The bit-field value for whether the course has been passed or not, is set based on the total values of other variables.
