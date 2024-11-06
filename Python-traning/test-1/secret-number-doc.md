# Finding a Power Function from Two Points

To find a power function $f(x) = k \cdot x^n$ that passes through two points $A(x_1, y_1)$ and $B(x_2, y_2)$, follow these steps:

## Steps

1. **Set up equations using the points**:
   $$
   y_1 = k \cdot x_1^n
   $$
   $$
   y_2 = k \cdot x_2^n
   $$

2. **Divide the two equations** to eliminate $k$:
   $$
   \frac{y_2}{y_1} = \left( \frac{x_2}{x_1} \right)^n
   $$

3. **Solve for $n$**:
   $$
   n = \frac{\ln(y_2 / y_1)}{\ln(x_2 / x_1)}
   $$

4. **Substitute $n$ back to find $k$**:
   Use either point $A$ or $B$ in $y = k \cdot x^n$ to solve for $k$:
   $$
   k = \frac{y_1}{x_1^n}
   $$

## Result

This process gives the values of $k$ and $n$ for the power function $f(x) = k \cdot x^n$ that passes through the points $A$ and $B$.
