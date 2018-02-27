



class Piece {
protected:
    int x, y;
    bool white;
    char figure;
public:
    string setColour();
    string getName();
    void move (int x, int y);
    bool valid (int x, int y);
}
