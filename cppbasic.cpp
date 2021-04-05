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













