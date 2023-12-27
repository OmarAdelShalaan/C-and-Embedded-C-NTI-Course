#@ Omar Adel Shalaan
#@ Employee Record System Project

Project_Name=Employee_Record_System

CC=gcc
INCS=-I .
SRC= $(wildcard *.c) 
OBJ= $(SRC:.c=.o)	
AS= $(wildcard *.s)
ASOBJ= $(AS:.s=.o)
DEBUG=-g 


all: $(Project_Name).exe
	@echo "(===========Done Build===========)"
	@echo "by: Omar Adel Shalaan"

%.o: %.c
	$(CC) -c $(DEBUG)   $(INCS)  $< -o $@	
%.o: %.s
	$(CC) -c $(DEBUG)   $(INCS)  $< -o $@		

$(Project_Name).exe: $(OBJ) $(ASOBJ)
	$(CC)   $(OBJ) $(ASOBJ) -o $@ 
	@echo "(===========Done exe file===========)"
	
clean_all:
	@echo "(===========Clean .o && .exe===========)"
	rm -f $(wildcard *.o) $(wildcard *.exe) 
	@echo "(===========Done Clean===========)"
		
clean:
	@echo "(===========Clean .o===========)"
	rm -f $(wildcard *.o) 
	@echo "(===========Done Clean===========)"
	

	
	
	
	
	