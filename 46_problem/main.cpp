/*
    046 Declare and initialize variables

    Your task is to declare three double variables to model the dimensions of a box. 
    You'll have a variable named width of type double and it'll be initialized with a value of 10.0, 
    a length variable of type double initialized with a value of 20.1 and 
    a height variable of type double initialized with a value of 4.5.
*/

#include <iostream>

int main(int argc, char **argv)
{
    double width {10.0};
    double length {20.1};
    double height {4.5};

    double volume {width * length * height};

    std::cout << "Volume of the box with dimensions " << width << "x"
        << length << "x" << height << " will be " << volume << "." << std::endl;
    
    return 0;
}