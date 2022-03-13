# Special Matrix
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You are given a matrix having <strong style="user-select: auto;">n</strong> rows and <strong style="user-select: auto;">m</strong> columns. The special property of this matrix is that some of the cells of this matrix are <strong style="user-select: auto;">blocked&nbsp;</strong>i.e. they cannot be reached. Now you have to start from the cell <strong style="user-select: auto;">(1,1)</strong> and reach the end <strong style="user-select: auto;">(n,m)</strong> provided during the journey you can move horizontally <strong style="user-select: auto;">right</strong> from the current cell or vertically <strong style="user-select: auto;">down</strong> from the current cell. Can you answer the <strong style="user-select: auto;">number of ways</strong> you can traverse the matrix obeying the above constraints starting from <strong style="user-select: auto;">(1,1)</strong> and ending at <strong style="user-select: auto;">(n,m)</strong>.</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>n = 3, m = 3, k = 2,
blocked_cells = {{1,2},{3,2}}.
<strong style="user-select: auto;">Output: </strong>1
<strong style="user-select: auto;">Explanation: </strong>There is only one path from
(1,1) to(3,3) which is (1,1)-&gt;(2,1)-&gt;(2,2)-&gt;
(2,3)-&gt;(3,3).</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>n = 5, m = 5, k = 1,
blocked_cells = {{5,5}}
<strong style="user-select: auto;">Output: </strong>0
<strong style="user-select: auto;">Explanation: </strong>There is no path to reach at 
(5,5) beacuse (5,5) is blocked.</span>
</pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read or print anything, Your task is to complete the function&nbsp;<strong style="user-select: auto;">FindWays()&nbsp;</strong>which takes n, m and blocked_cells as input parameter and returns total number of ways to reach at (n, m) modulo 10<sup style="user-select: auto;">9</sup>&nbsp;+ 7.</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(n*m)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Space Complexity:&nbsp;</strong>O(n*m)</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= n, m &lt;= 500<br style="user-select: auto;">
1 &lt;= k &lt;= n*m&nbsp;</span></p>
 <p style="user-select: auto;"></p>
            </div>