# How to find the leftmost character in a string?

### Algorithm to find the first non-repeating character in a string:
* Input the string from the user.
* Start traversing the string using two loops.
* Use the first loop to scan the characters of the string one by one.
* Use the second loop to find if the current character is occurring in the latter part if the string or not.
* If it is not occurring, print that character.
* Else, continue traversing.

## Program:
#include<stdlib.h>\
#include<stdio.h>\
#define NO_OF_CHARS 256\
int *get_char_count(char *str)\
{\
	int *count = (int *)calloc(sizeof(int), NO_OF_CHARS);\
	int i;\
	for (i = 0; *(str+i); i++)\
		count[*(str+i)]++;\
	return count;\
}\
int first_non_repeating_character(char *str)\
{\
	int *count = get_char_count(str);\
	int index = -1, i;\
  for (i = 0; *(str+i); i++)\
	{\
		if (count[*(str+i)] == 1)\
			{\
				index = i;\
				break;\
			}\
	}\
	free(count);\
	return index;\
}\
int main()\
{\
	char str[NO_OF_CHARS];\	
	printf(“\nEnter the string : “);\
	scanf(“%s”,&str);\
	int index = first_non_repeating_character(str);\
	if (index == -1)\
		printf(“All the characters are repetitive”);\
	else\
		printf(“First non-repeating character is %c”, str[index]);\
	getchar();\
	return 0;\
}
#### Output:
<img src="https://github.com/NihalSuresh007/DSA/blob/main/dsa-cp-1/Leftmost%20Character/output.png" alternate="input">\

***Contributed by*** [NihalSuresh](https://github.com/NihalSuresh007) , If you find it helpful , don't forget to drop a like 💖	Contributed by [NihalSuresh](https://github.com/NihalSuresh007) 😊 , If you find it helpful , don't forget to drop a like 💖
##### connect with NihalSuresh 😊	
[Linkedin](https://www.linkedin.com/in/nihal-s-b0535a191)
