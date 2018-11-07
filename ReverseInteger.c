
int reverse(int x)
{
    int sign,temp1;
    int multiple = 0;
    int answer = 0;
    if(x == 0){
        return 0;
    }
    else if(x > 0){
        sign = 1;
    }
    else{
        sign = -1;
    }
    
    while(x != 0){
        temp1 = x%10;
        if(answer > INT_MAX/10 || answer < INT_MIN/10){
            return 0;
        }
        answer = answer *10 +temp1;
        x =(x- temp1)/10; 
    }
    return sign*abs(answer);
}
