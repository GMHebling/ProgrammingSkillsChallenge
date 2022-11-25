#include <stdio.h>
#include <string.h>

int ConcatRemove(char *s, char *t, int k){
    int s_len = strlen(s); 
    int t_len = strlen(t);

    int n_diff = 0;

    int min_ops = 0;

    int i;

    if (s_len >= t_len){
        // no minimo são necessarias (s_len - t_len) operacoes de remocao de caracteres da string s
        min_ops += (s_len - t_len);
        // conta o numero de caracteres diferentes na menor string
        for (i = 0; i < t_len; i++){
            if (s[i] != t[i]){
                n_diff += 1;
            }
        }

    }
    else {
        // no minimo são necessarias (t_len - s_len) operacoes de concatenacao de caracteres da string t, na s
        min_ops += (t_len - s_len);
        // conta o numero de caracteres diferentes na menor string
        for (i = 0; i < s_len; i++){
            if (s[i] != t[i]){
                n_diff += 1;
            }
        }
    }

    // para cada caracter diferente entre s e t, até o menor tamanho, sao adicionadas duas operacoes (uma de remocao e uma de concatenacao)
    // portanto, k operacao sao suficientes se k > min_ops + 2*n_diff
    if (k < min_ops + 2*n_diff){
        return 1;
    }
    else {
        return 0;
    }

}

int main () {
    char s[] = "blablablabla";
    char t[] = "blablabcde";

    int result = 0;

    result = ConcatRemove(s, t, 7);
    if (result == 0){
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    return 1;
}