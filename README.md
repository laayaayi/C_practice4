Write a function ( int count_in_array(int A[], int size, int n) ) which returns how many 
times a number appears in an array.
Write a function ( int first_index(int A[], int size, int n) ) which returns the index of the 
first occurrence of a number in an array. Return -1 if none.
Write a function ( int last_index(int A[], int size, int n) ) which returns the index of the 
last occurrence of a number in an array. Return -1 if none.
Write a function ( void reverse_array(int A[], int size) ) which reverses an array.
Write a function ( int partial_reverse(int A[], int size, int n) ) which reverses a part of 
an integer array. The starting index of this part is the index of the first appearance and the ending index 
of this part is the index of the last appearance of n in the array A (say m and n).
First (using count_in_array() )you should check whether there are at least two occurrences 
of n in the array; if not return -1 (and exit).
If there are at least two (using first_index() and last_index() ) find m and n (n > m > 0).
If (n-m) <= 2 there is nothing to reverse (that part is already symmetric), return 0 (and exit)
Otherwise (using reverse_array() )reverse that part, return 1 (and exit).
Write the main function to test partial_reverse(int A[], int size, int n).
<img src="1.png" width="128"/>
