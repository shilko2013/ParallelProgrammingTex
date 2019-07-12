int t;
void swap(int *x, int *y) {
	int s;
	s = t; // save global variable
	t = *x;
	*x = *y;
	// hardware interrupt
	*y = t;
	t = s; // restore global variable
}
void interrupt_handler() {
	int x = 1, y = 2;
	swap(&x, &y);
}