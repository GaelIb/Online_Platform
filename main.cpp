#include "Instructor.h"
#include "Student.h"

int main()
{
    // Create an Student object
    Student student("john_doe", "johndoe@example.com", "Math, Science");

    // Create an Instructor object
    Instructor instructor("drsmith", "drsmith@example.com", "Physics", 10);
    Instructor instructor2("drdiaz", "drdiaz@example.com", "Spanish", 15);
    return 0;
}



