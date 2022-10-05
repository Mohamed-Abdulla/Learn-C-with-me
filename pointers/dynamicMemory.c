//*Dynamic memory allocation in C
//*The concept of dynamic memory allocation in c language enables the C programmer to allocate memory at runtime.
//*Dynamic memory allocation in c language is possible by 4 functions of stdlib.h header file.

//?static memory allocation	                            dynamic memory allocation

//?memory is allocated at compile time. 	            memory is allocated at run time.
//?memory can't be increased while executing program.	memory can be increased while executing program.
//?used in array.	                                    used in linked list.

//?Now let's have a quick look at the methods used for dynamic memory allocation.

//?malloc()	allocates single block of requested memory.
//?calloc()	allocates multiple block of requested memory.
//?realloc()	reallocates the memory occupied by malloc() or calloc() functions.
//?free()	frees the dynamically allocated memory.