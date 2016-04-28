# Artsy programs

This is a set of artsy programs I have written.

# fib.bf

`fib.bf` is a brainfuck program that generates a Fibonacci sequence steadly moving along the memory tape.
It produces no actual output and takes no input.
Its only effect is a wave moving across the memory tape at a Fibonacci pace.
In order to see it in effect you will need a brainfuck interpreter that doesn't optimize and that lets you
visualize the memory tape during interpretation.

# forever_alone.c++

`forever_alone.c++` is a POSIX program that turns into a `cat` invocation with its standard output redirected
to its standard input. The standard output is pre-loaded with a greeting.

# nyan_cats.c++

`nyan_cats.c++` is a POSIX program that forks itself into two `cat` invocations each with their standard output
redirected to the standard input of the other. The standard output of one of them is pre-loaded with "nyan".
