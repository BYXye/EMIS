CC=g++
FLAG=-Wall -Werror
OBJ=department.o emis.o employee.o main.o manager.o manager_ctrl_impl.o manager_mode_impl.o manager_view_impl.o service_ctrl_impl.o service_mode_impl.o service_view_impl.o tools.o
BIN=EMIS

all:$(OBJ)
	$(CC) $(OBJ) -o $(BIN)

%.o:%.cpp
	$(CC) $(STD) $(FLAG) -c $< -o $@

clean:
	rm -rf $(OBJ) $(BIN)
	rm -rf *.h.gch *~

