int main()
{
	int x;
	int i = 4;
	int *ptr1, *ptr2;
      
	ptr1 = &i;
	ptr2 = &i;

	// Incrementing ptr2 by 3
	ptr2 = ptr2 + 3;

	// Subtraction of ptr2 and ptr1
	x = ptr2 - ptr1;

	// Print x to get the Increment between ptr1 and ptr2
	printf("Subtraction of ptr1 & ptr2 is %d\n",x);

	return 0;
}
