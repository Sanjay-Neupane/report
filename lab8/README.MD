# Filling (Colouring) the Pictures 
# FLOOD FILL ALGORITHM
##  Algorithm: 
 ### 4-connected approach: 
  1.   We can implement flood fill algorithm by using recursion. 
  2.   First all the pixels should be reassigned to common color. here common color is black.
  3.   Start with a point inside given object, check the following condition: 
       if(getpixel(x,y)==old_col)---old_col is common color 
  4.   If above condition is satisfied, then following 4 steps are followed in filling the object. 
      //Recursive 4-way floodfill. 
  
      putpixel(x,y,fill_col); 
      flood(x+1,y,fill_col,old_col); 
      flood(x-1,y,fill_col,old_col); 
      flood(x,y+1,fill_col,old_col); 
      flood(x,y-1,fill_col,old_col); 

 


 ### 8-connected approach: 
  1.   We can implement flood fill algorithm by using recursion.
  2.   First all the pixels should be reassigned to common color. here common color is black.
  3.   Start with a point inside given object, check the following condition: 
       if(getpixel(x,y)==old_col)---old_col is common color 
  4.   If above condition is satisfied, then following 8 steps are followed in filling the object. 
    
      //Recursive 4-way floodfill. 
  
      putpixel(x,y,fill_col); 
      flood(x+1,y,fill_col,old_col); 
      flood(x-1,y,fill_col,old_col); 
      flood(x,y+1,fill_col,old_col); 
      flood(x,y-1,fill_col,old_col); 
      flood(x + 1, y - 1, fill_col, old_col); 
      flood(x + 1, y + 1, fill_col, old_col); 
      flood(x - 1, y - 1, fill_col, old_col); 
      flood(x - 1, y + 1, fill_col, old_col);
## OUTPUT
[FLOOD FILL VIDEO](output/Floodfill.mp4)
<video src="output/Floodfill.mp4" controls width="600"></video>

### CONCLUSION
IN these lab, we got to learn how the flood fill algorithm works,how it fill the polygon.

