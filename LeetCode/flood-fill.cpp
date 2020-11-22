//https://leetcode.com/problems/flood-fill/

/**
  Input: 
  image = [[1,1,1],[1,1,0],[1,0,1]]
  sr = 1, sc = 1, newColor = 2
  Output: [[2,2,2],[2,2,0],[2,0,1]]
  Explanation: 
  From the center of the image (with position (sr, sc) = (1, 1)), all pixels connected 
  by a path of the same color as the starting pixel are colored with the new color.
  Note the bottom corner is not colored 2, because it is not 4-directionally connected
  to the starting pixel.
*/

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
     if(image[sr][sc] == newColor)  {
            return image;
        }
        
           fill(&image, sr,  sc,  image[sr][sc], newColor);
            return image;
    }
    
     void fill(vector<vector<int>> *image, int sr, int sc, int oldColor,int newColor) {
        if(sr<0 || sc<0 || sr >= image->size() || sc >= (*image)[0].size() || (*image)[sr][sc]  != oldColor) {
            return;
        }
  
         (*image)[sr][sc] = newColor;
         
        fill(image,  sr,  sc-1,  oldColor, newColor);
         fill(image,  sr-1,  sc,  oldColor, newColor);
          fill(image,  sr+1,  sc,  oldColor, newColor);
           fill(image,  sr,  sc+1,  oldColor, newColor);
            
    }
};
