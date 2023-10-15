#include <stdio.h>

// Variable declaration
short int fish = 10;
long int dish;
float pi = 3.124584;
double piextra = 78.34324232234;
char name = 'a';

const int milkPrice = 851; 

void add_number();

unsigned int bookPrice = -545;

int meat = 50;
int rice = 40;

int main()
{
    // %d %f %c

    //unsigned int total = meat - rice;
    //printf("The price of milk is %d\n", milkPrice);
    //printf("The price of milk is %d\n", milkPrice);
    //printf("The price of total is %u\n", total);
    //printf("The size of float is %d\n", sizeof(float));
    //printf("The new value of the double is %d\n", sizeof(double));
    //fish = 85;
    //printf("The new value of the number1 is %d\n", number1);

    add_number();

    return 0;
}

// Feature A
void add_number(){

const unsigned int number1 = 50;
const unsigned int number2 = 524;
unsigned int total = number1 + number2 + fish;
printf("Total number is %u\n", total);

}