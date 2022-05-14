class Solution {
public:
    int neighbors(vector<vector<int>>& board, int r, int c, int row, int col) {
        int count =0;
        for (int i=r-1; i<r+2; ++i) {
            for (int j=c-1; j<c+2; ++j) {
                if ((i==r && j==c) || i<0 || j<0 || i==row || j==col)
                    continue;
                if (board[i][j]==1 || board[i][j]==3)  
                    count++;
            }
        }
        return count;
    }
    
    
    void gameOfLife(vector<vector<int>>& board) {
        
        int lives;
        for (int i=0; i<board.size(); ++i) {
            for (int j=0; j<board[i].size(); ++j) {
                lives = neighbors(board, i, j, board.size(), board[i].size());
            
                if (board[i][j]) {
                    if (lives==2 || lives==3)
                        board[i][j]=3;
                }
                else {
                    if (lives==3)
                        board[i][j]=2;
                }
            }
        }
    
        for (int i=0; i<board.size(); ++i) {
            for (int j=0; j<board[i].size(); ++j) {
                if (board[i][j]==2 || board[i][j]==3)
                    board[i][j]=1;
                else {
                    if (board[i][j]==1)
                        board[i][j]=0;
                }    
            }
        }
    }
};
