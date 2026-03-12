void reverseString(char* str) {
    int len = strlen(str);
    char temp;

    for(int i = 0; i < len / 2; i++) {
        temp = *(str + i);
        *(str + i) = *(str + len - 1 - i);
        *(str + len - 1 - i) = temp;
    }
}