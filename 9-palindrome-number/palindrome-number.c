bool isPalindrome(int x) {
    int temp = x ;
    long long  rev = 0 ;
    if (temp < 0){
        return false;
    }else{
    while(temp != 0 ){
        int last = temp % 10 ;
        rev = rev * 10 + last ;
        temp = temp  / 10 ;
        }
    }
    if (x == rev ){
        return true ;
    }else{
        return false ;
    }

}