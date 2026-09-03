int lengthOfLastWord(char* s) {
int count = 0;
int n = strlen(s);
for (int i = n - 1 ; i >= 0 ; i--){
    if (s[i] != ' '){
        count = count + 1 ;
    }
    else if(count > 0 ){
        break ;
    }
}
printf("%d", count );
return count ;
}