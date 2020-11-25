# How to calculate Space Complexity of an Algorithm?
### Example 1:
#include<stdio.h>\
int main()\
{\
  int a = 5, b = 5, c;\
  c = a + b;\
  printf("%d", c);\
}
#### Output :
<img src="https://github.com/NihalSuresh007/DSA/blob/main/dsa-cp-1/Space%20Complexity/output1.png" alternate="input">\
**Explanation:** In the above program, 3 integer variables are used. The size of the integer data type is 2 or 4 bytes which depends on the compiler. Now, lets assume the size as 4 bytes. So, the total space occupied by the above-given program is 4 * 3 = 12 bytes. Since no additional variables are used, no extra space is required. Hence, **space complexity for the above-given program is O(1), or constant.**\

### Example 2:
#include <stdio.h>\
int main()\
{\
  int n, i, sum = 0;\
  scanf("%d", &n);\
  int arr[n];\
  for(i = 0; i < n; i++)\
  {\
    scanf("%d", &arr[i]);\
    sum = sum + arr[i];\
  }\
  printf("%d", sum);\
}
#### Output:
<img src="https://github.com/NihalSuresh007/DSA/blob/main/dsa-cp-1/Space%20Complexity/output2.png" alternate="input">\
**Explanation:** In the above-given code, the array consists of n integer elements. So, the space occupied by the array is 4 * n. Also we have integer variables such as n, i and sum. Assuming 4 bytes for each variable, the total space occupied by the program is 4n + 12 bytes. Since the highest order of n in the equation 4n + 12 is n, **so the space complexity is O(n) or linear.**\

***Contributed by*** [NihalSuresh](https://github.com/NihalSuresh007) , If you find it helpful , don't forget to drop a like 💖	Contributed by [NihalSuresh](https://github.com/NihalSuresh007) 😊 , If you find it helpful , don't forget to drop a like 💖
##### connect with NihalSuresh 😊	
[Linkedin](https://www.linkedin.com/in/nihal-s-b0535a191)

