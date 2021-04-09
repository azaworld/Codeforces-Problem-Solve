                                             
                                                   1.1 Expression

so write a program containing constant expression:

#include <iostream>  
using namespace std;  
int main()  
{  
    int x;        // variable declaration. first declared the 'x' variable of integer type. 
    x=(3/2) + 2;  // constant expression..assign the simple constant expression to the 'x' variable.

Output
    cout<<"Value of x is : "<<x;  // displaying the value of x.  
    return 0;  
}  

             wrtie the program and obvserve the output..
               
    run the basic program using that template
               
               
(x * y) -5        
x + int(9.0) // this is type casting..mane 9.0 float k int e convert kora hoise
               anoter program: for integram expression:


#include <iostream>  
using namespace std;  
int main()  
{  
    int x;  // variable declaration.  
    int y;  // variable declaration  
    int z;  // variable declaration  
    cout<<"Enter the values of x and y";  
    cin>>x>>y;  //input newa holo evabe declare kore
    z=x+y;  
    cout<<"\n"<<"Value of z is :"<<z; //  displaying the value of z.  
    return 0;  
}  

/*accha run na kore tumi dekho tu output nij theke bujte paro ki na je output koto hobe jodi paro tahole
nijeke akta smile gift koro*/

                  Now another program for you: 
ur task: take two float input and show the addition of those inputs using cpp program..
  
  //jodi na paro tahole niche aktu chukh buliye naw..valo lagbe dekhe

#include <iostream>  
using namespace std;  
int main()  
{  
      
   int x;   // variable declaration  
   int y=9;    // variable initialization  
   x=y+int(10.0);    // integral expression  
  cout<<"Value of x : "<<x;   // displaying the value of x.  
  return 0;  
}  



********Let's understand through an example code:
  
  #include <iostream>  
using namespace std;  
int main()  
{  
      
   float x=8.9;      // variable initialization  
   float y=5.6;      // variable initialization  
   float z;             // variable declaration  
   z=x+y;  
   std::cout <<"value of z is :"  << z<<std::endl;  // displaying the value of z.  
     
  
    return 0;  
}  
  

*******Let's see another example of float expression.

#include <iostream>  
using namespace std;  
int main()  
{  
   float x=6.7;    // variable initialization  
   float y;      // variable declaration  
   y=x+float(10);   // float expression  
   std::cout <<"value of y is :"  << y<<std::endl;  // displaying the value of y  
   return 0;  
}  
  

                   Pointer Expression: //example deitesi bujhba tahole:

To declare array we wirte: int a[] = {1,2,3,4,5};//array initialization
a[0]=1,a[1]=2,a[2]=3 etc 


so the program can be written: 


#include <iostream>  
using namespace std;  
int main()  
{  
      
   int a[]={1,2,3,4,5};  // array initialization  
   int *ptr;       // pointer declaration  
   ptr=a;    // assigning base address of array to the pointer ptr  
   ptr=ptr+1;   // incrementing the value of pointer  
   std::cout <<"value of second element of an array : "  << *ptr<<std::endl;  
   return 0;  
}  

                  


                  Relational Expressions:
A relational expression is an expression that produces a value of type bool, 
which can be either true or false. 
It is also known as a boolean expression.

  
  example:
a>b  
a-b >= x-y  
a+b>80  
  
  
  Let's understand through an example

#include <iostream>  
using namespace std;  
int main()  
{  
    int a=45;    // variable declaration  
    int b=78;    // variable declaration  
    bool y= a>b;   // relational expression  
    cout<<"Value of y is :"<<y;  // displaying the value of y.  
    return 0;  
}  




Let's see another example.

#include <iostream>  
using namespace std;  
int main()  
{  
 int a=4;     // variable declaration  
 int b=5;     // variable declaration  
 int x=3;     // variable declaration  
 int y=6;    // variable declaration  
 cout<<((a+b)>=(x+y));   // relational expression   
 return 0;  
}  


//if you cant understand just amk aktu bolo ami onktuku bujhiye dibo..














               
               
               
               
               
  
  
  
