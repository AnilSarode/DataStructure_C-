#include <stdio.h>
#include <string.h>

// Define the structure
struct Person {
    char name[50];  // Array to store the name
    int age;        // Integer to store the age
};

int main() {
    // Create an instance of the Person structure
    struct Person person1;

    // Assign values to the structure members
    strcpy(person1.name, "John Doe");  // Copy the name into the array
    person1.age = 30;  // Assign age

    // Access and print the values
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);

    return 0;
}
