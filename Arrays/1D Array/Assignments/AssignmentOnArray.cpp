//Given an integer array(arr) and its size(n) print the count of even and odd in the given array
/*#include<iostream>
using namespace std;
int main(){
    int size, even=0, odd=0;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int array[size];
    cout<<"Enter the elements of the array : ";
    for(int i=0; i<size; i++){
        cin>>array[i];  
    }
    for(int i=0; i<size; i++){
        if(array[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<"The count of even numbers in the array is : "<<even<<endl;
    cout<<"The count of odd numbers in the array is : "<<odd<<endl;
    return 0;
}*/

//Given an integer array and its size find the sum of the greates and the smallest integer present in the array here 1<size<101  ex arr[] = {1,2,3,4,5} output : 6 = 1 + 5

/*#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int smallest = arr[0],largest=arr[0],sum=0;
    for(int i=0; i<size; i++){
        if(smallest>arr[i]){
            smallest = arr[i];
        }
        if(largest<arr[i]){
            largest = arr[i];
        }
    }
    sum = smallest + largest;
    cout<<"The addition of the largest and the smallest element in the array is : "<<sum;
    return 0;
}*/



//Given an integer array and its size reverse the array and print it for ex arr[] = {1,2,3,4,5}, n = 5  output = 5,4,3,2,1

/*#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<size/2; i++){
        int temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
        
    }
    return 0;
}*/

//Given two arrays a[] b[]of the same size your task is to find the minimum sum of two elements that they belong to different array and are not at the same index

/*#include<iostream>
using namespace std;
int main(){
    int a[] = {1,2,3,4,5};
    int b[] = {2,7,8,1,10};
    int sizea = sizeof(a)/sizeof(a[0]);
    int sizeb = sizeof(b)/sizeof(b[0]);
    int smallestofa = a[0], smallestofb = b[0];
    for(int i = 0; i<sizea; i++){
        if(smallestofa>a[i]){
            smallestofa = a[i];
        }
    }
    for(int i = 0; i<sizeb; i++){
        if(smallestofb > b[i]){
            smallestofb = b[i];
        }
    }
    cout<<"The sum of the two smallest values from the different array is : "<<smallestofa+smallestofb;
    return 0;
}*/

//Given an array containing n distinct integers in the range [0,n] (inclusive of both o and n) find and return the only number of the range that is nor present in the array ex arr[]={1,2,3} output = 0 n=3 this range will be [0,3]                if {8,7,6,5,4,3,2,1} output = 7 n=8 thus the range will be [0,8]

/*#include <iostream>
using namespace std;

int main() {
    int arr[] = {8, 7, 6, 5, 4, 3, 2, 0};  // Example array
    int size = sizeof(arr) / sizeof(arr[0]);
    int n = size;  // The range is [0, n]
    // Sum of all numbers from 0 to n
    int totalSum = n * (n + 1) / 2;
    // Sum of array elements
    int arrSum = 0;
    for(int i = 0; i < size; i++){
        arrSum += arr[i];
    }
    int missing = totalSum - arrSum;
    cout << "The missing number is: " << missing << endl;
    return 0;
}*/


// Given integer array containing n elements find the elements in the array for which all the elements to its left side are smaller and all the elements to the right of it are larger then it  ex :- arr = [1,6,5,7,10,8,9] O/P = 7 here all the elements to the left of 7 are smaller and the right side are greater that that  arr = [5,6,2,8,10,9] O/P = -1 here there are no elements in the array which satisfies the condition
#include <iostream>
#include <climits>  // for INT_MIN and INT_MAX
using namespace std;

int main() {
    int arr[] = {1, 6, 5, 7, 10, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);  // size of array

    int leftMax[1000];   // assuming max n <= 1000
    int rightMin[1000];

    // Step 1: fill leftMax array
    leftMax[0] = INT_MIN;
    for (int i = 1; i < n; i++) {
        leftMax[i] = max(leftMax[i - 1], arr[i - 1]);
    }

    // Step 2: fill rightMin array
    rightMin[n - 1] = INT_MAX;
    for (int i = n - 2; i >= 0; i--) {
        rightMin[i] = min(rightMin[i + 1], arr[i + 1]);
    }

    // Step 3: find the pivot element
    int result = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > leftMax[i] && arr[i] < rightMin[i]) {
            result = arr[i];
            break;
        }
    }

    cout << result << endl;
    return 0;
}
