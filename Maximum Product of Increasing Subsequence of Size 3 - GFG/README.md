# Maximum Product of Increasing Subsequence of Size 3
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 20px; user-select: auto;">Given a sequence of non-negative integers, find the subsequence of length 3 having maximum product, with the elements of the subsequence being in increasing&nbsp;order.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 20px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 20px; user-select: auto;"><strong style="user-select: auto;">â€‹Input:</strong>
n = 8
arr[ ] = {6, 7, 8, 1, 2, 3, 9, 10</span><span style="font-size: 20px; user-select: auto;">}
<strong style="user-select: auto;">Output:
</strong>8 9 10
<strong style="user-select: auto;">Explanation: </strong>3 increasing elements of 
the given arrays are 8,9 and 10 which 
forms the subsequence of size 3 with 
maximum product.</span><span style="font-size: 20px; user-select: auto;">
</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 20px; user-select: auto;"><strong style="user-select: auto;">â€‹Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 20px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>n = 4
arr[ ] = {3, 4, 2, 1} <strong style="user-select: auto;">
Output:
</strong>Not Present </span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 20px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
This is a function problem. The input is already taken care of by the driver code. You only need to complete the function <strong style="user-select: auto;">maxProductSubsequence()</strong> that takes an array <strong style="user-select: auto;">arr</strong>, sizeOfArray <strong style="user-select: auto;">n</strong>, and return the subsequence of size 3 having the maximum product, numbers of subsequence being in increasing order. If no such sequence exists, return&nbsp;<strong style="user-select: auto;">"-1"</strong>. The driver code takes care of the printing.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 20px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N*LOG(N)).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(N).</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<br style="user-select: auto;">
<span style="font-size: 20px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= <strong style="user-select: auto;">N</strong> &lt;= 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1 &lt;= <strong style="user-select: auto;">Arr[i]</strong> &lt;= 10<sup style="user-select: auto;">5</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>