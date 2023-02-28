# vansing-OOP

## Summary

This repository's code simulates a rudimentary class inheritence from the base class vans to the two inherited classes, clothes and shoes. For the << operator to work, the vans class also inherets an IOStream class. In the outlet class different object types are stored in the same base type vector using shared pointers and upcasting, and printed with downcasting. The menu class provides a command-line interface between the user and the program and the exceptions files help address some of the exceptions within the project.

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
- copy constructor and = operator
- dynamic cast
- exceptions
- static methods and variables
- STL
- smart pointers
- as many "const" as possible
- operator << 
- reading, storing and printing n objects
- interactive menu 

### More advanced OOP features
- 2 design patterns
- a template class
- a template method
- a specialized template class
- an ID generator class
- clone method
- code style
- UML diagram
