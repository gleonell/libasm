#include <stdio.h>
#include <inttypes.h>
#include "libasm.h"

//int64_t maxofthree(int64_t, int64_t, int64_t);

// void check_strlen()
// {
// 	char *empty = "";
// 	char *hello_world = "Hello world !";
// 	char *alphabet = "abcdefghijklmnopqrstuvwxyz";

// 	printf("********* FT_STRLEN *********\n");
// 	printf("%-15s: \"%s\"\n", "char *", empty);
// 	printf("%-15s: %zu\n", "original", strlen(empty));	
// 	printf("%-15s: %zu\n", "copy", ft_strlen(empty));
// 	printf("\n");
// 	printf("%-15s: \"%s\"\n", "char *", hello_world);
// 	printf("%-15s: %zu\n", "original", strlen(hello_world));	
// 	printf("%-15s: %zu\n", "copy", ft_strlen(hello_world));
// 	printf("\n");
// 	printf("%-15s: \"%s\"\n", "char *", alphabet);
// 	printf("%-15s: %zu\n", "original", strlen(alphabet));	
// 	printf("%-15s: %zu\n", "copy", ft_strlen(alphabet));
// 	printf("\n");
	
// 	// ------- NULL = SEGFAULT
// 	// printf("%-20s: \"%s\"\n", "char *", alphabet);
// 	// printf("%-20s: 0\n", "expected lenght");
// 	// printf("%-20s: %zu\n", "libc", strlen(NULL));	
// 	// printf("%-20s: %zu\n", "libasm", ft_strlen(NULL));
// 	// printf("\n");
// }

void check_strcmp()
{
	char *empty = "";
	char *hello_world = "Hello world !";
	char *hello_human = "Hello human !";
	char *hello_world2 = "Hello world !";
	
	printf("\n================================\n");
	printf("========== FT_STRCMP ===========\n");
	printf("================================\n\n");
	printf("%-20s: \"%s\"\n", "char *", hello_world);
	printf("%-20s: \"%s\"\n", "compared to", hello_human);
	printf("%-20s: \"%d\"\n", "libc", strcmp(hello_world, hello_human));
	printf("%-20s: \"%d\"\n", "libasm", ft_strcmp(hello_world, hello_human));
	printf("\n");
	printf("%-20s: \"%s\"\n", "char *", hello_world);
	printf("%-20s: \"%s\"\n", "compared to", hello_world2);
	printf("%-20s: \"%d\"\n", "libc", strcmp(hello_world, hello_world2));
	printf("%-20s: \"%d\"\n", "libasm", ft_strcmp(hello_world, hello_world2));
	printf("\n");
	printf("%-20s: \"%s\"\n", "char *", hello_world2);
	printf("%-20s: \"%s\"\n", "compared to", empty);
	printf("%-20s: \"%d\"\n", "libc", strcmp(hello_world2, empty));
	printf("%-20s: \"%d\"\n", "libasm", ft_strcmp(hello_world2, empty));
	printf("\n");

	// ------- NULL = SEGFAULT
	// printf("%-20s: \"%s\"\n", "char *", hello_world2);
	// printf("%-20s: %s\n", "compared to", "NULL");
	// printf("%-20s: \"%d\"\n", "libc", strcmp(NULL, hello_world2));
	// printf("%-20s: \"%d\"\n", "libasm", ft_strcmp(NULL, empty));
	// printf("\n");
}

int main() {
    // printf("%ld\n", maxofthree(1, -4, -7));
    // printf("%ld\n", maxofthree(2, -6, 1));
    // printf("%ld\n", maxofthree(2, 3, 1));
    // printf("%ld\n", maxofthree(-2, 4, 3));
    // printf("%ld\n", maxofthree(2, -6, 5));
    // printf("%ld\n", maxofthree(2, 4, 6));
   // check_strlen();
    check_strcmp();
    return 0;
}