
CC = g++
CFLAGS =  -Wall -c -std=c++11
LIBS = -lgtest -lpthread
TARGET = main

$(TARGET): $(TARGET).o Board.o Piece.o Cell.o Rook.o Knight.o Bishop.o Queen.o King.o Pawn.o Chess.o Game.o Record.o
	$(CC) -Wall $(TARGET).o Board.o Piece.o Cell.o Rook.o Knight.o Bishop.o Queen.o King.o Pawn.o Chess.o Game.o Record.o  -o $(TARGET) $(LIBS)

$(TARGET).o: $(TARGET).cpp
	$(CC) $(CFLAGS) $(TARGET).cpp

Piece.o: Piece.cpp Piece.h
	$(CC) $(CFLAGS) Piece.cpp

Cell.o: Cell.cpp Cell.h
	$(CC) $(CFLAGS) Cell.cpp

Bishop.o: Bishop.cpp Bishop.h
	$(CC) $(CFLAGS) Bishop.cpp

Rook.o: Rook.cpp Rook.h
	$(CC) $(CFLAGS) Rook.cpp

Knight.o: Knight.cpp Knight.h
	$(CC) $(CFLAGS) Knight.cpp

Queen.o: Queen.cpp Queen.h
	$(CC) $(CFLAGS) Queen.cpp

King.o: King.cpp King.h
	$(CC) $(CFLAGS) King.cpp

Pawn.o: Pawn.cpp Pawn.h
	$(CC) $(CFLAGS) Pawn.cpp

Board.o: Board.cpp Board.h
	$(CC) $(CFLAGS) Board.cpp

Game.o: Game.cpp Game.h
	$(CC) $(CFLAGS) Game.cpp

Chess.o: Chess.cpp Chess.h
	$(CC) $(CFLAGS) Chess.cpp

Record.o: Record.cpp Record.h
	$(CC) $(CFLAGS) Record.cpp

# .PHONY evita que make trate clean como un target
.PHONY: clean
# Borra los ficheros resultado de manera recursiva y sin confirmación
clean:
	rm -rf *.o $(TARGET)
