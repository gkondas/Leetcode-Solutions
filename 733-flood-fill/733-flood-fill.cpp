class Solution {
public:
    void fill(vector<vector<int>>& image, int r, int c, int color, int newColor){
        
        if(r < 0 || c < 0 || r >= image.size() ||
           c >= image[0].size() || image[r][c] != color) return;
        
        image[r][c] = newColor;
        
        fill(image,r-1,c,color,newColor);
        fill(image,r+1,c,color,newColor);     
        fill(image,r,c-1,color,newColor);   
        fill(image,r,c+1,color,newColor);   


    }
    
    
    
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int        color) {
        
        if(image[sr][sc] == color) return image;
        
        fill(image,sr,sc,image[sr][sc],color);
        
        
        return image;
    }
    
    
    
    
};