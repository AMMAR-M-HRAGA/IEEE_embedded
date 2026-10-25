#include <stdio.h>

int main(void) {

    
    // printf("===========================================\n");
    // printf("   SESSION 3: Master All C Operators       \n");
    // printf("===========================================\n\n");

    // -------------------------------------------------------------
    // 1. Arithmetic Operators
    // -------------------------------------------------------------

    // printf("--- 1. Arithmetic Operators ---\n");
    // int a = 10, b = 3;
    // printf("a + b = %d\n", a + b);
    // printf("a - b = %d\n", a - b);
    // printf("a * b = %d\n", a * b);
    // printf("a / b = %d (Integer Division)\n", a / b);
    // printf("a %% b = %d (Remainder / Modulus)\n\n", a % b);


//     // -------------------------------------------------------------
//     // 2. Relational & Logical Operators 
//     // -------------------------------------------------------------
//     //  && , || , !

    // printf("--- 2. Relational & Logical Operators ---\n");
    // int sensor1 = 1; // True (1)
    // int sensor2 = 0;    // False (0)

    // printf("sensor1 AND sensor2 (&&) : %d\n", (sensor1 && sensor2));
    // printf("sensor1 OR sensor2  (||) : %d\n", (sensor1 || sensor2));
    // printf("NOT sensor2 (!sensor2)   : %d\n\n", (!sensor2));


//     // -------------------------------------------------------------
//     // 3. ** Bitwise Operators 
//     // -------------------------------------------------------------
//     // ** Registers (Set, Clear, Toggle bits)

    // printf("--- 3. Bitwise Operators (Hardware Level) ---\n");
    // unsigned char reg = 0b00001111;
    
    // printf("Original Reg Value : 0x%X (Binary: 00001111)\n", reg);

    // // Bitwise AND (&) 
    // unsigned char masked = reg & 0b00000011; 
    // printf("After Bitwise AND  : 0x%X\n", masked);

    // // Bitwise OR (|) 
    // unsigned char set_bit = reg | 0b00100000;
    // printf("After Bitwise OR   : 0x%X (Bit 5 is now SET)\n", set_bit);

    // unsigned char inv_bit = ~reg; 
    // printf("After Bitwise inverting : 0x%X (Inverting all bits)\n",inv_bit);

    // // Bitwise Left Shift (<<)
    // unsigned char shift_left = (1 << 3); 
    // printf("Left Shift (1 << 3): 0x%X (Binary: 00001000)\n", shift_left);


    // // Bitwise Right Shift (>>)
    // unsigned char shift_right = (1 << 3); 
    // printf("Left Shift (1 >> 3): 0x%X (Binary: 00001000)\n\n", shift_right);

//     // -------------------------------------------------------------
//     // 4. Assignment Operators 
//     // -------------------------------------------------------------
    // printf("--- 4. Assignment Operators ---\n");
    // int x = 10;
    // printf("Initial x = %d\n", x);
    
    // x += 5; // it means x = x + 5
    // printf("After x += 5 -> x = %d\n", x);
    
    // x *= 2; // it  means x = x * 2
    // printf("After x *= 2 -> x = %d\n", x);

    // printf("===========================================\n");
    return 0;
}