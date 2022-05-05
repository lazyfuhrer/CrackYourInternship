bool exists (vector<int> &v , int &val) {
    for (int it: v) {
        if (it==val)
            return true;
    }        
    return false;        
}

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> rows, cols;
    
        for (int i=0; i<matrix.size(); ++i) {
            for (int j=0; j<matrix[i].size(); ++j) {
                if (matrix[i][j]==0) {
                    rows.push_back(i);
                    cols.push_back(j);
                }    
            }
        }
    
        for (int i=0; i<matrix.size(); ++i) {
            for (int j=0; j<matrix[i].size(); ++j) {
                if (  exists(rows, i) || exists(cols, j) )
                    matrix[i][j]=0;
            }
        }
    }
};
