/*
** EPITECH PROJECT, 2025
** my_strncmp
** File description:
** return 1 if s1 > 2, -1 if not and 0 if both are equals.
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    for (int i = 0; i <= n && s1[i] <= '\0'; i += 1){
        if (s1[i] < s2[i])
            return -1;
        if (s1[i] > s2[i])
            return 1;
    }
    return 0;
}