#include "Func.h"
#include <string.h>

#define NUMFUNCS 12

// On my honor:
// // //
// // // - I have not discussed the C language code in my program with
// // // anyone other than my instructor or the teaching assistants
// // // assigned to this course.
// // //
// // // - I have not used C language code obtained from another student,
// // // the Internet, or any other unauthorized source, either modified
// // // or unmodified.
// // //
// // // - If any C language code or documentation used in my program
// // // was obtained from an authorized source, such as a text book or
// // // course notes, that has been clearly noted with a proper citation
// // // in the comments of my program.
// // //
// // // - I have not designed this program in such a way as to defeat or
// // // interfere with the normal operation of the grading code.
// // //
// // // Wyatt Muller
// // // wtmuller22

static Func FuncTable[NUMFUNCS] = {
	{"add", "100000"},
	{"nor", "100111"},
	{"syscall", "001100"},
	{"mul", "000010"},
	{"mult", "011000"},
	{"addu", "100001"},
	{"nop", "000000"},
	{"sll", "000000"},
        {"slt", "101010"},
	{"sra", "000011"},
        {"srav", "000111"},
	{"sub", "100010"}
};

char* GetFunc(const char* const Name) {

        size_t length = strlen(Name);

        for (int i = 0; i < NUMFUNCS; i++){
                Func check = FuncTable[i];
                if (length == strlen(check.Name) && strncmp(Name, check.Name, length) == 0) {
                        return check.Number;
                }
        }

        return NULL;

}

