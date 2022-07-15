# Maximum product
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array <strong style="user-select: auto;">arr[]</strong> of <strong style="user-select: auto;">N</strong> integers, the task is to find a subsequence of size <strong style="user-select: auto;">K</strong> whose product is maximum among all possible <strong style="user-select: auto;">K</strong> sized subsequences of a given array.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>N = 4, K = 2
arr[] = {1, 2, 0, 3} 
<strong style="user-select: auto;">Output:</strong> 6
<strong style="user-select: auto;">Explanation</strong>: Subsequence containing 
elements {2, 3} gives maximum product: 
2*3 = 6</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="position: relative; user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>N = 6, K = 4
arr[] = {1, 2, -1, -3, -6, 4}
<strong style="user-select: auto;">Output:</strong> 144
<strong style="user-select: auto;">Explanation</strong>: Subsequence containing 
{2, -3, -6, 4} gives maximum product: 
2*(-3)*(-6)*4 = 144</span><div class="open_grepper_editor" title="Edit &amp; Save To Grepper" style="user-select: auto;"></div></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
This is a function problem. You don't need to take any input, as it is already accomplished by the driver code. You just need to complete the function <strong style="user-select: auto;">maxProductSubarrayOfSizeK</strong>() that takes array<strong style="user-select: auto;"> arr[],&nbsp;</strong>integer<strong style="user-select: auto;"> N </strong>and&nbsp;integer<strong style="user-select: auto;"> K</strong>&nbsp;as parameters and returns the desired product.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(NlogN).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(1).</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N ≤ 10<sup style="user-select: auto;">5</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>