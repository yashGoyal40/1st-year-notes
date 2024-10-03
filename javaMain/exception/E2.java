
public class E2 {
    static String b;
    public static void main(String[] args) {
        
        try{
            System.out.println(b.length());
        }
        catch(NullPointerException e){
            System.out.println("b not innitailised");
        }
        finally{
            System.out.println("happy coding");
        }
    }
    
}

/*
                          Throwable
                         |
             /------------------------\
          Exception                  Error
             |                          |
      Checked Exceptions         Unchecked Exceptions
                                       |
                               RuntimeException
 */

/*
 * NullPointerException
 * ArithmaticException (0/0)
 * ArrayIndexOutOfBoundsException
 * IOException etc 
 */
