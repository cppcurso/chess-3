
CC = g++
CFLAGS = -Wall -c -std=c++11 -lgtest lpthread
TARGET = main

$(TARGET): $(TARGET).o Piece.o Cell.o Rook.o Knight.o Bishop.o Queen.o King.o Pawn.o Board.o
	$(CC) -Wall $(TARGET).o Piece.o Cell.o Rook.o Knight.o Bishop.o Queen.o King.o Pawn.o Board.o -o $(TARGET)

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

# .PHONY evita que make trate clean como un target
.PHONY: clean
# Borra los ficheros resultado de manera recursiva y sin confirmación
clean:
	rm -rf *.o $(TARGET)
