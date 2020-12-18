import java.util.*;
class Main { 
    // Returns index of x if it is present in arr[l.. 
    // r], else return -1 
   public static  int binarySearch(int arr[], int x) 
    { 
        int l = 0, r = arr.length - 1; 
        while (l <= r) { 
            int m = l + (r - l) / 2; 
  
            // Check if x is present at mid 
            if (arr[m] == x) 
                return m; 
  
            // If x greater, ignore left half 
            if (arr[m] < x) 
                l = m + 1; 
  
            // If x is smaller, ignore right half 
            else
                r = m - 1; 
        } 
  
        // if we reach here, then element was 
        // not present 
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
        int result = binarySearch(a, x); 
        if (result == -1) 
            System.out.println("Element not present"); 
        else
            System.out.println("Element found at index " + result); 
    } 
} 
