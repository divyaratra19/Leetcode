class Solution {
public:
    int removeElement(vector<int>& vec, int val) {
        int j=0, count=0; 
        for( int i=0; i<vec.size(); i++)
        {
            if(vec[i]==val)
                ++count;
            else{
                vec[j]=vec[i];
                j++;
            }
            
        }
        return vec.size()-count;
    }
};
