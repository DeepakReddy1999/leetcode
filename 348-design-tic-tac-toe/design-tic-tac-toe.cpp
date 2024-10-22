class TicTacToe {
public:
vector<int> rows;
vector<int> cols;
int dig,antidig;
int size;
    TicTacToe(int n) {
        rows.resize(n,0);
        cols.resize(n,0);
        dig=0;
        antidig=0;
        size=n;
    }
    
    int move(int row, int col, int player) {
        int add=player==1?1:-1;

        rows[row]+=add;
        cols[col]+=add;

        if(row==col){
            dig+=add;
        }
        if(row+col==size-1){
            antidig+=add;
        }

        if(abs(rows[row])==size || abs(cols[col])==size || abs(dig)==size || abs(antidig)==size){
            return player;
        }
        return 0;


    }
};

/**
 * Your TicTacToe object will be instantiated and called as such:
 * TicTacToe* obj = new TicTacToe(n);
 * int param_1 = obj->move(row,col,player);
 */