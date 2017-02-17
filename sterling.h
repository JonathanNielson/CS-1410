struct sterling {
	int pounds;
	int shillings;
	int pence;
};

sterling make_sterling(int po, int sh, int pe);
sterling make_sterling(int pe);
sterling add(sterling st1, sterling st2);
void print(sterling& st);
void read(sterling* st);
