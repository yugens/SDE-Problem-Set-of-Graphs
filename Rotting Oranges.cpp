//T.C. - o(n*m)*4  and S.C. - o(n*m)
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        if(grid.empty()) return 0;
        int row = grid.size() , col = grid[0].size();
        int mins = 0 , cnt = 0, total = 0;
        queue<pair<int , int>> rotten;
        for( int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]!=0) total++;
                if(grid[i][j] == 2) rotten.push({i,j});
            }
        }
        int dirx[4] = {0,0,1,-1};
        int diry[4] = {1,-1,0,0};
        
        while(!rotten.empty()){
            int rott = rotten.size();
            cnt += rott;
            while(rott--){
                int x = rotten.front().first , y = rotten.front().second;
                rotten.pop();
                for( int i=0 ; i<4; i++){
                    int newx = x + dirx[i] , newy = y + diry[i];
                    if( newx<0 or newy<0 or newx>=row or newy>=col or grid[newx][newy]!=1) continue;
                    grid[newx][newy] = 2;
                    rotten.push({newx,newy});
                }
            }
            if(!rotten.empty()) mins++;
        }
        if(total == cnt) return mins;
        else return -1;
    }
};
