#ifndef _GIGANTES_H
#define _GIGANTES_H

void init_gigant_value(mpf_t gigante, char *s) {
    mpf_set_str(gigante, s, 10);
}

void sumar_gigante(mpf_t gigante, char *str) {
    mpf_t _temporal;
    mpf_init(_temporal);
    mpf_set_str(_temporal, str, 10);
    mpf_add(gigante, gigante, _temporal);
    mpf_clear(_temporal);
}

void restar_gigante(mpf_t gigante, char *str) {
    mpf_t _temporal;
    mpf_init(_temporal);
    mpf_set_str(_temporal, str, 10);
    mpf_sub(gigante, gigante, _temporal);
    mpf_clear(_temporal);
}

void multiplicar_gigante(mpf_t gigante, char *str) {
    mpf_t _temporal;
    mpf_init(_temporal);
    mpf_set_str(_temporal, str, 10);
    mpf_mul(gigante, gigante, _temporal);
    mpf_clear(_temporal);
}

void dividir_gigante(mpf_t gigante, char *str) {
    mpf_t _temporal;
    mpf_init(_temporal);
    mpf_set_str(_temporal, str, 10);
    mpf_div(gigante, gigante, _temporal);
    mpf_clear(_temporal);
}

void negar_gigante(mpf_t gigante, char *str) {
    mpf_t _temporal;
    mpf_init(_temporal);
    mpf_set_str(_temporal, str, 10);
    mpf_neg(gigante, _temporal);
    mpf_clear(_temporal);
}

void abs_gigante(mpf_t gigante, char *str) {
    mpf_t _temporal;
    mpf_init(_temporal);
    mpf_set_str(_temporal, str, 10);
    mpf_abs(gigante, _temporal);
    mpf_clear(_temporal);
}

/*declare_g(g.lkaksldlksad.g, 6734578637485534);*/

#endif
