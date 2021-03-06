#include "../../includes/com.h"

void		parse_str(char **buf)
{
	char	*pnt;

	pnt = skip_comment(*buf);////CHECK NEWLINE
	g_rnum = 0;
	if (*pnt != '\0')
	{
		if (*pnt == '.' || g_data->name_f == 1 || g_data->comm_f == 1)
		{
			add_header(pnt);
		}
		else
		{
			pnt = skip_space(*buf);//
			g_rnum += (pnt - *buf);///x++
			printf("G_RNUM = %zu\n", g_rnum);
			search_op(pnt);
		}
	}
	else
		return ;
}

void	parse_file(int fd_s)
{
	char	*buf;
	int		size;

	g_snum = 0;

	while ((size = get_next_line(fd_s, &buf)) > 0)
	{
		printf("get_%s\n", buf);
		parse_str(&buf);
		g_snum++;
		printf("NUM_STR = %ld\n", g_snum);
		ft_strdel(&buf);
	}
	if (size == -1)
		error_event(ERR_READING);
}
