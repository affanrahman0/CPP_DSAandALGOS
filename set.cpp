#include <iostream>
#include <iterator>
#include <set>
 
using namespace std;
 
int main()
{
    // empty set container
    set<int,greater<int> > s1;
 
    // insert elements in random order
    s1.insert(40);
    s1.insert(30);
    s1.insert(60);
    s1.insert(20);
    s1.insert(50);
     
    // int i : s1; 
    // only one 50 will be added to the set
    s1.insert(50);
    s1.insert(10);
 
    // printing set s1
    set<int, greater<int> >::iterator itr;
    cout << "\nThe set s1 is : \n";
    for (itr = s1.begin(); itr != s1.end(); itr++)
    {
        cout << *itr<<" ";
    }
    cout << endl;
 
    // assigning the elements from s1 to s2
    set<int> s2(s1.begin(), s1.end());
 
    // print all elements of the set s2
    cout << "\nThe set s2 after assign from s1 is : \n";
    for (itr = s2.begin(); itr != s2.end(); itr++)
    {
        cout << *itr<<" ";
    }
    cout << endl;
 
    // remove all elements up to 30 in s2
    cout
        << "\ns2 after removal of elements less than 30 :\n";
    s2.erase(s2.begin(), s2.find(30));
    for (itr = s2.begin(); itr != s2.end(); itr++) {
        cout <<*itr<<" ";
    }
 
    // remove element with value 50 in s2
    int num;
    num = s2.erase(50);
    cout << "\ns2.erase(50) : ";
    cout << num << " removed\n";
    for (itr = s2.begin(); itr != s2.end(); itr++)
    {
        cout <<*itr<<" ";
    }
 
    cout << endl;
 
    // lower bound and upper bound for set s1
    cout << "s1.lower_bound(40) : \n"
         << *s1.lower_bound(40)
         << endl;
    cout << "s1.upper_bound(40) : \n"
         << *s1.upper_bound(40)
         << endl;
 
    // lower bound and upper bound for set s2
    cout << "s2.lower_bound(40) :\n"
         << *s2.lower_bound(40)
         << endl;
    cout << "s2.upper_bound(40) : \n"
         << *s2.upper_bound(40)
         << endl;
 
    return 0;
}

// C++ program to demonstrate various function of unordered_set
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	// declaring set for storing string data-type
// 	unordered_set <string> stringSet ;

// 	// inserting various string, same string will be stored
// 	// once in set

//     int i = 9;
//     string str = "hello"+ to_string(i);

//     stringSet.insert(str) ;
// 	stringSet.insert("code") ;
// 	stringSet.insert("in") ;
// 	stringSet.insert("c++") ;
// 	stringSet.insert("is") ;
// 	stringSet.insert("fast") ;

// 	string key = "slow" ;

// 	// find returns end iterator if key is not found,
// 	// else it returns iterator to that key

// 	if (stringSet.find(key) == stringSet.end())
// 		cout << key << " not found" << endl << endl ;
// 	else
// 		cout << "Found " << key << endl << endl ;

// 	key = "c++";
// 	if (stringSet.find(key) == stringSet.end())
// 		cout << key << " not found\n" ;
// 	else
// 		cout << "Found " << key << endl ;

// 	// now iterating over whole set and printing its
// 	// content
// 	cout << "\nAll elements : ";
// 	unordered_set<string> :: iterator itr;
// 	for (itr = stringSet.begin(); itr != stringSet.end(); itr++)
// 		cout << (*itr) << endl;
// }
// C program to find first
// non-repeating character
// #include <stdio.h>
// #include <stdlib.h>
// #define NO_OF_CHARS 256

// /* Returns an array of size 256 containing count
// of characters in the passed char array */
// int* getCharCountArray(char* str)
// {
// 	int* count = (int*)calloc(sizeof(int), NO_OF_CHARS);
// 	int i;
// 	for (i = 0; *(str + i); i++)
// 		count[*(str + i)]++;
// 	return count;
// }

// /* The function returns index of first
// non-repeating character in a string. If all
// characters are repeating then returns -1 */
// int firstNonRepeating(char* str)
// {
// 	int* count = getCharCountArray(str);
// 	int index = -1, i;

// 	for (i = 0; *(str + i); i++) {
// 		if (count[*(str + i)] == 1) {
// 			index = i;
// 			break;
// 		}
// 	}

// 	// To avoid memory leak
// 	free(count);
// 	return index;
// }

// /* Driver program to test above function */
// int main()
// {
// 	char str[] = "geeksforgeeks";
// 	int index = firstNonRepeating(str);
// 	if (index == -1)
// 		printf("Either all characters are repeating or "
// 			"string is empty");
// 	else
// 		printf("First non-repeating character is %c",
// 			str[index]);
// 	getchar();
// 	return 0;
// }
