// Pointer moves to the next int position (as if it was an array)
p++; 
// Pointer moves to the next int position (as if it was an array)   
++p;   

/* All the following three cases are same they increment the value 
 * of variable that the pointer p points to.
 */
++*p;
++(*p);
++*(p)