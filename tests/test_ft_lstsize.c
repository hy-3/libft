#include <stdio.h>

#include "../libft.h"

int	main(void)
{
	char *content_a = "aaa";
	t_list *a = ft_lstnew(content_a);

	char *content_b = "bbb";
	t_list *b = ft_lstnew(content_b);
	
	ft_lstadd_front(&a, b);
	
	char *content_c = "ccc";
	t_list *c = ft_lstnew(content_c);
	
	ft_lstadd_front(&b, c);

	printf("%i\n", ft_lstsize(a));
	printf("%i\n", ft_lstsize(b));
	printf("%i\n", ft_lstsize(c));
	return (0);
}
