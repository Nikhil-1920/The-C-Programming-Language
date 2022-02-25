/*  Q.1. Our binary search makes two tests inside the loop, when one would 
    suffice(at the price of more tests outside). Write a version with only 
    one test inside the loop and measure the difference in runtime.
*/

// Author: Nikhil Singh
// Last Modified: 22/02/2022


#include <stdio.h>
#include <time.h>
#define MAX_ELEMENT 100000


int binarySearch1(int[], int, int);
int binarySearch2(int[], int, int);


/*  We search for the element {-1}, to time the function's worst case
    performance (i.e. element not found in data array).
*/
int main(void) {

    int data[MAX_ELEMENT], idx;
    int key = -1;
    clock_t timePassed = 0;

    for(int i = 0; i < MAX_ELEMENT; i++)  data[i] = i;
    
    /*  Approximate time taken for 100000 iterations of 
        binarySearch1()       
    */
    for(int i = 0, timePassed = clock(); i < 100000; i++) {
        idx = binarySearch1(data, MAX_ELEMENT, key);
    }

    timePassed = clock() - timePassed;

    if(idx < 0) {
        printf("\nElement{%d} not found anywhere.", key);
    }
    else {
        printf("\nElement{%d} found at index:> %d", key, idx);
    }
    
    printf("\nbinarySearch1() took {%lu} clocks and {%lu} seconds.\n", 
        (unsigned long)timePassed, (unsigned long)(timePassed / CLOCKS_PER_SEC));

    /*  Approximate time taken for 100000 iterations of 
        binarySearch2()       
    */
    for(int i = 0, timePassed = clock(); i < 100000; i++) {
        idx = binarySearch2(data, MAX_ELEMENT, key);
    }

    timePassed = clock() - timePassed;

    if(idx < 0) {
        printf("\nElement{%d} not found anywhere.", key);
    }
    else {
        printf("\nElement{%d} found at index:> %d", key, idx);
    }
    
    printf("\nbinarySearch2() took {%lu} clocks and {%lu} seconds.\n", 
        (unsigned long)timePassed, (unsigned long)(timePassed / CLOCKS_PER_SEC));

    return 0;
}


// Implementing binary search using two test inside loop
int binarySearch1(int arr[], int num, int key) {

    int start, mid, end;

    start = 0;
    end = num - 1;

    while(start <= end) {

        mid = (start + end) / 2;
        if(key > arr[mid])  start = mid + 1;
        else if(key < arr[mid]) end = mid - 1;
        else return -1;
    }
    return -1;
}


// Implementing binary search using only one test inside loop
int binarySearch2(int arr[], int num, int key) {

    int start, mid, end;

    start = 0;
    end = num - 1;
    mid = (start + end) / 2;

    while(start <= end && key != arr[mid]) {
        
        if(key < arr[mid]) end = mid - 1;
        else start = mid + 1;
        mid = (start + end) / 2;
    }

    if(key == arr[mid]) return mid;
    else return -1;    
}
