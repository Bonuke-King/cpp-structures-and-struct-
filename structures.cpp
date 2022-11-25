//structs are a way to group several ralated variables into one place.
//unlike an array a structure can contain many different data types (int , string , bool,)

//to create a structure use the struct keyword and declare each of its members inside curly braces
#include <iostream>
#include <string.h>

using namespace std;
int main (){
//create a structure variable called myStructure
struct {
    int myNum;
    string myString;

}myStructure;

//Assign values to members of myStructure
myStructure.myNum =1;
myStructure.myString = "Hello World!";

//print members of myStructure

cout << myStructure.myNum << endl;
cout << myStructure.myString <<endl;

//one structure in multiple variables
struct {
string brand ;
string model;
int year;

}myCar1, myCar2; // we can add variables by separating them with a comma here

//put data into the first structure
myCar1.brand= "BMW";
myCar1.model= "X5";
myCar1.year= 1999;

//put data into the second structure
myCar2.brand="Ford";
myCar2.model ="Mustang";
myCar2.year =1969;

//print the structure members
cout << myCar1.brand<< " "<< myCar1.model<<" "<<myCar1.year<< " \n";
cout << myCar1.brand<< " "<< myCar2.model<<" "<<myCar1.year<< " \n";

















return  0;
}































