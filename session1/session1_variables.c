#include <stdio.h>





int main(void) {
    // printf("===========================================\n");
    // printf("   SESSION 1: Variables & Data Types in C  \n");
    // printf("===========================================\n\n");

    // // 1. Basic Data Types 
    // char mode = 'a';             // 1 Byte - ASCII ('a' = 97)
    // int sensor_raw = 1023;       // 4 Bytes 
    // float voltage = 3.3;         // 4 Bytes 
    // double precise_val = 3.14159; // 8 Bytes 

    // printf("--- 1. Basic Variables ---\n");
    // printf("System Mode : %c\n", mode);
    // printf("Sensor Raw  : %d\n", sensor_raw);
    // printf("Voltage     : %f V\n", voltage);
    // printf("Precise Val : %lf\n\n", precise_val);


    // // 2. Data Types Sizes in Memory 
    // // important part Embedded !
    // printf("--- 2. Sizes in Memory (Bytes) ---\n");
    // printf("Size of char   : %lu Bytes\n", sizeof(char));
    // printf("Size of int    : %lu Bytes\n", sizeof(int));
    // printf("Size of float  : %lu Bytes\n", sizeof(float));
    // printf("Size of double : %lu Bytes\n\n", sizeof(double));


    // // 3. Signed vs Unsigned 
    // //  ** unsigned in Registers .
    // unsigned char port_val = 255;  //  0 to 255 (one Byte )
    // signed char temp_celsius = -10; // -128 to 127

    // printf("--- 3. Signed vs Unsigned ---\n");
    // printf("PORT Value (Unsigned) : %u\n", port_val);
    // printf("PORT Value in HEX     : %X\n", port_val); 
    // printf("Temperature (Signed)  : %d C\n\n", temp_celsius);

    // printf("===========================================\n");
    return 0;
}