# Pairs of Non Coinciding Points
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">In a given cartesian plane, there are <strong style="user-select: auto;">N</strong> points. We need to find the Number of Pairs of &nbsp;points(<strong style="user-select: auto;">A, B</strong>) such that</span></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Point A and Point B do not coincide.</span></li>
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Manhattan Distance&nbsp;and the Euclidean Distance between the points should be equal.</span></li>
</ul>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note:</strong> Pair of 2 points(A,B) is considered same as Pair of 2 points(B ,A).<br style="user-select: auto;">
Manhattan Distance = |x2-x1|+|y2-y1|</span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">Euclidean Distance &nbsp; = ((x2-x1)^2 + (y2-y1)^2)^0.5, where points are (x1,y1) and (x2,y2).</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong></span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">N = </strong></span><span style="font-size: 18px; user-select: auto;">2</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">X = </strong>{1, 7}</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Y = </strong>{1, 5}</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong></span>
<span style="font-size: 18px; user-select: auto;">0</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation:</strong></span>
<span style="font-size: 18px; user-select: auto;">None of the pairs of points have
equal Manhatten and Euclidean distance.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong></span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">N = </strong></span><span style="font-size: 18px; user-select: auto;">3</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">X = </strong>{1, 2, 1}</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Y = </strong>{2, 3, 3}</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong></span>
<span style="font-size: 18px; user-select: auto;">2</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation:</strong></span>
<span style="font-size: 18px; user-select: auto;">The pairs <lclighter data-id="lgt255432176" data-bundle-id="0" style="background-image: linear-gradient(transparent 0%, transparent calc(50% - 4px), rgb(204, 242, 241) calc(50% - 4px), rgb(204, 242, 241) 100%); transition: background-position 120ms ease-in-out 0s, padding 120ms ease-in-out 0s; background-size: 100% 200%; background-position: initial; background-color: initial; user-select: auto;">{(1,2), (1,3)}, and {(1,3), (2,3)</lclighter><div class="LinerThreadIcon LinerFirst" data-highlight-id="255432176" data-bundle-id="0" id="lgt255432176" style="background-image: url(&quot;https://gcpstorage.getliner.com/liner-service-bucket/user_photo_default/color-10/C.svg&quot;); user-select: auto;">
        <div class="LinerThreadIcon__dim" style="user-select: auto;"></div>
        <div class="LinerThreadIcon__mentioned" style="user-select: auto;">
          <div class="LinerThreadIcon__mentionedImg" style="user-select: auto;"></div>
        </div>
        <div class="LinerThreadIcon__onlyMe" style="user-select: auto;">
          <div class="LinerThreadIcon__onlyMeImg" style="user-select: auto;"></div>
        </div>
      </div>}
have equal Manhatten and Euclidean distance.</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">numOfPairs()</strong> which takes an Integer N and two arrays X, and Y of length N as input and returns the number of pairs with equal Manhattan and Euclidean Distance. (X[i], Y[i]) denotes a point.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(N)</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 &lt;= N &lt;= 10<sup style="user-select: auto;">5</sup></span><br style="user-select: auto;">
&nbsp;<span style="font-size: 18px; user-select: auto;">-10^9</span> <span style="font-size: 18px; user-select: auto;">&lt;= X[i], Y[i] &lt;= 10^9</span></p>
 <p style="user-select: auto;"></p>
            </div>