# What does this code do?
### This is a program to find elements which have appeared more than once in an array.
# How to do it.
## Approach 1
*The very fundamental/intuitive approach would be iterate the array for each and every element.
*We can keep count of the element while traversing. At the end of the traversal if it the count of the element is greater than 1, we print it.
*The time complexity of the above code will ne n^2, as we will traverse the array one time for every element. The space complexity will be constant as we will not be using any extra memory.
## Approach 2
* This approach uses the power of a data structure named as Maps. Map is a data structure which can be used here to keep count of every element. 
  It is an inbuilt data structure in almost every programming language.
* We initialize a map by using Map<data type,data type> (name of the map). The data type after the comma keeps track of the data type before it.They are also known as key and value.
Not only integers, we can use it to count strings,char etc. There are a lot of uses of Map which we will discuss in the future.
* We traverse an array once and increase the tracker of the element by one. For example if name of the map is M1. Name of array is arr. We intialize the counter of any element
like this. M1[arr[0]]=0;
* We can increment it like this: M1[arr[0]]++
*Map elements are accessed using this method. To access the key we write M1.first or M1->first. To access the value we write M1.second or M1->second. 
* We can run a for loop from 0 to array size and do the above step for every element. In the end we will have the element and the count of that element mapped to it.
* Then we traverse the map and if the count of any element is greater than 1, we print that element.
## Head on to the code folder to get the working code

## Let's Connect :+1:
* [![](https://github.com/arpit-dwivedi/arpit-dwivedi.github.io/raw/master/assets/img/Webp.net-resizeimage.png)](https://www.linkedin.com/in/ayush-pawar-847209191/)  [![](https://github.com/arpit-dwivedi/arpit-dwivedi.github.io/raw/master/assets/img/ttt.png)](https://twitter.com/Iyush004)

