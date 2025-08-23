
class Solution {
public:
    int minimumSum(vector<vector<int>>& grid) {
        int R = grid.size(), C = grid[0].size();
        vector<pair<int,int>> ones;
        for(int r=0;r<R;r++)
            for(int c=0;c<C;c++)
                if(grid[r][c]==1) ones.push_back({r,c});
        
        int ans = INT_MAX;
        
        // Helper to compute minimal bounding box area of ones inside a rectangle
        auto area = [&](int r1,int r2,int c1,int c2){
            int minr=R, maxr=-1, minc=C, maxc=-1;
            for(auto [r,c]: ones){
                if(r1<=r && r<=r2 && c1<=c && c<=c2){
                    minr = min(minr,r);
                    maxr = max(maxr,r);
                    minc = min(minc,c);
                    maxc = max(maxc,c);
                }
            }
            if(maxr==-1) return 0; // no ones inside
            return (maxr-minr+1)*(maxc-minc+1);
        };
        
        // Case 1: Three horizontal stripes
        for(int r1=0;r1<R-2;r1++){
            for(int r2=r1+1;r2<R-1;r2++){
                int a1 = area(0,r1,0,C-1);
                int a2 = area(r1+1,r2,0,C-1);
                int a3 = area(r2+1,R-1,0,C-1);
                if(a1 && a2 && a3) ans = min(ans,a1+a2+a3);
            }
        }
        
        // Case 2: Three vertical stripes
        for(int c1=0;c1<C-2;c1++){
            for(int c2=c1+1;c2<C-1;c2++){
                int a1 = area(0,R-1,0,c1);
                int a2 = area(0,R-1,c1+1,c2);
                int a3 = area(0,R-1,c2+1,C-1);
                if(a1 && a2 && a3) ans = min(ans,a1+a2+a3);
            }
        }
        
        // Case 3: Vertical split + horizontal split on one side
        for(int c=0;c<C-1;c++){
            // left side split horizontally
            for(int r=0;r<R-1;r++){
                int a1 = area(0,r,0,c);
                int a2 = area(r+1,R-1,0,c);
                int a3 = area(0,R-1,c+1,C-1);
                if(a1 && a2 && a3) ans = min(ans,a1+a2+a3);
            }
            // right side split horizontally
            for(int r=0;r<R-1;r++){
                int a1 = area(0,r,c+1,C-1);
                int a2 = area(r+1,R-1,c+1,C-1);
                int a3 = area(0,R-1,0,c);
                if(a1 && a2 && a3) ans = min(ans,a1+a2+a3);
            }
        }
        
        // Case 4: Horizontal split + vertical split on one side
        for(int r=0;r<R-1;r++){
            // top side split vertically
            for(int c=0;c<C-1;c++){
                int a1 = area(0,r,0,c);
                int a2 = area(0,r,c+1,C-1);
                int a3 = area(r+1,R-1,0,C-1);
                if(a1 && a2 && a3) ans = min(ans,a1+a2+a3);
            }
            // bottom side split vertically
            for(int c=0;c<C-1;c++){
                int a1 = area(r+1,R-1,0,c);
                int a2 = area(r+1,R-1,c+1,C-1);
                int a3 = area(0,r,0,C-1);
                if(a1 && a2 && a3) ans = min(ans,a1+a2+a3);
            }
        }
        
        return ans;
    }
};
