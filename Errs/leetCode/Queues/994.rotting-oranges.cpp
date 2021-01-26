class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        //grid
        int m = grid[0].size();
        int n = grid.size();
        
        queue<pair<int, int>> q; int fresh = 0;
        
        for(int i = 0; i< m; i++) {
            for(int j=0;j<n ; j++) {
                if(grid[i][j] == 2) {
                    q.push({i,j});
                }
                else if(grid[i][j] == 1) {
                    ++fresh;
                }
            }
        }
        
        vector<pair<int, int>> ref;
        
        ref = { {1,0}, {-1,0}, {0,1}, {0,-1} };
        
        int t = 0;
        
        while(!q.empty() && fresh > 0) {
        
            
        for(int k = 0 ; k < q.size(); k++) {
            
           auto [x,y] = q.front();
            q.pop();
            
           for(const auto& i: ref) {
               int newX = i.first + x;
               int newY = i.second + y;
               
               
               if(newX >= 0 && newY >= 0 && newX < n && newY < m && grid[newX][newY] == 1) {
                   grid[newX][newY] = 2;
                  --fresh;
                  q.push({newX, newY});

               }
           }
        }
            
            
            ++t;
        }
        return ((fresh == 0 ) ? t : -1);
        
    }
};


//ERR: 29==ERROR: AddressSanitizer: heap-buffer-overflow on address ...
