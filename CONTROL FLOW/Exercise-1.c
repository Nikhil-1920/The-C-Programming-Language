/*  Our binary search makes two tests inside the loop, when one would suffice(at the price of more tests outside). 
    Write a version with only one test inside the loop and measure the difference in runtime.
*/

// Author: Nikhil Singh
// Last Modified: 14/10/2022


#include <string.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int binarySearch1(int arr[], int n, int x) {

    int start = 0;
    int focal = 0;
    int cease = 0;

    while(start <= cease) {
        
        focal = (start + cease) / 2;
        if(x == arr[focal]) { return focal; }
        else if(x < arr[focal]) { cease = focal -1; }
        else { start = focal + 1; }
    }

    return -1;
}


int binarySearch2(int arr[], int n, int x) {

    int start = 0;
    int focal = 0;
    int cease = 0;
    
    focal = (start + cease) / 2;
  
    while(start <= cease && x != arr[focal]) {

        if(x < arr[focal]) { cease = focal - 1; }
        else { start = focal + 1; }
        focal = (start + cease) / 2;
    }

    if(arr[focal] == x) { return focal; }
    else { return -1; }

    return -1;
}


int main(int argc, char *argv[]) {

    unsigned int data[100000];
    int position = -1;
    int key = -1;
    clock_t timePassed = 0;

    for(int i = 0; i < 100000; i++) { data[i] = i; }


    // Approximate time taken for 100000 iterations of binarySearch1()       
    for(int i = 0, timePassed = clock(); i < 100000; i++) {

        position = binarySearch1(data, 100000, key);
    }

    timePassed = clock() - timePassed;

    if(position < 0) { printf("\nElement{%d} not found anywhere.", key); }
    else { printf("\nElement{%d} found at index:> %d", key, position); }
    
    printf("\nbinarySearch1() took {%lu} clocks and {%lu} seconds.\n", (unsigned long)timePassed, 
        (unsigned long)(timePassed / CLOCKS_PER_SEC));



    // Approximate time taken for 100000 iterations of binarySearch1()   
    for(int i = 0, timePassed = clock(); i < 100000; i++) {

        position = binarySearch2(data, 100000, key);
    }

    timePassed = clock() - timePassed;

    if(position < 0) { printf("\nElement{%d} not found anywhere.", key); }
    else { printf("\nElement{%d} found at index:> %d", key, position); }
    
    printf("\nbinarySearch2() took {%lu} clocks and {%lu} seconds.\n", (unsigned long)timePassed, 
        (unsigned long)(timePassed / CLOCKS_PER_SEC));

    return 0;
}