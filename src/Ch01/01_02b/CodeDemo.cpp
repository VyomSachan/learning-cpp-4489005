// Learning C++ 
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

// C++ is case-sensitive so keep an eye-out

// The libraries are included in the first line. This is a pre-processor directive.
// The library being used <iostream> contains objects and functions to print text to the screen, and recieve text from the keyboard.

#include <iostream>

// Pre-processor directives don't end with a semicolon.

// The main function may receive either nothing, or a set of strings that come from the command line.
// For hello world, use an empty list of parameters, enclosed by parentheses.

// The body of a function is a block of code, and blocks are delimited by curly brackets, symbolizing the beginning and end of the block
// Curly bracket input (To prevent errors) - Open blocks at the end of the control statement, and close them in a dedicated line indented at the same level.

// C++ code very soon becomes virtually unreadable by a human if not indented. C++ compilers do not require indented code but indent it so that can be readable in the future.

int main(){
    // to print output: object from the IO stream file - std
    // membership is represented by the scope resolution operator, double colon
    // cout - character output
    // The above represents the output window

    std::cout << "Hi There!" << std::endl;
    // Usage of left-bound insertion operator to send message further. To the right of this operator, enter whatever to send to the object at the left.
    // endl - end line

    // finish almost every line of code with a semicolon.

    // It's a little difficult to tell where the output ends and the debugger's exit message begins. So right before returning, print out two end line characters to separate output from the debugger's exit message.
    std::cout << std::endl << std::endl;

    // return 0 - zero is traditionally used to mean that no errors came up in the program.
    return(0);
}