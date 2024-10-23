#define _CRT_SECURE_NO_WARNINGS /*if you want to use scanf*/
#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
int x; // fillers
#endif


#include<iostream> // for C++ code
#include <string.h> // for C code
#include <stdio.h> // for C code
int main()
{

 #pragma region C++ code part 3
const int size = 30;
const int noOfSentences = 5;
std::string sentences[noOfSentences];
std::string tallest;
std::string shortest;

int numbers[size];
int counter = 0;

#pragma region Sum
int sum = 0;
#pragma endregion

#pragma region Average
int average = 0;
#pragma endregion

int choice;
std::cout << "Choose whether you want sum and average by pressing 1 or find the tallest and the shortest by pressing 2\n";
std::cin >> choice;

switch (choice) {
    case 1:
        std::cout << "Enter numbers \nput less than -998 to stop\n";
        for (int i = 0; i < size; i++) {
            std::cin >> numbers[i];
            if (numbers[i] < -998) {
                break;
            } else {
                sum += numbers[i];
                counter++;
            }
        }
        if (counter > 0) {
            average = sum / counter;
        }
        std::cout << "Sum = " << sum << " Average = " << average << " Counter = " << counter;
        break;

    case 2:
        std::cout << "Enter your sentences\n";
     
        for (int i = 0; i < noOfSentences; i++) {

            std::cin >> sentences[i];

        }
       
        tallest = sentences[0];
        shortest = sentences[0];
        
        for (int i = 1; i < noOfSentences; i++) {
            if (sentences[i].length() > tallest.length()) 
            {
                tallest = sentences[i];
            }
            if (sentences[i].length() < shortest.length()) 
            {
                shortest = sentences[i];
            }
        }
        std::cout << "The tallest string is " << tallest << "\n";
        std::cout << "The shortest string is " << shortest << "\n";
        break;

    default:
        break;
}

#pragma endregion

   
  

}


