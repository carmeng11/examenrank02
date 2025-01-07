typedef struct s_papa
{
	int		a;
	struct s_papa	*next;
	char	c;
}				t_papa;

int	main()
{
	t_papa	hola;
	t_papa	*adios;

	adios = malloc(sizeof(t_papa));
	hola.a = 42;
	adios->a = 24;


	return (0);
}
// estructura que se ponia en funciones de la libft
typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;


//estructura incluida en función de examen sort_list
typedef struct s_list t_list;

struct s_list
{
	int     data;
	t_list  *next;
};

