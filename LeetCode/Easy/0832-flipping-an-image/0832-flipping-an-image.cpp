class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(vector<int>& img : image){
            reverse(img.begin(), img.end());
            for(int &i : img){
                if(i == 0) i = 1;
                else i = 0;
            }
        }
        return image;
    }
};