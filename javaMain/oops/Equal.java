public class Equal {
    public int a = 10;
    
    Equal(int a){
        this.a = a;
    }

    boolean isequal(Equal obj){
        if(this.a == obj.a){
            return true;
        }
        else{
            return false;
        }
    }
}
