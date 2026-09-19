class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row=matrix.size();
    int columns=matrix[0].size();
    
    int low=0;
    int high= (row*columns)-1;

    while(low<=high){
        int mid= (low+high)/2;

        int colindex=mid%columns;
        int rowindex=mid/columns;
        
        if (matrix[rowindex][colindex]==target){
            return true;
        }
        else if(matrix[rowindex][colindex]<target){
            low= mid+1;
        }
        else 
            high=mid-1;
        
    }
    return false;
}
        
    
};