// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    if(a!=b){
        if(a>b){gcd(a-b, b);}
        else {gcd(a, b-a);}
    }
    else return a;
}
