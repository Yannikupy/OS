#include <iostream>

extern "C" float Square(float A, float B);
extern "C" char* translation(long x);

int main(){
    int command;
    while((std::cout << "Enter command: ") && (std::cin >> command)){
        if(command == 1){
            std::cout << "Enter lengths A and B: ";
            float A, B;
            std::cin >> A >> B;
            std::cout << "Square is " << Square(A, B) << std::endl;
        }
        else if(command == 2){
            long x;
            std::cout << "Enter decimal number: ";
            std::cin >> x;
            char* memory = translation(x);
            std::cout << "Binary number is " << memory << std::endl;
            free(memory);
        }
        else
            std::cout << "Commands can be 1 and 2 ";
    }
}

