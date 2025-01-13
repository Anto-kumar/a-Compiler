"# a++ Language Compiler" 

This project demonstrates the use of Lex and Bison to build a simple compiler. The compiler parses and processes a basic scripting language with custom syntax and constructs, providing support for:

Data types (Numbers, Strings)

Control structures (if-else, while, for loops)

Mathematical and logical operations

Input/output commands

Mathematical functions and trigonometric operations


Compilation Instructions

To create the compiler executable:

Run the following commands in your terminal:

bison -d app.y
flex app.l
gcc app.tab.c lex.yy.c -o app

