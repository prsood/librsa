#define	MAXDIGITS	100		/* maximum length bignum */ 

#define PLUS		1		/* positive sign bit */
#define MINUS		-1		/* negative sign bit */

typedef struct {
        char digits[MAXDIGITS]; /* represent the number */
		int signbit;			/* 1 if positive, -1 if negative */ 
        int lastdigit;			/* index of high-order digit */
} bignum;

void print_bignum(bignum *n);
void int_to_bignum(int s, bignum *n);
void str_to_bignum(char * s, bignum *n);
void initialize_bignum(bignum *n);
int max(int a, int b);
void add_bignum(bignum *a, bignum *b, bignum *c);
void subtract_bignum(bignum *a, bignum *b, bignum *c);
int compare_bignum(bignum *a, bignum *b);
void zero_justify(bignum *n);
void digit_shift(bignum *n, int d);
void multiply_bignum(bignum *a, bignum *b, bignum *c);
void divide_bignum(bignum *a, bignum *b, bignum *c);