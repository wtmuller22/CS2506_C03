assembler : assemble.o Func.o Opcode.o Register.o Label.o
	gcc -o assemble -std=c11 -Wall -W -ggdb3 assemble.o Func.o Opcode.o Register.o Label.o

assemble.o : assemble.c assemble.h Func.h Opcode.h Register.h
	gcc -c -std=c11 -Wall -W -ggdb3 assemble.c
Func.o : Func.c Func.h
	gcc -c -std=c11 -Wall -W -ggdb3 Func.c
Opcode.o : Opcode.c Opcode.h
	gcc -c -std=c11 -Wall -W -ggdb3 Opcode.c
Register.o : Register.c Register.h
	gcc -c -std=c11 -Wall -W -ggdb3 Register.c
Label.o: Label.c Label.h
	gcc -c -std=c11 -Wall -W -ggdb3 Label.c
clean:
	rm assemble assemble.o Func.o Opcode.o Register.o Label.o
