#include "s21_string.h"

int s21_sprintf(char *str, const char *format, ...) {
    char* begin_str = str;
    s21_sprint *tab;
    tab = calloc(1, sizeof(s21_sprint));
    va_start(tab->point, format);
    while (*format != '\0') {
        if (*format == '%') {
            format++;
            if (*format == '%') {
                *str = *format;
                str++;
                *str = '\0';
            } else {
                format += s21_sprintf_init(format, tab);
                s21_size_t step = s21_spec_iniciliation(str, format, tab);
                if (step == 0 && *format == 'c') {
                    format += s21_strlen(format) - 1;
                } else {
                    str += step;
                }
            }
        } else {
            *str = *format;
            str++;
            *str = '\0';
        }
        format++;
    }
    free(tab);
    return (int)s21_strlen(begin_str);
}

s21_size_t s21_spec_iniciliation(char* str, const char* format, s21_sprint* tab) {
    char* buf = S21_NULL;
    buf = (char*)calloc(tab->weight, 1024);
    char* start = buf;
    s21_size_t len = 0;
    if (*format == 'u') {
        tab->checker = 1;
        tab->plus = 0;
    }
    switch (*format) {
    case 'c':
        s21_sprintf_c(buf, tab);
        break;
    case 's':
        s21_sprintf_s(buf, tab);
        break;
    case 'u':
    case 'd':
    case 'i':
        if (tab->checker == 0) {
            s21_lengh_d(tab);
        } else if (tab->checker == 1) {
            s21_lengh_u(tab);
        }
        s21_sprintf_d(buf, tab);
        break;
    case 'f':
        s21_sprintf_f(buf, tab);
        break;
    }
    len = s21_strlen(buf);
    buf = start;
    s21_memcpy(str, buf, len);
    str += len;
    *str = '\0';
    free(buf);
    return len;
}

char* s21_sprintf_f(char* buf, s21_sprint* tab) {
    char* start = buf;
    tab->num_double = va_arg(tab->point, double);
    long double num = tab->num_double;
    if (num * (-1.0) >= 0.0) {
        tab->sp = 0;
        num = -num;
        *buf = '-';
        buf++;
        *buf = '\0';
    }

    if (tab->plus == 1 && tab->num_double >= 0) {
        *buf = '+';
        buf++;
        *buf = '\0';
    }

    if (tab->precision_dot != 1) {
        long double r = 0, l = 0;
        r = modfl(num, &l);
        unsigned long long l1 = roundl(l);
        char l_str[512] = {'\0'};
        s21_itoa(l_str, l1);
        s21_strcat(buf, l_str);
        s21_strcat(buf, ".\0");
        int null_counter = 0;
        if (tab->precision == 0) tab->precision = 6;
        for (int i = 0; i < tab->precision; i++) {
            r *= 10;
            if ((int)r == 0) null_counter++;
        }
        if (null_counter > 0) {
            for (int i = 0; i < null_counter; i++) {
                s21_strcat(buf, "0");
            }
            tab->precision -= null_counter;
        }
        unsigned long long r1 = round(r);
        char* r_str = (char*)calloc(1024, sizeof(r1));
        s21_itoa(r_str, r1);
        s21_strncat(buf, r_str, tab->precision);
        free(r_str);
    } else {
        unsigned long long a = roundl(num + 0.05);
        char astr[512] = {'\0'};
        s21_itoa(astr, a);
        s21_strcat(buf, astr);
    }
    buf = start;
    if (tab->sp == 1 && tab->num_double >= 0 && tab->plus == 0) {
        s21_transfer(buf, 32);
    }
    s21_f_spaces(buf, tab);
    return buf;
}

void* s21_f_spaces(char* buf, s21_sprint* tab) {
    if (tab->minus == 1) {
        for (s21_size_t i = s21_strlen(buf); (int)i < tab->weight; i++) {
            s21_strcat(buf, " \0");
        }
    } else {
        for (s21_size_t i = s21_strlen(buf); (int)i < tab->weight; i++) {
            s21_transfer(buf, 32);
        }
    }
    return (buf);
}

void s21_lengh_u(s21_sprint* tab) {
    if (tab->length == 'h') {
        tab->num_u = (unsigned short)va_arg(tab->point, unsigned long long);
    } else if (tab->length == 'l') {
        tab->num_u = va_arg(tab->point, unsigned long);
    } else {
        tab->num_u = (unsigned int)va_arg(tab->point, unsigned long long);
    }
}

void s21_lengh_d(s21_sprint* tab) {
    if (tab->length == 104) {
        tab->num_int = (short)va_arg(tab->point, int);
    } else if (tab->length == 108) {
        tab->num_int = va_arg(tab->point, long int);
    } else {
        tab->num_int = va_arg(tab->point, int);
    }
}

char* s21_sprintf_d(char* buf, s21_sprint* tab) {
    char* start_buf = buf;
    *buf = '\0';
    long long int num = 0;
    if (tab->checker == 1) {
        num = tab->num_u;
    } else {
        num = tab->num_int;
    }

    if (tab->precision_dot == 1 && num == 0) {
        *buf = '\0';
    } else {
        s21_itoa(buf, num);
    }

    char* start = buf;
    if (num < 0) {
        buf++;
    }
    if (tab->plus == 1 && num >= 0) {
        s21_transfer(buf, 43);
        buf++;
    }
    for (size_t i = s21_strlen(buf); (int)i < tab->precision; i++) {
        s21_transfer(buf, 48);
    }
    buf = start;
    if (tab->minus == 1) {
        for (size_t i = s21_strlen(start); (int)i < tab->weight; i++) {
            buf[i] = 32;
            buf[i + 1] = '\0';
        }
    } else {
        for (s21_size_t i = s21_strlen(buf); (int)i < tab->weight; i++) {
            s21_transfer(buf, 32);
        }
    }

    buf = start_buf;
    if (tab->sp == 1 && tab->plus == 0 && tab->num_int >= 0
    && tab->checker == 0 && tab->weight < (int)s21_strlen(buf)) {
        s21_transfer(buf, ' ');
    }

    return buf;
}

char* s21_sprintf_s(char* buf, s21_sprint* tab) {
    *buf = '\0';
    char* transmission = (char*)calloc(tab->weight, 1024);
    char* start_tr = transmission;
    transmission = (char*)va_arg(tab->point, char*);

    if (transmission == S21_NULL) {
        s21_strcpy(buf, "(null)");
        transmission = buf;
    }

    char* starter = buf;
    if (tab->precision_dot == 0) {
        if (tab->precision > (int)s21_strlen(transmission)) {
            tab->precision = s21_strlen(transmission);
            s21_strncpy(buf, transmission, tab->precision);
        } else if (tab->precision > 0 && tab->precision < (int)s21_strlen(transmission)) {
            s21_strncpy(buf, transmission, tab->precision);
        } else {
            s21_strncpy(buf, transmission, s21_strlen(transmission));
        }
    }
    if (tab->minus == 0) {
        buf = starter;
        for (s21_size_t i = s21_strlen(buf); (int)i < tab->weight; i++) {
            s21_transfer(buf, 32);
        }
    } else if (tab->minus == 1) {
        if (tab->weight != 0) {
            for (s21_size_t i = s21_strlen(starter); (int)i < tab->weight; i++) {
                s21_strcat(buf, " \0");
            }
        }
    }
    buf = starter;
    transmission = start_tr;
    free(transmission);
    return buf;
}


char* s21_sprintf_c(char* buf, s21_sprint* tab) {
    char ch = va_arg(tab->point, int);
    if (ch != 0) {
        char* starter = buf;
        if (tab->minus == 1) {
            *buf = ch;
            buf++;
            *buf = '\0';
            for (s21_size_t i = 0; (int)i < tab->weight - 1; i++) {
                *buf = 32;
                buf++;
                *buf = '\0';
            }
        } else if (tab->minus == 0) {
            *buf = ch;
            buf++;
            *buf = '\0';
            buf = starter;
            for (s21_size_t i = 0; (int)i < tab->weight - 1; i++) {
                s21_transfer(buf, 32);
            }
        }
        buf = starter;
    } else if (tab->minus == 0) {
        while (tab->weight > 1) {
            *buf = 32;
            buf++;
            tab->weight--;
        }
    }
    return buf;
}

s21_size_t s21_sprintf_init(const char* format, s21_sprint* tab) {
    char* spn = S21_NULL;
    spn = (char*)calloc(32, 4);
    *spn = '\0';
    s21_strncpy(spn, format, s21_strcspn(format, SPEC));
    s21_size_t len_spn = s21_strlen(spn);
    s21_tab_null(tab);
    while (*spn != '\0') {
        if (*spn == ' ') {
            tab->sp = 1;
        } else if (*spn == '-') {
            tab->minus = 1;
        } else if (*spn == '+') {
            tab->plus = 1;
        } else if (*spn == '.') {
            spn++;
            s21_found_intstr(spn, &tab->precision);
            if (tab->precision == 0) {
                tab->precision = 0;
                tab->precision_dot = 1;
            }
            spn += s21_strspn(spn, NUMBERS) - 1;
        } else if (*spn >= '1' && *spn <= '9') {
            s21_found_intstr(spn, &tab->weight);
            spn += s21_strspn(spn, NUMBERS) - 1;
        } else if (*spn == 'l' || *spn == 'h') {
            tab->length = (int)*spn;
        }
        spn++;
    }
    spn -= len_spn;
    free(spn);
    return len_spn;
}

void* s21_found_intstr(char* spn, int* num) {
    char* ch = S21_NULL;
    ch = (char*)calloc(s21_strspn(spn, NUMBERS), 256);
    s21_strncpy(ch, spn, s21_strspn(spn, NUMBERS));
    *num = s21_atoi(ch);
    free(ch);
    return (spn);
}

s21_sprint* s21_tab_null(s21_sprint *tab) {
    tab->num_int = 0;  // +
    tab->num_u = 0;
    tab->num_double = 0.0;  // +
    tab->minus = 0;  // +
    tab->plus = 0;  // +
    tab->sp = 0;  // +
    tab->weight = 0;  // +
    tab->precision_dot = 0;  // +
    tab->precision = 0;  // +
    tab->checker = 0;
    tab->length = 0;  // +
    return tab;
}

void* s21_reverse(char* str) {
    for (s21_size_t i = 0, j = s21_strlen(str) - 1; i < j; i++, j--) {
        int ch = str[i];
        str[i] = str[j];
        str[j] = ch;
    }
    return str;
}

void* s21_transfer(char* buf, char ch) {
for (s21_size_t i = s21_strlen(buf) + 1; i > 0; i--) {
        buf[i] = buf[i - 1];
    }
    buf[0] = ch;
    return(buf);
}

void* s21_itoa(char* str, long long int num) {
    if (num == 0) {
        *str = '0';
    } else if (num < 0) {
        num *= -1;
        *str = '-';
        str++;
        *str = '\0';
    }
    if (num != 0) {
        long long int num2 = num;
        char* begin = str;
        while (num2 > 0) {
            *str = (num2 % 10) + '0';
            num2 /= 10;
            str++;
            *str = '\0';
        }
        str = begin;
        s21_reverse(str);
    }
    return (str);
}

int s21_atoi(char* str) {
    s21_size_t len = s21_strlen(str);
    int res = 0;
    int n = 1;
    for (s21_size_t i = 0; i < len; i++) {
        n *= 10;
    }
    while (*str != '\0') {
        n /= 10;
        res += (*str - 48) * n;
        str++;
    }
    return res;
}
