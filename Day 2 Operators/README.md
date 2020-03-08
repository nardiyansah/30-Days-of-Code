[Day 2 Operators problem](https://www.hackerrank.com/challenges/30-operators/problem)

My Solution

```
void solve(double meal_cost, int tip_percent, int tax_percent) {

    float tip = (float)(meal_cost * tip_percent / 100);
    float tax = (float)(meal_cost * tax_percent / 100); 
    float sum = meal_cost + tip + tax;
    int sumx = round(sum);

    cout << sumx;
}
```