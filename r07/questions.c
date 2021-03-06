#include<stdio.h>

/*
Q1: How many bytes in a physical memory page in this simulator?
*/
void q1() {
    /* Assign the answer of q1 to the answer variable. */
    unsigned answer = 0;
    printf("%u\n", answer);
}

/*
Q2: After line 14 of mmu.c "assert(translate(0xFFFF0001) == 0x1FFF0001);",
    how many bytes are allocated for R0, R1 and R2 page tables?
    Remember that unsigned long long should be viewed as 4 bytes
    (check the comment in the beginning of mmu_lib.c).
*/
void q2() {
    /* Assign the answers of q2 to the answer variables. */
    unsigned answer_r0 = 0;
    unsigned answer_r1 = 0;
    unsigned answer_r2 = 0;
    printf("%u\n", answer_r0);
    printf("%u\n", answer_r1);
    printf("%u\n", answer_r2);
}

/*
Q3: After line 17 of mmu.c "assert(translate(0x5E300109) == 0x7E300109);",
    how many bytes are allocated for R0, R1 and R2 page tables?
    Remember that unsigned long long should be viewed as 4 bytes
    (check the comment in the beginning of mmu_lib.c).
*/
void q3() {
    /* Assign the answers of q3 to the answer variables. */
    unsigned answer_r0 = 0;
    unsigned answer_r1 = 0;
    unsigned answer_r2 = 0;
    printf("%u\n", answer_r0);
    printf("%u\n", answer_r1);
    printf("%u\n", answer_r2);

}

/*
Q4: According to Q2 and Q3, explain why multi-level page table is more memory
    efficient than one-level page table.

    Answer in a complete sentence in the print statement below, without adding
    additional newlines.
*/
void q4() {
    printf("My answer, which is a complete sentence, goes here.\n");
}

/*
Q5: Enter the exact command used to hack the program buffer_overflow bellow. I
    should be able to take the output of the print statement and paste it
    into the terminal to successfully execute the hack (so leave the newline
    alone).
*/
void q5() {
    printf("./buffer_overflow my_input and answer to universe is 42\n");
}

int main(int argc, char** argv) {
    q1();
    q2();
    q3();
    q4();
    q5();
}
