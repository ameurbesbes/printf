#ifndef HEADER_FILE
#define HEADER_FILE
typedef struct op_s {
	char *c;
	int(*f)(va_list);
} op_t

int _printf(const char *format, ...);
#endif

