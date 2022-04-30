/*

    Java Interfaces : 
        - Interfaces is a references type in Java. Similar to class. 
        - Collection of abstract Methods. A class implements an interfaces thereby inheriting the abstract methods of interfaces. 
        - Defaults methods static methods and nested types. 
    
    Interfaces vs class : 
    - Can't create an instances. 
    - Interfaces doesnot contain any constructures 
    - All methods in abstract 
    - Not extended by class. It is implemented by a class. 
*/

interface Animal {
    public void eat();
    public void travel(); 
}

// implementation of Interfaces: 
public class MammalInt implements Animals {
    
    public void eat() {

    }

    public void travel() {

    }

    public int noOflegs() {

    }

    public static void main(String[] args) {
        MammalInt m = new MammalInt(); 
        m.eat(); 

    }
}

/** ********************************

- checked 



 * / 