// #include "get_next_line_bonus.h"
// #include "get_next_line.h"

// int main(void)
// {
// 	char *line1;
// 	char *line2;
//     int fdv1 = open("albert_einstein.txt", O_RDONLY);
//     int fdv2 = open("plato.txt", O_RDONLY);
//     printf("\n\n\n");
//     for(int i = 1;i <= 10;i++)
//     {
//         line1 = get_next_line(fdv1);
//         line2 = get_next_line(fdv2);
//         printf("albert line %d->%s", i, line1);
//         printf("plato line%d->%s", i, line2);
//         free(line1);
//         free(line2);
//     }
//     close(fdv1);
//     close(fdv2);

//     return (0);
// }



// int	main(void)
// {
// 	char *line;
// 	// int	fda = open("albert_einstein.txt", O_RDONLY);
// 	printf ("\n\n\n");
// 	for(int i = 1;i <= 100;i++){
// 		line = get_next_line(0);
// 		printf("ALBERT line number %d-> %s", i, line);
// 		free(line);
// 	}
// 	// close(fda);
// 	return (0);
// }
