class Solution {
public:
    
    bool check(int dx, int dy, vector<vector<int>>& grid){
        return dx>=0 && dx<grid.size() && dy>=0 && dy<grid.size() && grid[dx][dy]==0;
    }
    
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if(grid[grid.size()-1][grid.size()-1]==1 || grid[0][0]==1){
            return -1;
        }
        
        vector<vector <int>> d(grid.size(), vector<int>(grid.size(),999999));
        d[0][0]=1;
        
        queue<pair<int,int>> stk;
        stk.push({0,0});
        pair<int,int> val;
        int dx,dy;
        vector<pair<int,int>> dir{
            {1,1},
            {-1,1},
            {1,-1},
            {-1,-1},
            {1,0},
            {0,1},
            {-1,0},
            {0,-1},
            
        };
        while(!stk.empty()){
            val = stk.front();
            // grid[val.first][val.second] = 1;
            stk.pop();
            
            // cout<<"val -- "<<val.first<<" "<<val.second<<endl;
            // cout<<"dx  dy"<<endl;
            // cout<<"popped -- "<<val.first<<" "<<val.second<<endl;
            for(int i=0;i<dir.size();i++){
                dx = val.first + dir[i].first;
                dy = val.second + dir[i].second;
                // cout<<dx<<" "<<dy<<endl;      
                
                if(check(dx, dy, grid) && d[val.first][val.second] + 1 < d[dx][dy]){
                    // cout<<"prev -- "<<dx<<" "<<dy<<" "<<d[dx][dy]<<endl;
                    
                    d[dx][dy] = d[val.first][val.second]+1;
                    // cout<<"now -- "<<dx<<" "<<dy<<" "<<d[dx][dy]<<endl;
                    stk.push({dx, dy});
                    
                }
            }

        }
        
        
        // for(int i=0;i<grid.size();i++){
        //     for(int j=0;j<grid.size();j++){
        //         cout<<d[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        
        if(d[grid.size()-1][grid.size()-1]==999999){
            return -1;
        }
        return d[grid.size()-1][grid.size()-1];
    }
};