# Robots
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">There are two kinds of bots <strong style="user-select: auto;">A</strong> and <strong style="user-select: auto;">B</strong> in a <strong style="user-select: auto;">1-D</strong> array. <strong style="user-select: auto;">A</strong> bot can only move left while <strong style="user-select: auto;">B</strong> can only move right. There are also empty spaces in between represented by <strong style="user-select: auto;">#</strong>. But its also given that the bots cannot cross over each other. </span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given the initial state and final state, we should tell if the transformation is possible.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">NOTE:&nbsp;</strong>There can be many bots of the same type in a particular array.&nbsp;</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>:
s1 = #B#A#
s2 = ##BA#
<strong style="user-select: auto;">Output:</strong>&nbsp;Yes
<strong style="user-select: auto;">Explanation</strong>: Because&nbsp;we can reach the 
final state by moving 'B' to the 
right one step.</span>
</pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
s1 = #B#A#
s2 = #A#B# 
<strong style="user-select: auto;">Output:</strong>&nbsp;No
<strong style="user-select: auto;">Explanation</strong>: Because the robots 
cannot cross each other.</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:&nbsp;&nbsp;</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">moveRobots()</strong>&nbsp;which takes the initial and final states as strings <strong style="user-select: auto;">s1&nbsp;</strong>and <strong style="user-select: auto;">s2&nbsp;</strong>respectively and returns if&nbsp;a valid transformation can be done. Return "Yes" if possible, else "No".</span><br style="user-select: auto;">
<br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(|s1|)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(|s1|)</span><br style="user-select: auto;">
<br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= <strong style="user-select: auto;">|</strong>s1<strong style="user-select: auto;">|</strong> = <strong style="user-select: auto;">|</strong>s2<strong style="user-select: auto;">|</strong>&nbsp;&lt;= 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
The strings only consists of 'A', 'B' and '#'.</span></p>
 <p style="user-select: auto;"></p>
            </div>