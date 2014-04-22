#ifndef LIB_H_
# define LIB_H_

void	*xmalloc(int size);
void	**amalloc(int size, int size_x, int size_y);
void	**xamalloc(int size, int size_x, int size_y);
void	afree(void **ptr, int size_x);
int	my_getnbr(char*);
void	my_putchar(char);
void	my_putnbr(int);
void	my_putstr(char*);
int	my_stw_isletter(char c);
char*	my_stw_getwordid(char* str, int id);
int	my_stw_countword(char*);
char**	my_str_to_wordtab(char*);

#endif
