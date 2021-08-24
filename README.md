
# Cpp Templates

**Templates** are a feature of the C++ programming language that allows functions and classes to operate with [generic types](https://www.geeksforgeeks.org/generics-in-c/). This allows a function or class to work on many different data types without being re-written for each one.

C++ adds two more new keywords to support templates: 
- template 
- typename

The second keyword can always be replaced by keyword **class**

## How do templates work?
Templates are expanded at compiler time. The compiler does type checking before template expansion. The idea is simple as the source code contains only function/class but the compiled code may contain multiple copies of same function/class.

The concept of templates can be used in two different ways: 
- **Function Templates**
- **Class Templates**

### Function Templates
A function template works in a similar way to a normal function with one key difference.

A single function template can work with different data types at once but a single normal function can work only with one set of data type.

#### How to declare a function template?
A function template starts with the keyword **template** followed by template parameter inside *< >* which is followed by function declaration.
```
template <class T>
T someFunction(T arg)
{
    // some code
}
```
In the above code, **T** is a template argument that accepts different data types (int, float), and **class** is a keyword.

When an argument of a data type is passed to **someFunction()**, compiler generates a new version of **someFunction()** for the given data type.

### Class Templates
We can also create class templates for generic class operations.

Sometimes, we need a class implementation that is same for all classes, only the data types are different.

#### How to declare a class templates?
```
template<class T>
class className
{
    // some code
    public:
        T var;
        T someOperation(T arg);
        // some code
};
```
In the above declaration, **T** is the template argument which is a placeholder for the data type used.

Inside the class body, a member variable **var** and a member function **someOperation()** are both of type **T**.

#### How to create a class template object?
To create a class template object, we need to define the data type inside a *< >*.

***className < dataType > classObject;***

Example:
```
className<int> classObject;
className<float> classObject;
className<char> classObject;
```
