# Compute Before Matrix
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">For a given 2D Matrix&nbsp;<strong style="user-select: auto;">before,</strong>&nbsp;the corresponding cell (x, y) of the <strong style="user-select: auto;">after</strong> matrix is calculated as follows:&nbsp;</span></p>

<div style="background: rgb(238, 238, 238); border: 1px solid rgb(204, 204, 204); padding: 5px 10px; user-select: auto;">
<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">res = 0;
for(i = 0; i &lt;= x; i++){
    for( j = 0; j &lt;= y; j++){              
&nbsp;       res += before(i,j);
    }
}
after(x,y) = res;
</span></pre>
</div>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an&nbsp;<strong style="user-select: auto;">N*M&nbsp;</strong>2D-Matrix&nbsp;<strong style="user-select: auto;">after,</strong>&nbsp;your task is to find the corresponding&nbsp;<strong style="user-select: auto;">before&nbsp;</strong>matrix for the given matrix.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
N = 2, M = 3
after[][] = {{1, 3, 6},
&nbsp;           {3, 7, 11}}
<strong style="user-select: auto;">Output:</strong>
1 2 3
2 2 1
<strong style="user-select: auto;">Explanation:</strong>
The before matrix for the given after matrix
matrix is {{1, 2, 3}, {2, 2, 1}}.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>
N = 1, M = 3
after[][] = {{1, 3, 5}}
<strong style="user-select: auto;">Output:</strong>
1 2 2
<strong style="user-select: auto;">Explanation: </strong>
The before matrix for the given after matrix
is {{1, 2, 2}}.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
Complete the function <strong style="user-select: auto;">c</strong><strong style="user-select: auto;">omputeBeforeMatrix() </strong>which takes the integers <strong style="user-select: auto;">N</strong>, <strong style="user-select: auto;">M,&nbsp;</strong>and the 2D Matrix&nbsp;<strong style="user-select: auto;">after</strong>&nbsp;as the input parameters, and returns the before matrix of the given after matrix.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N*M)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N, M, after[i][j]&nbsp; ≤&nbsp; 10<sup style="user-select: auto;">9</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>