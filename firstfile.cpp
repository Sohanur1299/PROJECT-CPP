#include <iostream>
#include <string> // add kora lagbe string use korar shomoy
using namespace std;

void function_1(){
    std:: cout << "this is first function" << "\n";
}
// we shoould follow 
// 1) Function Declaration
// 2) The main function
// 3) Function Definition( org code goes here)


// Function Declaration ( promise, main thing here)
// COMPILER SEES THIS FIRST.
void function_with_param(string fname); 

void default_param_funct(string country = "Bd");

void multiple_param_funct(string fname, int age);

int funct_with_return(int x, int y);

// THE MAIN FUNCTION
int main(){
    // std::cout << "This is shit" << "\n"; ( Breakline)

    // std::cout << "This is shit" << "\n\n"; ( 1 line gap )

    // std::cout << "This is shit" << endl;
    // Breakline but requires "using namespace std;"

    // std::cout << "what is this" << "\t"; ( horizontal tab dey - side by side ekta shundor gap diye jay)
    // function_1();

    // //  code with along with functions
    // function_with_param("Sohan");
    // function_with_param("Nihal");
    // function_with_param("Samin");
    // function_with_param("Ratul");


    // default_param_funct("USA");
    // default_param_funct();
    // default_param_funct("Germany");


    // multiple_param_funct("Sohan", 25);
    // multiple_param_funct("Rafi", 26);
    // multiple_param_funct("Zarif", 24);

    // std::cout << funct_with_return(10, 5) << "\n";
    int holder = funct_with_return(100, 50);
    std::cout << holder << "\n";

    std::cout << "I am learning cpp";
    return 0;
}


// Funtion definations
void function_with_param(string fname){
    std::cout << fname << "\n";
    //  DEFAULT PARAMETER value o pathano jabe. Just 
    //  like python. set korlam, diff kisu dile oita select hobe

}

//  as I have declared fully before the main func, no 
// need to add here.
void default_param_funct(string country){
    std::cout << country << "\n";
}

void multiple_param_funct(string fname, int age){
    std::cout << "\n\n"; // (a gap given here)
    std::cout << fname << "\n" << age << "\n";
}

//  function with return value 
int funct_with_return(int x, int y){
    int z = x + y;
    return z;
}
