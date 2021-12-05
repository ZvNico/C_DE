#include <stdio.h>
#include <string.h>

void init_articles(char **tab_a, double *tab_p, int *tab_q, int taille) {
    for (int i = 0; i < taille; i++) {
        printf("Saisissez le code de l'article");
        scanf("%s", tab_a[i]);
        printf("Saisissez le prix de l'article");
        scanf("%lf", &tab_p[i]);
        printf("Saisissez la quantité en stock de l'article");
        scanf("%d", &tab_q[i]);
    }
}

void display_articles(char **tab_a, double *tab_p, int *tab_q, int taille) {
    for (int i = 0; i < taille; i++) {
        printf("Article n°%s\n\tprix: %lf\n\tquantite: %d", tab_a[i], tab_p[i], tab_q[i]);
    }
}

int suprimmer_article(char **tab_a, double *tab_p, int *tab_q, int taille, char *a) {
    for (int i = 0; i < taille; ++i) {
        if (strcmp(tab_a[i], a) == 0) {
            for (int j = i; j < taille - 1; ++j) {
                strcpy(tab_a[j], tab_a[j + 1]);
                tab_p[j] = tab_p[j + 1];
                tab_q[j] = tab_q[j + 1];
            }
            tab_a[taille - 1] = "";
            tab_p[taille - 1] = 0;
            tab_q[taille - 1] = 0;
            return 1;
        }
    }
    return -1;
}

int easy_suprimmer_article(char **tab_a, double *tab_p, int *tab_q, int taille, char *a) {
    for (int i = 0; i < taille; ++i) {
        if (strcmp(tab_a[i], a) == 0) {
            tab_a[i] = "";
            tab_p[i] = 0;
            tab_q[i] = 0;
            return 1;
        }
    }
    return -1;
}

void ajouter_article(char **tab_a, double *tab_p, int *tab_q, char *a, double p, int q) {
    int i;
    for (i = 0; tab_a[i]; ++i) {
    }
    strcpy(tab_a[i], a);
    tab_q[i] = q;
    tab_p[i] = p;
}

void afficher_max_article(char **tab_a, double *tab_p, int taille) {
    int max = 0;
    for (int i = 0; i < taille; ++i) {
        if (tab_p[max] < tab_p[i]) {
            max = i;
        }
    }
    printf("Article au prix le plus grand: %s", tab_a[max]);
}

#define MAX 100

int main() {
    char tab_a[MAX][10];
    double tab_p[MAX];
    int tab_q[MAX];
    int choix;
    init_articles(tab_a, tab_p, tab_q, MAX);
    do {
        do {
            printf("menu :\n\t(1) Ajouter article\n\t(2) quitter");
            scanf("%d", &choix);
        } while (choix != 1 && choix != 2);
        switch (choix) {
            case 1:
                break;
        }
    } while (choix != 2);
    return 0;
}
