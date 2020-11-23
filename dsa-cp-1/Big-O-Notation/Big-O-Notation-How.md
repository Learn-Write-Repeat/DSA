### Big O notation examples
---

```c++
int main() {

    int a = 1, b = 2;
    sum = a + b;
    cout << sum << "\n";
    
    return 0;
}
```
Consider above code, this code performs single sum operation, we can say that the time complexity of the above code is O(1), the code takes constant time to finish the task so if a code consists of single commands, its time complexity is always **O(1)**. 

```c++
int main() {

    int n = 10;
    for (int i = 1; i <= n; i++) {
        cout << i;
    }

    return 0;
}
```
If the code contains a loop then the time complexity of a loop is estimated by the number of time the statements inside the loop are executed, for the above code the time complexity is said to be **O(n)** because the statement inside the loop is executed n times. 

```c++
int main() {
    
    int n = 10;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << i+j << " ";
        }
    }

    return 0;
}
```
Consider above code the statements inside the 2nd loop will be executed n^2 times therefore the  time complexity will be **O(n^2)** for the above code.In general, if there are k nested loops and each loop goes through n values, the time complexity is O(n^k).

```c++
int main() {
    
    int n = 10;
    while(n > 0) {
        cout << n << " ";
        n /= 2;
    }

    return 0;
}
```
In the above code the input is getting halfed every turn so we say that the time complexity of such algorithm is logarithmic as log2(n) equals the number of times n must be divided by 2 to get 1 we denote it as **O(log n)**.

```c++
int main() {
    
    int n = 10;
    for (int i = 1; i <= n; i++) {
        cout << i;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << i+j << " ";
        }
    }

    return 0;
}
```
In the above code, there are two loops one is single for loop  and other is nested for loop in this case the time complexity of the above code should be **O(n^2 + O(n))** but in big O notation we neglect lower order terms so the time complexity will be **O(n^2)**



### Common Time Complexities

▶️  **O(1)**  The running time of a constant-time algorithm does not depend on the input size. A typical constant-time algorithm is a direct formula that calculates the
answer.

▶️  **O(logn)** A logarithmic algorithm often halves the input size at each step. The running time of such an algorithm is logarithmic,because log2n equals the number
of times n must be divided by 2 to get 1.

▶️  **O(√n)** A square root algorithm is slower than O(logn) but faster than O(n). A
special property of square roots is that √n = n / √n, so n elements can be divided
into O(√n) blocks of O(√n) elements.

▶️  **O(n)** A linear algorithm goes through the input a constant number of times. This
is often the best possible time complexity, because it is usually necessary to access
each input element at least once before reporting the answer.

▶️  **O(nlogn)** This time complexity often indicates that the algorithm sorts the input,
because the time complexity of efficient sorting algorithms is O(nlogn). Another
possibility is that the algorithm uses a data structure where each operation takes
O(logn) time

▶️  **O(n^2)** A quadratic algorithm often contains two nested loops. It is possible to go
through all pairs of the input elements in O(n^2) time

▶️  **O(2^n )** This time complexity often indicates that the algorithm iterates through all
subsets of the input elements

▶️  **O(n!)** This time complexity often indicates that the algorithm iterates through all
permutations of the input elements



|  Input size | Expected time complexity  |
| :------------: | :------------: |
| n ≤ 10 | O(n!) |
| n ≤ 20 | O(2^n )  |
| n  ≤ 500 | O(n^3 )  |
| n  ≤ 5000  | O(n^2)  |
| n  ≤ 10^6  |  O(n log n) or O(n) |
| n is large | O(1) or O(log n) |
