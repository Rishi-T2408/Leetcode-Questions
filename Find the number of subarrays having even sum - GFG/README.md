# Find the number of subarrays having even sum
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array <strong style="user-select: auto;">Arr[]</strong>&nbsp;of size <strong style="user-select: auto;">N.</strong>&nbsp;Find the number of subarrays whose sum is an even number.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 6
Arr[] = {1, 2, 2, 3, 4, 1}
<strong style="user-select: auto;">Output:</strong> 9
<strong style="user-select: auto;">Explanation:</strong> The&nbsp;array {1, 2, 2, 3, 4, 1} 
has 9 such possible subarrays. These are-
&nbsp;{1, 2, 2, 3} &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;Sum = 8
&nbsp;{1, 2, 2, 3, 4} &nbsp; &nbsp;&nbsp;&nbsp; Sum = 12
&nbsp;{2} &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; Sum = 2 (At index 1)
&nbsp;{2, 2} &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;Sum = 4
&nbsp;{2, 2, 3, 4, 1} &nbsp; &nbsp;&nbsp;  Sum&nbsp;= 12
&nbsp;{2} &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; Sum = 2 (At index 2)
&nbsp;{2, 3, 4, 1} &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;Sum&nbsp;= 10
&nbsp;{3, 4, 1} &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp;Sum&nbsp;= 8
&nbsp;{4} &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; Sum = 4
</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 4
Arr[] = {1, 3, 1, 1}
<strong style="user-select: auto;">Output:</strong> 4
<strong style="user-select: auto;">Explanation:</strong>&nbsp;The&nbsp;array {1, 3, 1, 1} 
has 4 such possible subarrays.
These are-
&nbsp;{1, 3} &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;  Sum = 4
&nbsp;{1, 3, 1, 1} &nbsp; &nbsp;&nbsp;&nbsp;Sum = 6
&nbsp;{3, 1} &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;Sum = 4
&nbsp;{1, 1} &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;Sum = 2
</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">countEvenSum()</strong>&nbsp;which takes the array of integers&nbsp;<strong style="user-select: auto;">arr[]</strong>&nbsp;and its size&nbsp;<strong style="user-select: auto;">n&nbsp;</strong>as input&nbsp;parameters and returns an integer denoting the answer.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;=&nbsp;N&nbsp;&lt;= 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1&lt;= Arr[i] &lt;=10<sup style="user-select: auto;">9</sup></span></p>

<p style="user-select: auto;">&nbsp;</p>
 <p style="user-select: auto;"></p>
            </div>