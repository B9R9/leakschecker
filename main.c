
#include "leakschecker.h"

int	main(void)
{
	int	*tablo;
	
	printf("ADRESSE DE TABLO BEFORE MALLOC : %p\n", tablo);
	memory_init();
	tablo = memory_alloc(sizeof(int) * 5 + 1);
	printf("ADRESSE OF TABLO : %p\n", tablo);
	memory_free(tablo, sizeof(int) * 5 + 1);
	memory_check();
	return (0);
}
