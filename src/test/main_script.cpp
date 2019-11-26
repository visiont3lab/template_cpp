#include "sample.h"


int main(int argc, char** argv)
{

 ClassModule MyClassModule;

 // Initialization
 float default_a;
 float default_b;
 
 // Defaul a and b
 MyClassModule.geT_inputs(default_a, default_b);

 float a=3;
 float b =4;

 // Set a and b input
 MyClassModule.seT_inputs(a, b);

 float res = 0; 	

 // The function Run will do the Sum (a+b)
 MyClassModule.Run(res);
 
 std::cout << "Default a: " << default_a << std::endl;
 std::cout << "Default b: " << default_b << std::endl;
 std::cout << "Set Input a: " << a << std::endl;
 std::cout << "Set Input  b: " << b << std::endl;
 std::cout << "Sum Result (a+b): " << res << std::endl;


 return 0;

}

