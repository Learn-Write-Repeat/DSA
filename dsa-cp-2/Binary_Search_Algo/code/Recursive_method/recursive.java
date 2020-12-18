import java.util.*;
class Main { 
    // Returns index of x if it is present in arr[l.. 
    // r], else return -1 
    public static int binarySearch(int arr[], int l, int r, int x) 
    { 
        if (r >= l) { 
            int mid = l + (r - l) / 2; 
  
            // If the element is present at the 
            // middle itself 
            if (arr[mid] == x) 
                return mid; 
  
            // If element is smaller than mid, then 
            // it can only be present in left subarray 
            if (arr[mid] > x) 
                return binarySearch(arr, l, mid - 1, x); 
  
            // Else the element can only be present 
            // in right subarray 
            return binarySearch(arr, mid + 1, r, x); 
        } 
  
        // We reach here when element is not present 
        // in array https://www.onlinegdb.com/online_java_compiler#tab-stdin
        return -1; 
    } 
  
    // Driver method to test above 
    public static void main(String args[]) 
    { 
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the Size of Array : ");
        int n = sc.nextInt(); 
        int a[] = new int[n]; 
        System.out.println("Enter the elements : ");
        for(int i=0;i<n;i++){
            a[i] = sc.nextInt();
        }
        
        System.out.print("Enter the element , you want to search : ");
        int x = sc.nextInt();
        int result = binarySearch(a, 0, n - 1, x); 
        if (result == -1) 
            System.out.println("Element not present"); 
        else
            System.out.println("Element found at index " + result); 
    } 
} 