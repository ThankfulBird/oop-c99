# Object Oriented Programming In C99 
Object Project is a basic implementation of OOP in C. As it is plain to see OOP implementations in C
is scarce yet entangled. Thus implementing core libraries in C using OOP fundamentals seems to be a very attractive idea.
Implementation detail of each function and structure has been demonstrated in Wiki. Each and every contribution for
specific parts of implementations in project is warmly welcomed indeed.
## Prerequisites
C99 or so-called ANSI-C syntax is preferred in this project. Some users may have some trouble with this
version. Using -std:c99 flag will solve the compilation problem. Let us say we want to compile main.c 
but gcc gives us an error like "error: 'for' loop initial declaration used outside C99 mode".
To solve this problem we compile it like below:
<pre>   gcc -std=c99 -o main.c main </pre>
## Code Styling
The main source for code styling is [NASA C Style Guide](http://homepages.inf.ed.ac.uk/dts/pm/Papers/nasa-c-style.pdf) which
is one of the most concise and formal guides for styling in C language. There are two crucial points in NASA C Style:
* Naming Conventions
* Braces
#### Naming Conventions
Using camel case is not encouraged. In these libraries you are likely to see snake case.
<pre>   customer_name, newly_created_function()</pre>
There are two exceptions for this rule which is enums and structs. Two ubiquitous examples above:
<pre>   Boolean, LinkedList</pre>
#### Braces
<pre>void my_function() {
    ...
}</pre>
Despite of this popular usage, the right one is using braces after a line of logical structures, loops, functions, etc.
Some useful examples:
<pre>void function()
{
    ...
}

enum Boolean
{
    ...
}

struct Node
{
    ...
}

while (Boolean b)
{
    ...
}

if (Boolean b)
{
    ...
}
</pre>
## License
This project is licenced under the GNU License -see [LICENSE](https://github.com/ThankfulBird/oop-c99/blob/master/LICENSE) for details-
