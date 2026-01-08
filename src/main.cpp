#include <iostream>

// means include input output stream(stream is a sequence of data)
/*as I did more research I understood that #include  is 
known as a preprocessor directive that tells the compiler to 
include the file after it before compilation. Additionally iostream is a library that
exists in the standard c++ library and stands for input output stream. I think the input 
output is clear but the stream means data flow. it allows data flow between devices. 
know that anything followed by # in c++ is a preprocessor directive*/

int main()

/* the int is used to indicate that the function returnss a an integer value which in our case is 0
 main is an identifier for a function since the brackets after an identfier tell us that we are either
 calling or declaring a function*/

{
    std::cout<<"hello world"
    
    /*std is a name space found in the iostream library that includes
    the cout object. cout stands for character output it helps print out characters. "<<" is known 
    stream insertion operator. it sends the data on its right to the object on its left. or simply
    tells cout to output hello world*/

    ;return 0;
    
    /*return , returns a value for who ever is calling it in the case of the main 
    function the caller is the os .0 indicates that we finished the program 
    successfully. It does not guarantee the correctness of your program.*/
} 