# Smaller on Left
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array <strong style="user-select: auto;">arr</strong>[ ] of <strong style="user-select: auto;">N</strong> positive integers,&nbsp;the task is to find the greatest element on the left of every element in the array which is strictly smaller than itself, if this element does not exist for an index print "-1".</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 5
arr[] = {2, 3, 4, 5, 1}
<strong style="user-select: auto;">Output: 
</strong>-1 2 3 4 -1
<strong style="user-select: auto;">Explanation:</strong>
Greatest element on the left of 3 smaller 
than itself is 2, for 4 it is 3 and for 5 
it is 1. Since 2 is the first element and 
no element on its left is present, so it's 
greatest smaller element will be -1 and for 
1 no element smaller than itself is present 
on its left, so it's greatest smaller element 
is -1.
</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>N = 3
arr[] = {1, 2, 3} <strong style="user-select: auto;">
Output:
</strong>-1 1 2 </span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
This is a function problem. The input is already taken care of by the driver code. You only need to complete the function <strong style="user-select: auto;">Smallestonleft()</strong> that takes an array <strong style="user-select: auto;">arr[ ]&nbsp;</strong>and&nbsp;sizeOfArray <strong style="user-select: auto;">N</strong>, and return the required answer. The driver code takes care of the printing.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N*Log(N)).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(N).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N ≤&nbsp;10<sup style="user-select: auto;">6</sup><br style="user-select: auto;">
1 ≤&nbsp;arr[i] ≤&nbsp;10<sup style="user-select: auto;">8</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>