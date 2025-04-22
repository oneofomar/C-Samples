/* Author: Omar Al Murazza
   Pennstate ID:  955418033
   Date: 02/12/2025
    */
    
    
    
/***
 *      ______ .___  ___. .______     _______.  ______              ____    __   __  
 *     /      ||   \/   | |   _  \   /       | /      |            |___ \  /_ | /_ | 
 *    |  ,----'|  \  /  | |  |_)  | |   (----`|  ,----'              __) |  | |  | | 
 *    |  |     |  |\/|  | |   ___/   \   \    |  |                  |__ <   | |  | | 
 *    |  `----.|  |  |  | |  |   .----)   |   |  `----.             ___) |  | |  | | 
 *     \______||__|  |__| | _|   |_______/     \______|            |____/   |_|  |_| 
 *                                                                                   
 */



#include "student.h"
#include <stdbool.h>




// Takes an array of integers and the length of the array as input, and returns the smallest positve integer in the array. Return 0 otherwise
int smallest_pos(int *array, int length) {
	  // Initialize minimum to -1
	  int minimum = -1;

	  // Traverse through the array to find the smallest positive integer
	  for (int i = 0; i < length; i++) {
		  if (array[i] > 0 && (minimum == -1 || array[i] < minimum)) {
			  minimum = array[i];
		  }
	  }
  
	  // If no positive number was found, return 0
	  if (minimum == -1) {
		  return 0;
	  }
	  return minimum;
	}
	
// Takes an array of integers, the length of the array and integer k as input, and returns the sum of the integers mod k in the array.
int sum_modulo(int *array, int length, int k)  {
	int total = 0;

	for (int i = 0; i<length; i++){
			if (array[i] < 0){
				total += (array[i]%k)+k;
			}
			else{
				total += array[i]%k;
			}
		
		}

	return total;
	}
		

//  Rotates the values of a, b, and c once in a clockwise direction.
void rotate(int *a, int *b, int *c){
	// Function Body
	int tmp = *a;
	*a = *c;
	*c = *b;
	*b = tmp;

	}

// Sorts an array in descending order 
void sort(int *array, int length){
	int temp;
    for (int i = 0; i < length-1; i++) {  
        for (int j = 0; j < length-1-i; j++) {  
			// Compare adjacent elements
            if (array[j] < array[j+1]) {
            // Swap if elements are in the wrong order
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}
	
//Takes an apartment number (int) and returns: 
//0 if the apartment belongs to Building 0 (0-99), 
//1 if it belongs to Building 1 (100-199), 
//2 if it belongs to building 2 (200-299) 
//-1 for invalid apartment numbers (outside 0-299).
int find_building(int apartmentNumber){
	//Check if number in 0-99
	if (apartmentNumber >= 0 && apartmentNumber <= 99){
		return 0;
	}
	//Check if number in 100-199
	else if(apartmentNumber >= 100 && apartmentNumber <= 199){
		return 1;
	}
	//Check if number in 200-299
	else if(apartmentNumber >= 200 && apartmentNumber <= 299){
		return 2;
	}
	//if number invalid
	else {
		return -1;
	}
	}
	

// Takes an array of integers and the length of the array as input and cubes every positive element of the array that is an Armstrong number. 
void cube_armstrongs(int *array, int length) {
	// Function Body
	for (int i = 0; i < length; i++){
		//Checks if it is positive and if it is a double_spy
		if (array[i] > 0 && is_armstrong(array[i])){
			array[i] = find_power(array[i],3);
		}
	}
}

	
//Take an array of integers and length of the array as input and double every spy number of that array
void double_spy(int *array, int length){
	// Function Body
	for (int i = 0; i < length; i++){
		//Checks if it is positive and if it is a double_spy
		if (array[i] > 0 && is_double_spy(array[i])){
			array[i] *= 2;
		}
	}
	}

//Take a number and return its second bit from the right in its binary form 
int second_bit(int num){
	num >>= 1; 
	return num % 2;

	}

//Helper function finds the power of a number
int find_power(int n, int p){
	int result = 1;
	for (int i = 0; i < p; i++){
		result *= n;
	}
	return result;
}

//Helper Function for double_spy
bool is_double_spy(int n){
	int sum = 0;
	int product = 1;
	while (n > 0) {
        int digit = n % 10;  // Get the last digit
        sum += digit;       //Calculate sum
		product *= digit;  // Calculate Product
        n = n / 10;         // Remove the last digit
    }

	return sum == product;
}

//Helper Function for cube_armstrong
bool is_armstrong(int n){
	//number of digits
	int tmp = n;
	int digit_num = 0;
	int total = 0;

	while (tmp > 0) {
        digit_num += 1;  //calculate how many digits
        tmp = tmp / 10;         // Remove the last digit
    }
	tmp = n;
	while (tmp > 0) {
        int digit = tmp % 10;  // Get the last digit
        total += find_power(digit,digit_num); // Calculate Product
        tmp = tmp / 10;         // Remove the last digit
    }
	return total == n;
}



/*CWD /home/cmpsc311/Desktop/Labs/Test Labs/Lab1 */
/*CWD /home/cmpsc311/sp25-lab1-oneofomar */
/*CWD /home/cmpsc311/sp25-lab1-oneofomar */
/*CWD /home/cmpsc311/sp25-lab1-oneofomar */
/*CWD /home/cmpsc311/sp25-lab1-oneofomar */
/*CWD /home/cmpsc311/sp25-lab1-oneofomar */
/*CWD /home/cmpsc311/sp25-lab1-oneofomar */
/*CWD /home/cmpsc311/sp25-lab1-oneofomar */
