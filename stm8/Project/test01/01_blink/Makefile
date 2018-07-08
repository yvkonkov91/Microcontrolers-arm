MCU=stm8
DEVICE=stm8s103f3
FLASHER=stlinkv2
CFLAGS=-V --opt-code-size
CC=sdcc
SIZE=stm8-size
OBJ=main.rel
REL=main.o
TARGET=blink

.PHONY: all clean

%.rel:	%.c
	$(CC) -m$(MCU)  $(CFLAGS)  $<

all:	$(OBJ)
	$(CC) -m$(MCU) -o $(TARGET).ihx $(OBJ) $(LIB) 
	$(SIZE) $(TARGET).ihx

install:
	stm8flash -c $(FLASHER) -p $(DEVICE) -w $(TARGET).ihx
clean:
	@rm -v *.??? *.??
