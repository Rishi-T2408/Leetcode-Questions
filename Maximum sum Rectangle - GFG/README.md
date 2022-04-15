# Maximum sum Rectangle
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 20px; user-select: auto;">Given a 2D matrix M of dimensions RxC. Find the maximum sum submatrix in it.</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 20px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 20px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
R=4
C=5
M=[[1,2,-1,-4,-20],
[-8,-3,4,2,1],
[3,8,10,1,3],
[-4,-1,1,7,-6]]
<strong style="user-select: auto;">Output:</strong>
29
<strong style="user-select: auto;">Explanation:</strong>
The matrix is as follows and the
blue rectangle denotes the maximum sum
rectangle.</span>
<img alt="Thumbnail" src="https://a.disquscdn.com/get?url=http%3A%2F%2Fwww.geeksforgeeks.org%2Fwp-content%2Fuploads%2Frectangle-11.png&amp;key=6UHjdHyGWQGo6f_kdpoBIQ&amp;w=320&amp;h=247" class="img-responsive" style="user-select: auto;">
</pre>

<p style="user-select: auto;"><span style="font-size: 20px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 20px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
R=2
C=2
M=[[-1,-2],[-3,-4]]
<strong style="user-select: auto;">Output:</strong>
-1
<strong style="user-select: auto;">Explanation:</strong>
Taking only the first cell is the 
optimal choice.</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 20px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">maximumSumRectangle()</strong> which takes the number R, C, and the 2D matrix M as input parameters and returns the maximum sum submatrix.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 20px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>O(R*R*C)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxillary Space:</strong>O(R*C)</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 20px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1&lt;=R,C&lt;=500<br style="user-select: auto;">
-1000&lt;=M[i][j]&lt;=1000</span></p>
 <p style="user-select: auto;"></p>
            </div>