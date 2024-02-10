# OUTPUTS!
**CASE 1 : (1,1), (8,4)**<br>
1 1<br>
2 1<br>
3 2<br>
4 2<br>
5 3<br>
6 3<br>
7 4<br>
8 4<br>


**CASE 2 : (1,1), (4,8)**<br>
1 1<br>
1 2<br>
2 3<br>
2 4<br>
3 5<br>
3 6<br>
4 7<br>
4 8<br>

# Explanation of the adjustments I have made for the slope of \( m > 1 \)!

We have already proven the equations for the base case and other iterations for **Bresenham's Line Drawing Algorithm** in our classwork, but it was for the case when \( 0 < m < 1 \). So, we made some adjustments to those equations for the case of \( m > 1 \). The adjustments are:

1. We increased the value of \( y_i \) by '1' for each of the iterations.
2. We predicted the next pixel by choosing between the immediate upper pixel or the upper-right pixel.
3. For the base case, we used the decision variable as **\( d_i = 2\Delta x - \Delta y \)**.
4. For all other cases, **\( d_{i+1} = d_i + 2\Delta x - 2\Delta y \)** (if \( d_i > 0 \)) and **\( d_{i+1} = d_i + 2\Delta x \)** (if \( d_i \leq 0 \)).

The entire proof process of these equations is described in this PDF file: [ASSIGNMENT_PROOF](https://github.com/mugdha-samiul/4-1/blob/main/SWE-423%7CComputer_Graphics_and_Image_Processing/assignment_proof.pdf)
