#include <stdio.h>
#include <string.h>
 
long long charToNum(char c) {
    if (c >= '0' && c <= '9') {
        return c - '0';
    } else {
        return c - 'A' + 10;
    }
}
 
char numToChar(long long num) {
    if (num >= 0 && num <= 9) {
        return num + '0';
    } else {
        return num + 'A' - 10;
    }
}
 
long long convertToDecimal(char* value, long long base) {
    long long size = strlen(value);
    long long power = 1;
    long long result = 0;
 
    for (int i = size - 1; i >= 0; i--) {
        result += charToNum(value[i]) * power;
        power *= base;
    }
 
    return result;
}
 
char* convertFromDecimal(char res[], long long base, long long number) {
    int index = 0;
    while (number > 0) {
        res[index++] = numToChar(number % base);
        number /= base;
    }
 
    res[index] = '\0';
    strrev(res); // Note: strrev is not standard in C, so you may need to implement it or use an alternative
 
    return res;
}
 
int main() {
    int conversionType;
    scanf("%d", &conversionType);
 
    if (conversionType == 1) {
        char value[35];
        scanf("%s", value);
        long long base;
        scanf("%lld", &base);
        printf("%lld", convertToDecimal(value, base));
    } else {
        long long number, base;
        scanf("%lld %lld", &number, &base);
        char result[100];
        printf("%s", convertFromDecimal(result, base, number));
    }
 
    return 0;
}
