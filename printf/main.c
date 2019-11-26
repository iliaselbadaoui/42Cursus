#include"ft_printf.h"

int main()
{
	int p;
	p = 0;
	// t_types t;
	// ft_init_types(&t);

	// t.s = "HELLO WORLD";
	//printf("%d",ft_printf("HELLO %p World",&p));
	// ft_printf("HELLO %x World",255);
	// printf("\nHELLO %x World",255);
	//ft_printf("%s",0);
	//ft_printf("%d",ft_printf("%u",UINT32_MAX));
	//printf("%x",-55);
	//ft_printf("ft => %p \n",0);
	//printf("org => %0050d",1);
	//printf("%d",ft_nb_length(UINT32_MAX));
	//ft_to_phex(16, &p);
	// printf("\n%d",p);
	//printf("%.2s","ILIAS");
	//ft_parse_conversion('s', t, &p);
	//ft_check_zeros('s', 120, &t, &p);
	//ft_putstr_fd(t.s, 1, t.zeros);
	printf("%d", ft_printf("%.*d",0,0));
	return (0);/*%050000*d*/
}