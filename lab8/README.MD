# Filling (Colouring) the Pictures 

# BOUNDARY FILL ALGORITHM

## Algorithm:
      The following steps illustrate the idea of the recursive boundary-fill algorithm: 
      1. Start from an interior point. 
      2. If the current pixel is not already filled and if it is not an edge point, then set the pixel with the fill color, and store its neighboring pixels (4 or 8-connected).store only neighboring pixel that is not already filled and is not an edge point. 
      3. Select the next pixel from the stack, and continue with step 2. 

## OUTPUT
[BOUNDARY FILL VIDEO](output/Boundaryfill.mp4)
<video src="output/Boundaryfill.mp4" controls width="600"></video>
[![Boundary Fill Video](Boundaryfill.png)](Boundaryfill.mp4)


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
[![Flood Fill Video](floodfill.png)](Floodfill.mp4)


### CONCLUSION
In these lab, we got to learn how the Boundary fill and flood fill algorithm works,how it fill the polygon.




