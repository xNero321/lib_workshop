/*
** EPITECH PROJECT, 2017
** my_strcomp.c
** File description:
** Strcop
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && i < n && s1[i] == s2[i]) {
		i++;
	}
	return (s1[i] - s2[i]);
}
