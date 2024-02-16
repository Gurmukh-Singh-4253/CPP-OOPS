fn GCD(int a,int b){
    if (a%b==0){
        println!("%d",b);
    }
    else{
        GCD(b,a%b);
    }
}

fn main(){
    let a= 1_048_567 ;
    let b= 14_348_907;
    
    GCD(b,a);
}
