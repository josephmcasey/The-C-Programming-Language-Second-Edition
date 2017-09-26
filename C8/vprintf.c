#include <stdio.h>
#include <stdarg.h>

int vfprintf(FILE *fp, char *fmt, ...)
{
	va_list ap;   /* points to each unnamed arg in turn */
	char *p, *sval;
	int ival;
	double dval;

	va_start(ap, fmt); /* make ap point to 1st unnamed arg */
	for (p = fmt; *p; p++) {
		if (*p != '%') {
			putc(*p, fp);
			continue;
		}
		switch (*++p) {
		case 'd':
			ival = va_arg(ap, int);
			fprintf(fp, "%d", ival);
			break;
		case 'f':
			dval = va_arg(ap, double);
			fprintf(fp, "%f", dval);
			break;
		case 's':
			for (sval = va_arg(ap, char *); *sval; sval++)
				putc(*sval, fp);
			break;
		default:
			putc(*p, fp);
			break;
		}
	}
	va_end(ap);   /* clean up when done */
}
