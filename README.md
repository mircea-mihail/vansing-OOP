# vansing-OOP

## Summary

This repository's code simulates a rudimentary class inheritence from the base class vans to the two inherited classes, Clothes and Shoes. For the << operator to work, the vans class also inherets an IOStream class. In the outlet class different object types are stored in the same base type vector using shared pointers and upcasting, and printed with downcasting. The menu class provides a command-line interface between the user and the program and the exceptions files help address some of the exceptions within the project.

## UML Diagram

A unified modeling language diagram, or UML diagram, has the purpose of allowing programmers to better visualise code. For this project I used draw.io to represent the classes in my project and the relationships between them:

![class diagram](https://github.com/mircea-mihail/vansing-OOP/blob/main/UMLdiagram.drawio.png)

## Features

In order to better grasp the usage of OOP, I attempted to implement as many OOP concepts as possible. Some of them are highlighted below:

### Basic OOP features
- .cpp and .h files (C plus plus and header files)
- inheritence with virtual classes:
    - Clothes and Shoes inherent Vans
    - Vans inherents IOStream
    - This is done in order to reuse code
- copy constructor and = operator (as seen in Vans, Shoes and Clothes)
- dynamic cast (as seen in Menu.cpp using dynamic_pointer_cast<>)
    - casting from type Vans to type Shoes
    - casting from type Vans to type Clothes
    - this is done to use a single container for multiple different types
- exceptions
    - some inputs may break the code
    - exceptions catch undefined behaviour and keep the code running
- static methods and variables
    - used when needing the same variable for multiple different instances of a class
    - used in the IDgenerator class
- STL
    - standard template library
    - used vector -> memory safe, efficient and easy to use
- smart pointers
    - memory safe
    - used every time a pointer is needed
- as many "const" as possible
- operator << 
    - done using friend function to the IOStream class
    - redefines the functionality of the << operator
- reading, storing and printing n objects
    - done using the Outlet class
- interactive menu 
    - a way of interacting with the Outlet class
    - done through the Menu class 

### More advanced OOP features
- 2 design patterns:
    - Singleton -> the Menu class. Only one single menu is needed at a time
    - Facade -> the OutletFacade class. It simplifies the Outlet class in order to make it customer friendly 
- a template class
    - the IDGenerator class
    - generates different ID types  
- a template method
    - the getId() method in the IDGenerator class
- a specialized template class
    - the IDGenerator class generates different ID-s for float values
- an ID generator class
- clone method
    - done for Clothes and Shoes classes 
    - it simplifies the insertion of multiple identical products 
- code style
    - PascalCase for classes 
    - camelCase for methods and variables
- UML diagram
    - as seen above
