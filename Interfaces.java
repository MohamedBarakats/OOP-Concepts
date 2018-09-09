import java.io.*; 
  

interface Parent 
{ 
    final int age = 10; 
  
    // abstract function 
    void display(); 
} 
  
// A class implements interface. 
class Child implements Parent 
{ 
    
    public void display() 
    { 
        System.out.println("Running!"); 
    } 
  
    public static void main (String[] args) 
    { 
        Child C = new Child();
      C.display();
        System.out.println(age); 
    } 
} 