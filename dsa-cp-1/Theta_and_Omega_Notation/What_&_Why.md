## What are Asymptotic Notations?

Whenever we write a program, we want it to work efficiently. The efficiency of one program is mostly based off of two parameters: 
1) Space Complexity 
2) Time Complexity

Two different algorithms may work similarly on a small number of input, but might have a drastic change when dealt with large number of inputs. So this understanding of how efficient a program is, is what is known as <b>Asymptotic Analysis</b> and the Notations that help to measure it are called <b>Asymptotic Notations</b>. Therefore, Asymptotic Notations can be defined as <i>"The mathematical notations used to describe the running time of an algorithm when the input tends towards a particular value or a limiting value"</i>.

There are mainly 3 types of Asymptotic Notations:
1) Big O Notation
2) Theta Notation
3) Omega Notation

In this markdown, we'll understand about Theta and Omega notation.

### Theta Notation

- It is used to represent the <b>average case</b> time complexity.
- It represents the upper and the lower bound of the running time of an algorithm.
- For a function g(n), Θ(g(n)) is given by the relation:

<pre>
Θ(g(n)) = { f(n): there exist positive constants c1, c2 and n0 such that 0 ≤ c1g(n) ≤ f(n) ≤ c2g(n) for all n ≥ n0 }
</pre>

- Its graph can be represented as follows:
<img align="center" width="443" alt="theta (1)" src="https://user-images.githubusercontent.com/43854410/99991676-5873bd80-2ddb-11eb-848c-b3245a42219d.png">


### Omega Notation

- It is used to represent the <b>best case</b> time complexity.
- It represents the lower bound of the running time of an algorithm.
- For a function g(n), Θ(g(n)) is given by the relation:

<pre>
Ω(g(n)) = { f(n): there exist positive constants c and n0 such that 0 ≤ cg(n) ≤ f(n) for all n ≥ n0 }
</pre>

- Its graph can be represented as follows: 
<img align="center" width="443" alt="omega (1)" src="https://user-images.githubusercontent.com/43854410/99991664-5578cd00-2ddb-11eb-8e68-d7a15c9aa32a.png">

<h4 align="center"> Contributed by <a href="https://github.com/yashtikakakkar">Yashtika Kakkar</a> With ❤️ </h3>
