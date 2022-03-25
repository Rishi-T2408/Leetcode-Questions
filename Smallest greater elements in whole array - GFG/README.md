# Smallest greater elements in whole array
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given an array <strong style="user-select: auto;">A</strong> of <strong style="user-select: auto;">N</strong> length. We need to calculate the next greater element for each element in a given array. If the next greater element is not available in a given array then we need to fill <strong style="user-select: auto;">-10000000</strong> at that index place.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input :</strong> arr[] = {13, 6, 7, 12}
<strong style="user-select: auto;">Output :</strong> _ 7 12 13 
<strong style="user-select: auto;">Explanation:</strong>
Here, at index 0, 13 is the greatest value 
in given array and no other array element 
is greater from 13. So at index 0 we fill 
'-10000000'.
</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input :</strong> arr[] = {6, 3, 9, 8, 10, 2, 1, 15, 7} <strong style="user-select: auto;">
Output :</strong>  7 6 10 9 15 3 2 _ 8
<strong style="user-select: auto;">Explanation:</strong> Here, at index 7, 15 is the greatest
value in given array and no other array element is
greater from 15. So at index 7 we fill '-10000000'.</span>
</pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
This is a function problem. The input is already taken care of by the driver code. You only need to complete the function <strong style="user-select: auto;">greaterElement()</strong> that takes an array <strong style="user-select: auto;">(arr)</strong>, sizeOfArray <strong style="user-select: auto;">(n)</strong>, and return an&nbsp;array that displays the next greater element to element at that index.&nbsp;The driver code takes care of the printing.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N*LOG(N)).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(N).</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N ≤ 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
-10<sup style="user-select: auto;">6</sup> ≤ A<sub style="user-select: auto;">i</sub> ≤ 10<sup style="user-select: auto;">6</sup></span></p>

<p style="user-select: auto;">&nbsp;</p>
 <p style="user-select: auto;"></p>
            </div>