# SimpleCalculatorUsingC
Simple calculator using C. Additional features include a while loop where the user can manually end using the calculator. Additional features will be added soon.

Prerequisites: Some distribution system such as WSL or Linux, MinGW, and some kind of compiler. VS Code was used to compile this program.

Note that in WSL, running gcc SimpleCalculator.c alone will trigger this error message: "undefined reference to 'pow', undefined reference to 'sqrt', collect2: error: ld returned 1 exit status". This is simply because the program has not been linked to the math library. This is fixed simply by adding -lm to the compile statement to get gcc SimpleCalculator.c -lm.
