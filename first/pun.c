#include <stdio.h> // called a directive, includes needed libary

int main(void){
    printf("To C or not to C; that is the question.\n");
    return 0;
}

// the progam is first preprocessed. The preprocessor adds some extra code to understand or code
// then the processed code is passed to the compiler, while turns our code into a machine instruction (object code)
// then a linker, joins the compiled code with additional code needed to yield a complete executable program
// example is teh printf functions and any other libary functions
// in C each statement ends in a semicolon, on the other hand derivatives don't
