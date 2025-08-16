class Solution {
public:
    int maximum69Number (int num) {
        int copy = num;
        vector<int>vec;
        while(copy!=0){
            vec.push_back(copy%10);
            copy = copy/10;
        }
        reverse(vec.begin(), vec.end());

        for(int i = 0; i<vec.size(); i++){
            if(vec[i]== 6){
                vec[i] = 9;
                break;
                }
            
        }

        for(int i = 0; i<vec.size(); i++){
            copy = copy*10 + vec[i];
        }

        return copy;


    }
};