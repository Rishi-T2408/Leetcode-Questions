# Maximum average subarray
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array <strong style="user-select: auto;">Arr</strong>&nbsp;of size <strong style="user-select: auto;">N</strong> and a positive integer <strong style="user-select: auto;">K</strong>, find the sub-array of length <strong style="user-select: auto;">K</strong> with the maximum&nbsp;average. </span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>K = 4, N = 6
Arr[] = {1, 12, -5, -6, 50, 3}
<strong style="user-select: auto;">Output:</strong> 12 -5 -6 50
<strong style="user-select: auto;">Explanation:</strong> Maximum average is 
(12 - 5 - 6 + 50)/4 = 51/4.</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>K = 3, N = 7
Arr[] = {3, -435, 335, 10, -50, 100, 20}
<strong style="user-select: auto;">Output:</strong> 335 10 -50
<strong style="user-select: auto;">Explanation:</strong>&nbsp;Maximum average is 
(335 + 10 - 50)/3 = 295/3.
</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">findMaxAverage()</strong>&nbsp;which takes the array of integers&nbsp;<strong style="user-select: auto;">arr, </strong>its size <strong style="user-select: auto;">n</strong>&nbsp;and integer&nbsp;<strong style="user-select: auto;">k&nbsp;</strong>as input parameters and returns an integer&nbsp;denoting the starting index of the subarray.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(1)<br style="user-select: auto;">
<br style="user-select: auto;">
<strong style="user-select: auto;">Constraints</strong><br style="user-select: auto;">
1 &lt;=&nbsp;N &lt;= 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
0 &lt;= |Arr[i]| &lt;= 10<sup style="user-select: auto;">3</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>