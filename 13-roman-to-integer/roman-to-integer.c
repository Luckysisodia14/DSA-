#include <stdio.h>
#include <string.h> // Required for strlen()

int roman(char c){
    switch (c){
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default : return 0; // Fixed typo: 'defalut' to 'default'
    }
}

int romanToInt(char* s) {
    int len = strlen(s); // Fixed: sizeof(s) only gives the size of the pointer (usually 4 or 8)
    int total = 0;
    
    for (int i = 0; i < len - 1; i++){
        int current = roman(s[i]);
        int next = roman(s[i + 1]);
        
        if (current < next){
            total = total - current; // Fixed: Use 'current', not the character 's[i]'
        } else {
            total = total + current; // Fixed: Use 'current', not the character 's[i]'
        }
    }
    
    if (len > 0){
        total += roman(s[len - 1]);
    }
    return total;
}
