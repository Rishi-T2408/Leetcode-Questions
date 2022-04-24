# Product of Primes
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given two numbers <strong style="user-select: auto;">L</strong> and <strong style="user-select: auto;">R</strong> (inclusive) find the<strong style="user-select: auto;"> product of primes </strong>within this range. Print the product modulo <strong style="user-select: auto;">10<sup style="user-select: auto;">9</sup>+7</strong>.&nbsp;If there are no primes in that range you must print 1.</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> L = 1, R = 10
<strong style="user-select: auto;">Output:</strong> 210
<strong style="user-select: auto;">Explaination:</strong> The prime numbers are 
2, 3, 5 and 7.</span></pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 2:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> L = 1, R = 20
<strong style="user-select: auto;">Output:</strong> 9699690
<strong style="user-select: auto;">Explaination:</strong> The primes are 2, 3, 
5, 7, 11, 13, 17 and 19.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You do not need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">primeProduct()</strong> which takes L and R and returns the product of the primes within the range. If there are no primes&nbsp;in that range then return 1.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O((R-L)*(logR))<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(sqrt(R))</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ L ≤ R ≤ 10<sup style="user-select: auto;">9</sup><br style="user-select: auto;">
0 ≤ L - R ≤ 10<sup style="user-select: auto;">6</sup>&nbsp;&nbsp;</span></p>
 <p style="user-select: auto;"></p>
            </div>