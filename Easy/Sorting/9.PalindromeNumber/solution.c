bool isPalindrome(int x) {
    
    if (x < 0) return false; 

    int og = x; 
    long rv = 0; 

    while (x > 0){
        int lastDigit = x%10; 
        rv = rv * 10 + lastDigit;
        x = x/10; 
    }

    if (og != rv){
        return false; 
    }

    return og == rv;
}
