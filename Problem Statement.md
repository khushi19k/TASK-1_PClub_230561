# Problem Statement

Calculate the value of \( a^{a^{a^{\cdot^{\cdot^{\cdot}}}}} \) (that is, where the exponentiation is performed \( n-1 \) times on \( a \)) modulo \( 1000000007 \).

## Input

- The first line contains a single integer \( t \) (\( 1 \leq t \leq 10^6 \)) — the number of test cases.
- Each of the next \( t \) lines contains two integers \( a \) (\( 1 \leq a \leq 10^9 \)) and \( n \) (\( 1 \leq n \leq 10^6 \)).

## Output

For each test case, print a single integer — the result of the computation modulo \( 1000000007 \).

## Example

### Input

\(3\)
\(2 3\)
\(3 2\)
\(10 1\)

### Output

\(256\)
\(27\)
\(10\)

## Explanation

- For the first test case, \( 2^{2^{2}} = 2^4 = 16 \) modulo \( 1000000007 \).
- For the second test case, \( 3^3 = 27 \) modulo \( 1000000007 \).
- For the third test case, \( 10 \) modulo \( 1000000007 \).

## Constraints

- \( 1 \leq t \leq 10^6 \)
- \( 1 \leq a \leq 10^9 \)
- \( 1 \leq n \leq 10^6 \)