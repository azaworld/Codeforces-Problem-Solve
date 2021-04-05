# cppraw

                                         1.1 cpp syntex:

#include <iostream> // header file library 
using namespace std; // we can use names for objects and variables from the standard library


int main(){    //a main function
cout<< "hello world!";
return 0; //ends the main function
} //this is used to close the main function


                                1.2 ##omitting namespace and replacing 

#include <iostream>
int main(){
std::cout << "Hello World!";
//using namespace std line is ommited and replaced with the std keyword ,followed by the :: operator for some objects

return 0;
}


                                1.3 #print and new line breaking code 

[Multiple comment]
/*you can use cout objects as you want. 
bt it doesnot insert a new linear_congruential*/ 

#include<iostream>
using namespace std;
int main()
{
[Single Comment]
  //to insert a new line \n(preferred way) or "endl" is used  
   
    cout<< "Hello \n Mr Arifuzzaman Antor\n\n";
    cout<<"I am learning C++\n";
    cout<<"i am the only one who can help you"<<endl;
    cout<<"so plz try to come to me"<<endl
    
    return 0;
}


                                          1.4 C++ variables & Creating variables

    int: stores intergers (123,-123)

    double: stores floating point numbers (19.99 or -19.99)
    double myIELTSscore=8.5

    char: stores single characters ('a' or "A")
    char myFirstNameletter='F'

    string: stores text("Hello Antor")
    string myText="Hello Antor";

    bool: stores values with tow states (true /false)
    bool myDream = true;


##Example Code:

 #include<iostream>
 using namespace std;
 int main(){
//type variablename(should be unique which will be called identifier) = value
   /*
   identifer names making rules:
   
1.Names can contain letter digits underscores
2.      can begin with a letter / under score
3.        are case sensitive(myVar and myvar are different)
4.         cant contain whitespaces or special characters like !,@,#,% etc
5.              reserved words(int,double etc) cant be used as names  
   
   */
   int  myRoll      =  10;
   //another system to create variable
   int myAge;
   myAge=16;
//add two varible
   int totalAgeAndRoll=myRoll+myAge;
      cout<<"so the total age and roll is "<<totalAgeAndRoll<<endl;
   // to display new variable <<(insertion operator) is used
   cout<<"hi i am the "<<myRoll<<"th girl in my class \n" <<endl;
   cout << "I am   "<<myAge<<" years old."<<endl;
   return 0;
 }

Again another type Example//constant variable

#include <iostream>
using namespace std;

int main() {
  const int myNum = 15;//it will not change
  const float PI=3.14;
  myNum = 10;//error cz myNum is declared constant  
  cout << myNum;
  return 0;
}


                                             1.5 C++ user input

cout is pronounced "see-out". Used for output, and uses the insertion operator (<<)

cin is pronounced "see-in". Used for input, and uses the extraction operator (>>)

  //Example code
  
#include <iostream>
using namespace std;

int main(){
int x;
  
cout<< "type a number: ";//type a number and press enter button
cin>>x;//get user input from ur keyboard
cout<< "your number is : "<<x;

return 0;
}

                                    1.6 Creating a Simple Calculator

//user must input two numbers and print the sum by calculating them

#include<iostream>
using namespace std;
int main()
{

    int x,y; //declaring two input variable
    int sum;//declaring sum for input addition

    cout<<"type a number plz: "; //printing some line to make you easy

    cin>>x;//taking input from ur keyboard
    
    cout<<"type another number plz again: ";
    cin>>y;

    sum=x+y;//calculating the addition
    
    @Task is to calculate multiplication and devision 
    and modulus % (remainder)


    cout<<"Sum is :" << sum;//printing the sum
}



                                                    1.7 Data types


#include <iostream>
#include <string>
using namespace std;
 
int main () {
  // Creating variables
  int myNum = 5;               // Integer (whole number) size 4 byte
  float myFloatNum = 5.99;     // Floating point number  size 4 byte
  double myDoubleNum = 9.98;   // Floating point number  size 8 byte
  char myLetter = 'D';         // Character               size 1 byte
  bool myBoolean = true;       // Boolean                  size 1 byte
  string myString = "Hello";   // String
   
  // Print variable values
  cout << "int: " << myNum << "\n";
  cout << "float: " << myFloatNum << "\n";
  cout << "double: " << myDoubleNum << "\n";
  cout << "char: " << myLetter << "\n";
  cout << "bool: " << myBoolean << "\n";
  cout << "string: " << myString << "\n";
 
  return 0;
}

                                   NB: float vs. double

   The precision of a floating point value indicates
   how many digits the value can have after the decimal point. 
  The precision of float is only six or seven decimal digits,

  while double variables have a precision of about 15 digits.
    
  Therefore it is safer to use double for most calculations

             @Task: take int double and float input and print the output


                               Using scientific value 10 as e program:

#include<iostream>
using namespace std;

int main(){
float x=35e3;
double y=12e4;

cout<<x<<"\n";
cout<<y;

return 0;

}


                                            Boolean types:
  
#include <iostream>
  using namespace std;
   int main()
   {

    bool isCodingFun=true;
    bool isMeHero=false; //ha ha

    cout<<isCodingFun<<"\n"; // output will be 1 as it is true
    cout<<isMeHero; //output will be 0 as it is false

   return 0;
   }








