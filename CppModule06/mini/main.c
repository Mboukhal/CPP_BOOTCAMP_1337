#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

size_t strLen( char *s ) {
	int i = 0;
	while (s[i++]);
	return i;
}

void cdBuilt( char* cmd ) {
	chdir( cmd );
}

char **copyArg( int ac, char **av ) {
	char **cmd;
	cmd = malloc( (ac + 1) * sizeof(char *) );
	if ( !cmd )
		exit ( EXIT_FAILURE );
	int i = 0;
	while ( i < ac )
	{
		cmd[i] = malloc( sizeof( char ) * ( strLen( av[i] ) + 1 ) );
		int s = 0;
		while ( av[i][s] ){
			cmd[i][s] = av[i][s];
			s++;
		}
		cmd[i][s] = '\0';
		i++;
	}
	cmd[i] = NULL;
	return cmd;
}
void freeCopyArg ( char** cmd) {
	int i = 0;
	while ( cmd[i] )
	{
		free(cmd[i]);
		i++;
	}
	free(cmd);
}

void startShell( int ac, char** av ){
		
	// for ( int i = 0; x[i]; i++ ){
	// 	printf("x[%d]:\t%s\n", i, x[i] );
	// }
	char **x = copyArg( ac, av );
	int t = 1;
	printf("==>'%d', '%c', '%p'\n", x[0][strLen(x[0]) - t], x[0][strLen(x[0]) - t], &x[0][strLen(x[0]) - t] );
	// printf("==>'%d', '%c'\n", x[0][strLen(x[0]) - t], x[0][strLen(x[0]) - t] );

	freeCopyArg(x);
}

int main( int ac, char** av ) {
	printf ( "%zu\n", strLen( av[0] ) );
	if ( ac > 1 ) {
		printf( "%s\n", av[1] );
		startShell( ac, av );
		// system( "leaks microshell" );
		return 0;
	}
	fprintf( stderr, "Erorr!\n" );
	return 1;
}