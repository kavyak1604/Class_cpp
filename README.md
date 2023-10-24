# CLASS
Class in C++ is the building block that leads to Object-Oriented programming. It is a user-defined data type, which holds its own data members and member functions, which can be accessed and used by creating an instance of that class.

## THEORY
A Class is a user-defined data type that has data members and member functions.
Data members are the data variables and member functions are the functions used to manipulate these variables together, these data members and member functions define the properties and behavior of the objects in a Class.An Object is an instance of a Class. When a class is defined, no memory is allocated but when it is instantiated memory is allocated.<br>
When a class is defined, only the specification for the object is defined; no memory or storage is allocated. To use the data and access functions defined in the class, you need to create objects.The syntax is as given as:ClassName ObjectName;<br>
The data members and member functions of the class can be accessed using the dot(‘.’) operator with the object. For example, if the name of the object is obj and you want to access the member function with the name printName() then you will have to write obj.printName().

## ALGORITHM
a)calculating volume of cuboid<br>
1)Start<br>
2)Create a Cuboid class with private attributes height width and length<br>
3)In the Cuboid class constructor:<br>
Initialize the height, width, and length attributes with values passed as parameters.<br>
Create a method volume() within the Cuboid class:<br>
Calculate and return the volume of the cuboid using the formula: height * width * length.<br>
4)Display the calculated volume to the user.<br>
5)End<br>
b)calculating area of rectangle<br>
1)Start<br>
2)Create a rectangle class with private attributes length,width;
3)Inside the rectangle class:<br>
Define a method area() to calculate and return the area of the rectangle using the formula: length * width.<br>
4)Create a cuboid class that inherits from the rectangle class<br>
5)End

## CONCLUSION
Hence programs like calculating area volume of rectangles,cube cuboid and date of birth were performed using classes.


