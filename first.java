// import java.util.*;

// public class first{
//     public static void main(String args[]){

//     //System.out.println("gaurav rai");
//     ArrayList<String>first=new ArrayList<String>();
//     first.add("gaurav");
//     first.add("singh");
//     first.add("rai");
//     System.out.println("ArrayList:" + first);
//     }

// }
import java.util.*;

public class first {
    public static void main(String args[])
    {
    ArrayList<String>first=new ArrayList<String>(){
    {
    add("gaurav");
    add("kumar");
    add("rai");
    }
};
    System.out.println("ArrayList: " +first);
}
}