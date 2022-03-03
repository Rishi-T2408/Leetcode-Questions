# Matrix Operations
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a binary matrix&nbsp;of dimensions&nbsp;<strong style="user-select: auto;">N * M.&nbsp;</strong>One can perform the given operation in&nbsp;the matrix.</span></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">If the value of&nbsp;<strong style="user-select: auto;">matrix[i][j]</strong>&nbsp;is&nbsp;<strong style="user-select: auto;">0</strong>, then traverse in the same direction and check the next value.</span></li>
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">If the value of&nbsp;<strong style="user-select: auto;">matrix[i][j]</strong>&nbsp;is&nbsp;<strong style="user-select: auto;">1</strong>, then update&nbsp;<strong style="user-select: auto;">matrix[i][j]</strong>&nbsp;to&nbsp;<strong style="user-select: auto;">0</strong>&nbsp;and change the current direction from&nbsp;<strong style="user-select: auto;">up</strong>,&nbsp;<strong style="user-select: auto;">right</strong>,&nbsp;<strong style="user-select: auto;">down</strong>, or&nbsp;<strong style="user-select: auto;">left</strong>&nbsp;to the directions&nbsp;<strong style="user-select: auto;">right</strong>,&nbsp;<strong style="user-select: auto;">down</strong>,&nbsp;<strong style="user-select: auto;">left</strong>, and&nbsp;<strong style="user-select: auto;">up</strong>&nbsp;respectively.</span></li>
</ul>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Initially you start from <strong style="user-select: auto;">cell(0, 0)</strong>, moving in <strong style="user-select: auto;">right</strong> direction.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">The task is to find the indices of the matrix </span>&nbsp;<span style="font-size: 18px; user-select: auto;">which&nbsp;</span><span style="font-size: 18px; user-select: auto;">leads to outside the matrix from</span><span style="font-size: 18px; user-select: auto;">&nbsp;the traversal of the given matrix&nbsp;from the cell&nbsp;<strong style="user-select: auto;">(0, 0)</strong> by performing the operations.</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
matrix[][] = {{0,1},
              {1,0}}</span>

<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong> (1,1)
<strong style="user-select: auto;">Explanation:</strong>
<img alt="" src="https://media.geeksforgeeks.org/img-practice/endpoint1-1622886995.jpg" style="height: 178px; width: 300px; user-select: auto;" class="img-responsive">
<img alt="" src="https://media.geeksforgeeks.org/img-practice/endpoint2-1622887085.jpg" style="height: 178px; width: 500px; user-select: auto;" class="img-responsive">
<img alt="" src="https://media.geeksforgeeks.org/img-practice/endpoint3-1622887174.jpg" style="height: 250px; width: 500px; user-select: auto;" class="img-responsive"></span>

</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> 
matrix[][] = {{0, 1, 1, 1, 0},</span>
                   <span style="font-size: 18px; user-select: auto;">{1, 0, 1, 0, 1},
              {1, 1, 1, 0, 0}}</span>

<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong> (2,0)</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Complete the function <strong style="user-select: auto;">endPoints()</strong>&nbsp;that take the matrix as input parameter and output the last cell before the pointer gets outside of the matrix.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constrains:</strong><br style="user-select: auto;">
1&lt;= N, M &lt;=1000<br style="user-select: auto;">
0&lt;= matrix[i][j] &lt;=1</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;">&nbsp;</p>
 <p style="user-select: auto;"></p>
            </div>