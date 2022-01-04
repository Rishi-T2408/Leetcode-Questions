<h2><a href="https://leetcode.com/problems/minimum-moves-to-convert-string/">2027. Minimum Moves to Convert String</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a string <code style="user-select: auto;">s</code> consisting of <code style="user-select: auto;">n</code> characters which are either <code style="user-select: auto;">'X'</code> or <code style="user-select: auto;">'O'</code>.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">move</strong> is defined as selecting <strong style="user-select: auto;">three</strong> <strong style="user-select: auto;">consecutive characters</strong> of <code style="user-select: auto;">s</code> and converting them to <code style="user-select: auto;">'O'</code>. Note that if a move is applied to the character <code style="user-select: auto;">'O'</code>, it will stay the <strong style="user-select: auto;">same</strong>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">minimum</strong> number of moves required so that all the characters of </em><code style="user-select: auto;">s</code><em style="user-select: auto;"> are converted to </em><code style="user-select: auto;">'O'</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "XXX"
<strong style="user-select: auto;">Output:</strong> 1
<strong style="user-select: auto;">Explanation:</strong> <u style="user-select: auto;">XXX</u> -&gt; OOO
We select all the 3 characters and convert them in one move.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "XXOX"
<strong style="user-select: auto;">Output:</strong> 2
<strong style="user-select: auto;">Explanation:</strong> <u style="user-select: auto;">XXO</u>X -&gt; O<u style="user-select: auto;">OOX</u> -&gt; OOOO
We select the first 3 characters in the first move, and convert them to <code style="user-select: auto;">'O'</code>.
Then we select the last 3 characters and convert them so that the final string contains all <code style="user-select: auto;">'O'</code>s.</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 3:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> s = "OOOO"
<strong style="user-select: auto;">Output:</strong> 0
<strong style="user-select: auto;">Explanation:</strong> There are no <code style="user-select: auto;">'X's</code> in <code style="user-select: auto;">s</code> to convert.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">3 &lt;= s.length &lt;= 1000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s[i]</code> is either <code style="user-select: auto;">'X'</code> or <code style="user-select: auto;">'O'</code>.</li>
</ul>
</div>