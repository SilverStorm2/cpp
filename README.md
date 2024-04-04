Description of the Person and Employee Classes Project.
This project contains two classes: `Person` and `Employee`, demonstrating fundamental object-oriented programming principles in C++, such as inheritance, constructors, and methods.

## Class Person

The `Person` class serves as the base class storing information about an individual, including their first name and last name. It also defines the `Print()` method, which outputs this information to the standard output.

### Constructor

The constructor of this class takes two arguments (first name and last name) and initializes the class fields using an initialization list.

### Print Method

The `Print` method is a `const` method, meaning it does not modify any fields of the object. Its purpose is to display the person's first and last name on the screen.

## Class Employee

The `Employee` class publicly inherits from the `Person` class and extends it with additional information specific to an employee, such as their position and salary.

### Constructor

Similar to the `Person` class, the `Employee` class constructor uses an initialization list to pass the first name and last name to the base class constructor and to initialize the additional fields of position and salary.

### Print Method

The `Print` method in the `Employee` class calls the `Print` method of the `Person` class to output the first and last name. It then prints the employee's position and salary. This demonstrates the concept of method overriding and the use of base class methods from derived classes.

## Main Function

The `main` function demonstrates the creation of an `Employee` object with specific attributes and calls its `Print` method to display the information. This illustrates how inheritance allows `Employee` objects to use methods defined in both the `Employee` and `Person` classes.

