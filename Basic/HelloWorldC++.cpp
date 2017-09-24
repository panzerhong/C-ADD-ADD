#include<iostream>
/* iostream stands for Input Ouput Stream. It is basicallyt a header file in c++ standard library.
it provides basic input and output services for C++ programs*/

//  # sign indicates that this command is a preprocessor directive.

/* include tells you compiler that a specifice file containing essential code either from an accessible user defined header
 file or from the built-ins.*/
 
// The angle brackets indicate that the file is a built-in header file.

// iostream is the header file's name.

using namespace std; /* namespaces are typically employed for the purpose 
of grouping symols and identifiers around a particular functionality.routines are kept in the standard namespace.
That includes stuff like cout,cin,string ,cector, map etc. Because these tools are used so commonly, it's popular to add
"using namespace std" at the top of your source code so that you won't have to type the std:: prefix constantly*/


/* namespace or name scope in computer science is an abstract container or enviroment 
creted to hold a logical grouping of unique indentifier or symbolds (i.e.names).
An identifier defined in a namespace is associated that namespace*/
int main()
{
	cout<<"Hello World!"<<endl; // cout......endl for printing
	return 0;
}
