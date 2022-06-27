#include "s21_string.h"

void* s21_memchr(const void *s, int c, s21_size_t n) {
    unsigned char* s1 = (unsigned char*)s;
    int check = 0;
    while (n--) {
        if (*s1 == (unsigned char)c) {
            check = 1;
            break;
        }
        s1++;
    }
    if (check != 1) {
        s1 = S21_NULL;
    }
    return (void*)s1;
}

int s21_memcmp(const void *s1, const void *s2, s21_size_t n) {
    unsigned char *str1 = (unsigned char *)s1;
    unsigned char *str2 = (unsigned char *)s2;
    s21_size_t i = 0;
    int flag = 0;
    int num = 0;

    while (i < n) {
        if (str1[i] != str2[i] && flag != 1) {
            num = str1[i] - str2[i];
            flag = 1;
        }
        i++;
    }
    return (flag == 1 ? num : 0);
}

void* s21_memcpy(void* s, const void* src, s21_size_t n) {
    unsigned char* s1;
    unsigned char* src1;
    s1 = (unsigned char*) s;
    src1 = (unsigned char*)src;

    for (; n > 0; n--) {
        *s1 = *src1;
        s1++;
        src1++;
    }
    return (s);
}

void* s21_memmove(void* s, const void* src, s21_size_t n) {
    unsigned char* s1;
    unsigned char* src1;
    s1 = (unsigned char*)s;
    src1  = (unsigned char*)src;
    if (s > src) {
        while (n--) {
            s1[n] = src1[n];
        }
    } else if (s < src) {
        while (n--) {
            *s1++ = *src1++;
        }
    }
    return(s);
}

void *s21_memset(void *s, int c, s21_size_t n) {
    unsigned char *b = (unsigned char*)s;
    for (s21_size_t i = 0; i < n; i++) {
        *b = c;
        b++;
    }
    return(s);
}

char* s21_strcat(char* dest, const char* src) {
    char* s = dest;
    s21_size_t n = s21_strlen(dest);

    for (s21_size_t i = n; i < n + s21_strlen(src); i++) {
        dest[i] = src[i - n];
    }
    return s;
}

char* s21_strchr(const char* s, int ch) {
    char* str = (char*)s;
    int flag = 0;
    do {
        if (*str == ch) {
            flag = 1;
            break;
        }
    } while (*str++);
    return (flag == 1 ? str : S21_NULL);
}

int s21_strcmp(const char *data1, const char *data2) {
    int result = 0;
    for (s21_size_t i = 0; i < s21_strlen(data1) || i < s21_strlen(data2); ++i) {
        if (data1[i] == data2[i]) {
            continue;
        } else if (data1[i] > data2[i]) {
            result = data1[i] - data2[i];
            break;
        } else {
            result = data1[i] - data2[i];
            break;
        }
    }
    return result;
}

char* s21_strcpy(char *copy, const char *data) {
    char *addres = copy;
    while (*data != '\0') {
        *copy++ = *data++;
    }
    *copy = '\0';
    return addres;
}

s21_size_t s21_strcspn(const char *s, const char *charset) {
    s21_size_t sum = 0;
    s21_size_t check = 0;

    for (s21_size_t i = 0; i < s21_strlen(charset); i++) {
        if (s[0] == charset[i]) {
            check++;
        }
    }
    if (check == 0) {
        char* start = (char*)charset;
        while (*s != '\0') {
            while (*charset != '\0') {
                if (*s == *charset) {
                    check++;
                    break;
                }
                charset++;
            }
            charset = start;
            if (check > 0) {
                break;
            } else {
                sum++;
            }
            s++;
        }
    }
    return sum;
}

char *s21_strerror(int num) {
    static char buf[1024] = {'\0'};
    #if __APPLE__
    if (num >= 0 && num <= 106) {
        char *s21_errno[] = {
            [0] = "Undefined error: 0",
            [1] = "Operation not permitted",
            [2] = "No such file or directory",
            [3] = "No such process",
            [4] = "Interrupted system call",
            [5] = "Input/output error",
            [6] = "Device not configured",
            [7] = "Argument list too long",
            [8] = "Exec format error",
            [9] = "Bad file descriptor",
            [10] = "No child processes",
            [11] = "Resource deadlock avoided",
            [12] = "Cannot allocate memory",
            [13] = "Permission denied",
            [14] = "Bad address",
            [15] = "Block device required",
            [16] = "Resource busy",
            [17] = "File exists",
            [18] = "Cross-device link",
            [19] = "Operation not supported by device",
            [20] = "Not a directory",
            [21] = "Is a directory",
            [22] = "Invalid argument",
            [23] = "Too many open files in system",
            [24] = "Too many open files",
            [25] = "Inappropriate ioctl for device",
            [26] = "Text file busy",
            [27] = "File too large",
            [28] = "No space left on device",
            [29] = "Illegal seek",
            [30] = "Read-only file system",
            [31] = "Too many links",
            [32] = "Broken pipe",
            [33] = "Numerical argument out of domain",
            [34] = "Result too large",
            [35] = "Resource temporarily unavailable",
            [36] = "Operation now in progress",
            [37] = "Operation already in progress",
            [38] = "Socket operation on non-socket",
            [39] = "Destination address required",
            [40] = "Message too long",
            [41] = "Protocol wrong type for socket",
            [42] = "Protocol not available",
            [43] = "Protocol not supported",
            [44] = "Socket type not supported",
            [45] = "Operation not supported",
            [46] = "Protocol family not supported",
            [47] = "Address family not supported by protocol family",
            [48] = "Address already in use",
            [49] = "Can't assign requested address",
            [50] = "Network is down",
            [51] = "Network is unreachable",
            [52] = "Network dropped connection on reset",
            [53] = "Software caused connection abort",
            [54] = "Connection reset by peer",
            [55] = "No buffer space available",
            [56] = "Socket is already connected",
            [57] = "Socket is not connected",
            [58] = "Can't send after socket shutdown",
            [59] = "Too many references: can't splice",
            [60] = "Operation timed out",
            [61] = "Connection refused",
            [62] = "Too many levels of symbolic links",
            [63] = "File name too long",
            [64] = "Host is down",
            [65] = "No route to host",
            [66] = "Directory not empty",
            [67] = "Too many processes",
            [68] = "Too many users",
            [69] = "Disc quota exceeded",
            [70] = "Stale NFS file handle",
            [71] = "Too many levels of remote in path",
            [72] = "RPC struct is bad",
            [73] = "RPC version wrong",
            [74] = "RPC prog. not avail",
            [75] = "Program version wrong",
            [76] = "Bad procedure for program",
            [77] = "No locks available",
            [78] = "Function not implemented",
            [79] = "Inappropriate file type or format",
            [80] = "Authentication error",
            [81] = "Need authenticator",
            [82] = "Device power is off",
            [83] = "Device error",
            [84] = "Value too large to be stored in data type",
            [85] = "Bad executable (or shared library)",
            [86] = "Bad CPU type in executable",
            [87] = "Shared library version mismatch",
            [88] = "Malformed Mach-o file",
            [89] = "Operation canceled",
            [90] = "Identifier removed",
            [91] = "No message of desired type",
            [92] = "Illegal byte sequence",
            [93] = "Attribute not found",
            [94] = "Bad message",
            [95] = "EMULTIHOP (Reserved)",
            [96] = "No message available on STREAM",
            [97] = "ENOLINK (Reserved)",
            [98] = "No STREAM resources",
            [99] = "Not a STREAM",
            [100] = "Protocol error",
            [101] = "STREAM ioctl timeout",
            [102] = "Operation not supported on socket",
            [103] = "Policy not found",
            [104] = "State not recoverable",
            [105] = "Previous owner died",
            [106] = "Interface output queue is full"
        };
        s21_strcpy(buf, s21_errno[num]);
    } else {
        s21_sprintf(buf, "Unknown error: %d", num);
    }
    #endif  // __APPLE__
    #if __linux__
    if (num >= 0 && num <= 133) {
        char *s21_errno[] = {
            "Success",
            "Operation not permitted",
            "No such file or directory",
            "No such process",
            "Interrupted system call",
            "Input/output error",
            "No such device or address",
            "Argument list too long"
            "Exec format error",
            "Bad file descriptor",
            "No child processes",
            "Resource temporarily unavailable",
            "Cannot allocate memory",
            "Permission denied",
            "Bad address",
            "Block device required",
            "Device or resource busy",
            "File exists",
            "Invalid cross-device link",
            "No such device",
            "Not a directory",
            "Is a directory",
            "Invalid argument",
            "Too many open files in system",
            "Too many open files",
            "Inappropriate ioctl for device",
            "Text file busy",
            "File too large",
            "No space left on device",
            "Illegal seek",
            "Read-only file system",
            "Too many links",
            "Broken pipe",
            "Numerical argument out of domain",
            "Numerical result out of range",
            "Resource deadlock avoided",
            "File name too long",
            "No locks available",
            "Function not implemented",
            "Directory not empty",
            "Too many levels of symbolic links",
            "Unknown error 41",
            "No message of desired type",
            "Identifier removed",
            "Channel number out of range",
            "Level 2 not synchronized",
            "Level 3 halted",
            "Level 3 reset",
            "Link number out of range",
            "Protocol driver not attached",
            "No CSI structure available",
            "Level 2 halted",
            "Invalid exchange",
            "Invalid request descriptor",
            "Exchange full",
            "No anode",
            "Invalid request code",
            "Invalid slot",
            "Unknown error 58",
            "Bad font file format",
            "Device not a stream",
            "No data available",
            "Timer expired",
            "Out of streams resources",
            "Machine is not on the network",
            "Package not installed",
            "Object is remote",
            "Link has been severed",
            "Advertise error",
            "Srmount error",
            "Communication error on send",
            "Protocol error",
            "Multihop attempted",
            "RFS specific error",
            "Bad message",
            "Value too large for defined data type",
            "Name not unique on network",
            "File descriptor in bad state",
            "Remote address changed",
            "Can not access a needed shared library",
            "Accessing a corrupted shared library",
            ".lib section in a.out corrupted",
            "Attempting to link in too many shared libraries",
            "Cannot exec a shared library directly",
            "Invalid or incomplete multibyte or wide character",
            "Interrupted system call should be restarted",
            "Streams pipe error",
            "Too many users",
            "Socket operation on non-socket",
            "Destination address required",
            "Message too long",
            "Protocol wrong type for socket",
            "Protocol not available",
            "Protocol not supported",
            "Socket type not supported",
            "Operation not supported",
            "Protocol family not supported",
            "Address family not supported by protocol",
            "Address already in use",
            "Cannot assign requested address",
            "Network is down",
            "Network is unreachable",
            "Network dropped connection on reset",
            "Software caused connection abort",
            "Connection reset by peer",
            "No buffer space available",
            "Transport endpoint is already connected",
            "Transport endpoint is not connected",
            "Cannot send after transport endpoint shutdown",
            "Too many references: cannot splice",
            "Connection timed out",
            "Connection refused",
            "Host is down",
            "No route to host",
            "Operation already in progress",
            "Operation now in progress",
            "Stale file handle",
            "Structure needs cleaning",
            "Not a XENIX named type file",
            "No XENIX semaphores available",
            "Is a named type file",
            "Remote I/O error",
            "Disk quota exceeded",
            "No medium found",
            "Wrong medium type",
            "Operation canceled",
            "Required key not available",
            "Key has expired",
            "Key has been revoked",
            "Key was rejected by service",
            "Owner died",
            "State not recoverable",
            "Operation not possible due to RF-kill",
            "Memory page has hardware error"
        };
        s21_strcpy(buf, s21_errno[num]);
    } else {
        s21_sprintf(buf, "Unkown error %d", num);
    }
    #endif  // __linux__
    return buf;
}

s21_size_t s21_strlen(const char *s) {
    s21_size_t i = 0;
    while (*s) {
        i++;
        s++;
    }
    return i;
}

char* s21_strncat(char* dest, const char* src, s21_size_t t) {
    if (t > 0) {
        char* s = dest;
        dest += s21_strlen(s);
        while (t || *src != '\0') {
            *dest = *src;
            dest++; src++;
            *dest = '\0';
            t--;
        }
        dest = s;
    }
    return dest;
}

int s21_strncmp(const char *data1, const char *data2, s21_size_t n) {
    int result = 0;
    for (s21_size_t i = 0; i < n; ++i) {
        if (data1[i] == data2[i]) {
            continue;
        } else if (data1[i] > data2[i]) {
            result = data1[i] - data2[i];
            break;
        } else {
            result = data1[i] - data2[i];
            break;
        }
    }
    return result;
}

char* s21_strncpy(char *copy, const char *data, s21_size_t n) {
    char *addres = copy;
    while (*data != '\0' && n--) {
        *copy++ = *data++;
    }
    // addres[s21_strlen(addres)] = 0;
    return addres;
}

char* s21_strpbrk(const char *str1, const char *str2) {
    char *str = S21_NULL;
    if (str1 || str2) {
        while (*str1) {
            if (s21_strchr(str2, *str1)) {
                str = (char*)str1;
                break;
            }
            str1++;
        }
    }
    return str;
}

char* s21_strrchr(const char* s, int ch) {
    char *isCharFind = S21_NULL;
    if (s != S21_NULL) {
        do {
            if ( *s == (char)ch ) {
                isCharFind = (char*)s;
            }
        } while (*s++);
    }
    return isCharFind;
}

s21_size_t s21_strspn(const char *s, const char *charset) {
    s21_size_t sum = 0;
    s21_size_t check = 0;

    for (s21_size_t i = 0; i < s21_strlen(charset); i++) {
        if (s[0] == charset[i]) {
            check++;
        }
    }
    if (check > 0) {
        for (s21_size_t i = 0; i < s21_strlen(s); i++) {
            check = 0;
            for (s21_size_t j = 0; j < s21_strlen(charset); j++) {
                if (s[i] == charset[j]) {
                    check++;
                    sum++;
                    break;
                }
            }
            if (check == 0) {
                break;
            }
        }
    }

    return sum;
}

char* s21_strstr(const char* str1, const char* str2) {
    char* res = S21_NULL;
    if (str1 != S21_NULL) {
        if (s21_strlen(str2) == 0 || str2 == str1) {
            res = (char*)str1;
        } else {
            res = (char*)str1;
            int flag = -1;
            s21_size_t n = 0;
            for (s21_size_t i = 0; i < s21_strlen(str1); i++) {
                for (s21_size_t j = 0; j < s21_strlen(str2); j++) {
                    if (str1[i + j] == str2[j]) {
                        n++;
                    } else {
                        n = 0;
                        flag = -1;
                        break;
                    }
                    if (n == s21_strlen(str2)) {
                        n = i;
                        i = s21_strlen(str1);
                        flag = 1;
                        break;
                    }
                }
            }
            if (n == 0 && flag == -1) {
                res = S21_NULL;
            } else {
                while (n) {
                    res++;
                    n--;
                }
            }
        }
    }
    return res;
}

char *s21_strtok(char *str, const char *delim) {
  static char *result = S21_NULL;
  if (str) {
    result = str;
    while (*result && s21_strchr(delim, *result))
      *result++ = '\0';
  }
  if (result != S21_NULL) {
    if (*result != '\0') {
      str = result;
      while (*result && !s21_strchr(delim, *result))
        ++result;
      while (*result && s21_strchr(delim, *result))
        *result++ = '\0';
      } else {
        str = S21_NULL;
      }
    } else {
    str = S21_NULL;
  }
  return str;
}

void *s21_to_upper(const char *str) {
    char *upper = (char*)str;
    if (str == S21_NULL || *str == '\0') {
        upper = S21_NULL;
    } else {
        do {
            if (*upper >= 'a' && *upper <= 'z') {
                *upper -= 32;
            }
        } while (*upper++);
    }
    return (char*)upper - s21_strlen(str) - 1;
}

void *s21_to_lower(const char *str) {
    char *lower = (char*)str;
    if (str == S21_NULL || *str == '\n') {
        lower = S21_NULL;
    } else {
        do {
            if (*lower >= 'A' && *lower <= 'Z') {
                *lower += 32;
            }
        } while (*lower++);
    }
    return (char*)lower - s21_strlen(str) - 1;
}

void *s21_insert(const char *src, const char *str, s21_size_t start_index) {
    char *q = calloc(1024, s21_strlen(src) + s21_strlen(str));
    int  n = start_index;
    if (q == NULL || s21_strlen(src) == '\0' || q == 0 || n < 0
    || start_index > (s21_strlen(str) + s21_strlen(src))) {
        free(q);
        q = NULL;
    } else {
        char *str1 = (char*) str;
        char *src1 = (char*) src;
        for (s21_size_t i = 0; i < start_index; i++) {
            q[i] = src1[i];
        }
        for (s21_size_t i = 0; i < s21_strlen(str1); i++) {
            q[start_index++] = str1[i];
        }
        for (s21_size_t i = n; i < s21_strlen(src1); i++) {
            q[start_index++] = src1[i];
        }
    }
    return (q);
}

void *s21_trim(const char *src, const char *trim_chars) {
    char *newstr = (char*)src;
    s21_size_t src_length = s21_strlen(newstr);
    char *res = S21_NULL;
    if (src == S21_NULL || trim_chars == S21_NULL || *src == '\0') {
        res = S21_NULL;
    } else if (s21_strlen(src) == 0) {
        res = "\0";
    } else if (s21_strlen(trim_chars) == 0) {
        s21_size_t seek_sym_left = s21_strspn(newstr, " ");
        s21_reverse(newstr);
        s21_size_t seek_sym_right = s21_strspn(newstr, " ");
        s21_reverse(newstr);
        res = (char*)calloc(src_length - seek_sym_left - seek_sym_right, 1024);
        for (s21_size_t i = seek_sym_left; i < src_length - seek_sym_right; i++) {
            res[i - seek_sym_left] = newstr[i];
        }
    } else {
        s21_size_t seek_sym_left = s21_strspn(newstr, trim_chars);
        if (seek_sym_left == src_length) {
            res = (char*)calloc(src_length + 6, 1024);
            res = "";
        } else {
            s21_reverse(newstr);
            s21_size_t seek_sym_right = s21_strspn(newstr, trim_chars);
            s21_reverse(newstr);
            res = (char*)calloc(src_length - seek_sym_left - seek_sym_right, 1024);
            for (s21_size_t i = seek_sym_left; i < src_length - seek_sym_right; i++) {
                res[i - seek_sym_left] = newstr[i];
            }
        }
    }
    return res;
}
