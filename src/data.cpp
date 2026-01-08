#include <iostream>
/*today I learned about data, values and literals*/
int main(){

    /*data is an infromation that can be manipulated(moved,processed and stored). data is with what
our program messes with to give us results.our program can also be considered data based on
the definition but lets assume our program as the source code and the values being manipulated
as datas. A value is*/
 
std::cout<<'h'<<std::endl;

    //'h' is data and it is a character literal
    //std::cout<<'hse'<<std::endl; tried it but causes a diagnostic error.And that is because the only things that should be put under single qoutes are signle characters
    std::cout<<"hello"<<std::endl;

    //"hello" is also data and it is a string literal

    std::cout<<2<<std::endl;
    //2 is also an integer literal
    return 0;
/*our program can aquire data through input devices liek keyboards, direct insertion of data
to the source code, from networks. For now we are directly inserting data values to our program.
data values that are directly inserted to our program are known as literals.*/

//And also the std::endl is used to insert a new line in the output console.
}