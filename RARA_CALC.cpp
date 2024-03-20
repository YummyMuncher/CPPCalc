// RARA_CALC.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//This is your import for std::cin and cout 
#include <iostream>

/* Also quick build lesson, files are built which means they are compiled and then linked. 
*       Compilation is when the cpp files turn into .obj files which get linked
*       Linking just shoves the massive amount of shit together across files and all the system things, then it pops out your .exe!!! */

//------------------------------------------------------------------------------------------------------------------------------

/* Weird thing here, in order to use other files, you need to declare so that you can compile the file. 
*   Then the linker can be like "wait theres no definition, lemme go find it" */

float Addition(float uno, float dos);
float Subtraction(float uno, float dos);
float Multiplication(float uno, float dos);
float Division(float uno, float dos);

//------------------------------------------------------------------------------------------------------------------------------

void mainLoop() {
    while (true) {
        //std is saying im using iostreams function for cout
        // '<<' says "mfer (String) its in here" and then '<< endl' just says the ln of print ln
        std::cout << "Hello, what would you like to do!!!\n\t1. Add \n\t2. Subtract \n\t3. Multiply \n\t4. Divide\n\t5. End program"<< std::endl;

        //shorts are ints but small because i dont need big
        short choice;
        //floats are doubles but shorter because convenient
        float uno;
        float dos;

        //std::cin is pretty straight forward id think
        std::cin >> choice;
        std::cout << "Alrighty, give me first operand" << std::endl;
        std::cin >> uno;
        std::cout << "give me numero dos" << std::endl;
        std::cin >> dos;
        std::cout << "Swag here you go:   ";

        //you know switches
        switch (choice) {
        case 1:
            std::cout << Addition(uno, dos) << std::endl;
            break;
        case 2:
            std::cout << Subtraction(uno, dos) << std::endl;
            break;
        case 3:
            std::cout << Multiplication(uno, dos) << std::endl;
            break;
        case 4:
            std::cout << Division(uno, dos) << std::endl;
            break;
        case 5:
            std::cout << "bue bue" << std::endl;
            break;
        }

        //homie you understand basics now, watch youtube the cherno cpp series for the linker and compiler though, its so interesting (and everything else too)
        if (choice == 5)
            break;
    }
}

//------------------------------------------------------------------------------------------------------------------------------

//Must be last function, but I dont know how true that is tbh
//returns int, 1 for working and 0 for did
int main()
{
    mainLoop();
}


//this is made by visual studio down here
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
