# How to implement Two Stacks In An Array?
### Method 1 - Divide the space in two halves:
A simple way to implement two stacks is to divide the array in two halves and assign the half half space to two stacks, i.e., use arr[0] to arr[n/2] for stack1, and arr[(n/2) + 1] to arr[n-1] for stack2 where arr[] is the array to be used to implement two stacks and size of array be n.
#### Program:

#include <iostream>\
#include <stdlib.h>\   
using namespace std;\ 
class twoStacks {\ 
    int* arr;\ 
    int size;\ 
    int top1, top2;\ 
public:\ 
    twoStacks(int n)\ 
    {\ 
        size = n;\ 
        arr = new int[n];\ 
        top1 = n / 2 + 1;\ 
        top2 = n / 2;\ 
    }\ 
    void push1(int x)\ 
    {\ 
        if (top1 > 0) {\ 
            top1--;\ 
            arr[top1] = x;\ 
        }\ 
        else {\ 
            cout << "Stack Overflow"\
                 << " By element :" << x << endl;\ 
            return;\ 
        }\ 
    }\ 
    void push2(int x)\ 
    {\ 
        if (top2 < size - 1) {\ 
            top2++;\ 
            arr[top2] = x;\ 
        }\ 
        else {\ 
            cout << "Stack Overflow"\
                 << " By element :" << x << endl;\ 
            return;\ 
        }\ 
    }\ 
    int pop1()\ 
    {\ 
        if (top1 <= size / 2) {\ 
            int x = arr[top1];\ 
            top1++;\ 
            return x;\ 
        }\ 
        else {\ 
            cout << "Stack UnderFlow";\ 
            exit(1);\ 
        }\ 
    }\ 
    int pop2()\ 
    {\ 
        if (top2 >= size / 2 + 1) {\ 
            int x = arr[top2];\ 
            top2--;\ 
            return x;\ 
        }\
        else {\ 
            cout << "Stack UnderFlow";\ 
            exit(1);\ 
        }\ 
    }\ 
};\ 
int main()\ 
{\ 
    twoStacks ts(5);\ 
    ts.push1(5);\ 
    ts.push2(10);\ 
    ts.push2(15);\ 
    ts.push1(11);\ 
    ts.push2(7);\ 
    cout << "Popped element from stack1 is "\
         << " : " << ts.pop1()\ 
         << endl;\ 
    ts.push2(40);\ 
    cout << "\nPopped element from stack2 is "\
         << ": " << ts.pop2()\ 
         << endl;\ 
    return 0;\ 
} 
##### Output :
<img src="https://github.com/NihalSuresh007/DSA/blob/main/dsa-cp-1/Space%20Complexity/output1.png" alternate="input">\
**Explanation:** The problem with this method is inefficient use of array space. A stack push operation may result in stack overflow even if there is space available in arr[]. For example, say the array size is 6 and we push 3 elements to stack1 and do not push anything to second stack2. When we push 4th element to stack1, there will be overflow even if we have space for 3 more elements in array.
**Complexity Analysis:**
***Time Complexity:***
Push operation : O(1)
Pop operation : O(1)
Auxiliary Space: O(N).
### Method 2 - A space efficient implementation:
### Program:
#include <iostream>\ 
#include <stdlib.h>\  
using namespace std;\ 
class twoStacks {\ 
    int* arr;\ 
    int size;\ 
    int top1, top2;\ 
public:\ 
    twoStacks(int n)\
    {\ 
        size = n;\ 
        arr = new int[n];\ 
        top1 = -1;\ 
        top2 = size;\ 
    }\ 
    void push1(int x)\ 
    {\ 
        if (top1 < top2 - 1) {\ 
            top1++;\ 
            arr[top1] = x;\ 
        }\ 
        else {\ 
            cout << "Stack Overflow";\ 
            exit(1);\ 
        }\ 
    }\ 
    void push2(int x)\ 
    {\ 
        if (top1 < top2 - 1) {\ 
            top2--;\ 
            arr[top2] = x;\ 
        }\ 
        else {\ 
            cout << "Stack Overflow";\ 
            exit(1);\ 
        }\ 
    }\ 
    int pop1()\ 
    {\ 
        if (top1 >= 0) {\ 
            int x = arr[top1];\ 
            top1--;\ 
            return x;\ 
        }\ 
        else {\ 
            cout << "Stack UnderFlow";\ 
            exit(1);\ 
        }\ 
    }\ 
    int pop2()\ 
    {\ 
        if (top2 < size) {\ 
            int x = arr[top2];\ 
            top2++;\ 
            return x;\ 
        }\ 
        else {\ 
            cout << "Stack UnderFlow";\ 
            exit(1);\ 
        }\ 
    }\ 
};\ 
int main()\ 
{\ 
    twoStacks ts(5);\ 
    ts.push1(5);\ 
    ts.push2(10);\ 
    ts.push2(15);\ 
    ts.push1(11);\ 
    ts.push2(7);\ 
    cout << "Popped element from stack1 is "\
         << ts.pop1();\ 
    ts.push2(40);\ 
    cout << "\nPopped element from stack2 is "\
         << ts.pop2();\ 
    return 0;\ 
}
**Explanation:**This method efficiently utilizes the available space. It doesn’t cause an overflow if there is space available in arr[]. The idea is to start two stacks from two extreme corners of arr[]. stack1 starts from the leftmost element, the first element in stack1 is pushed at index 0. The stack2 starts from the rightmost corner, the first element in stack2 is pushed at index (n-1). Both stacks grow (or shrink) in opposite direction. To check for overflow, all we need to check is for space between top elements of both stacks. This check is highlighted in the below code.
**Complexity Analysis:**
***Time Complexity:***
Push operation : O(1)
Pop operation : O(1)
Auxiliary Space :O(N).
##### Output:
<img src="https://github.com/NihalSuresh007/DSA/blob/main/dsa-cp-1/Space%20Complexity/output2.png" alternate="input">\
**Explanation:** In the above-given code, the array consists of n integer elements. So, the space occupied by the array is 4 * n. Also we have integer variables such as n, i and sum. Assuming 4 bytes for each variable, the total space occupied by the program is 4n + 12 bytes. Since the highest order of n in the equation 4n + 12 is n, **so the space complexity is O(n) or linear.**\

***Contributed by*** [NihalSuresh](https://github.com/NihalSuresh007) , If you find it helpful , don't forget to drop a like 💖	Contributed by [NihalSuresh](https://github.com/NihalSuresh007) 😊 , If you find it helpful , don't forget to drop a like 💖
##### connect with NihalSuresh 😊	
[Linkedin](https://www.linkedin.com/in/nihal-s-b0535a191)

