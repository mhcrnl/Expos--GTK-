DEBUG=y
CC=gcc
ifeq ($(DEBUG),y)
    CFLAGS=-W -Wall -ansi -pedantic -g
else
    CFLAGS=-W -Wall -ansi -pedantic
endif
LDFLAGS=`pkg-config --cflags --libs gtk+-3.0`
EXEC=calc
SRC= calc.c
OBJ= $(SRC:%.c=%.o)
all: echo $(EXEC) clean
echo :
ifeq ($(DEBUG),y)
	@echo "Mode debug activé"
	@echo $(SRC)
	@echo $(OBJ)
endif
calc: $(OBJ)
	$(CC) -o ./bin/$@ ./bin/$^ $(LDFLAGS)
%.o: %.c
	$(CC) -o ./bin/$@ -c $< $(LDFLAGS)
.PHONY: clean cleanall
clean:
	rm -rf *.o *~
cleanall: clean
	rm -rf $(EXEC)
