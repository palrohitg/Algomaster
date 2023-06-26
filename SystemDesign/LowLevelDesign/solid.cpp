#include<bits/stdc++.h>
using namespace std;


// Once Reasons to changes 
class Marker {
        string name; 
        string color;  
        int year;
        int price; 
    public:
        Marker(string name, string color, int year, int price) {
                this->name = name; 
                this->color = color; 
                this->year = year;
                this->price = price;
        } 
}; 

// Invoice has a Marker 

class Invoice {
    private:
        Marker marker; 
        int quantity;
    
    public:
        
        Invoice(Marker marker, int quantity) {
            this->marker = marker; 
            this->quantity = quantity;
        }

        int calculateTotal() {
            int price = ((marker->price) * this->quantity);
            return price; 
        }

        void printInVoice() {
            // print the Invoice
        }

        void SaveToDB() {
            //
        }
}; 


class InvoiceDao {
    Invoice invoice; 
    public:
        InvoiceDao(Invoice invoice) {
            this->invoice = invoice; 
        }

        void saveToDB() {

        }
}; 


class InvoicePrinter{
    Invoice invoice; 
    public:
        InvoicePrinter(Invoice invoice) {
            this->invoice = invoice; 
        }

        void PrintInVoice() {

        }

}; 



/*
    - Open for Extension but closed for Modification
    - The things which is already live and tested then closed why we are going to modification
*/

class InvoiceDao {
    Invoice invoice; 
    public:
        InvoiceDao(Invoice invoice) {
            this->invoice = invoice; 
        }

        void saveToDB() {

        }

        // Error chances hai esme this will be prompt to bug here 
        void saveToFile() {

        }
}; 

interface InvoiceDao {
    void save(Invoice invoice);
}

class DataBaseInvoiceDoa implements InvoiceDoa {
    @overide 
    public void save() {
        // DB 
    }
}

class FileInvoiceDoa() {
    @overide 
    void save() {
        // DB 
    }
}

/*
    Liskov Subsitution Principle 
    If Class B is a subtype of class A, then we should be able to replace 
    object A with B witout breaking the behaviour of the program. 
*/

interface Bike {
    void turnOnEngine(); 
    void accelerate(); 
}

class MotorCycle implements Bike {
    public :
    void turnOnEngine(); 
}

class Bicycle implements Bike {
    public :
    void turnOnEngine() { 
        // throw the exception here 
    }
}


/*
    Interface Segmented Principle: 
    - Interfaces Should be such, that client should not implement
    Unnecessary function they don't need to implement                        
*/

interface ResturantEmployee {
    void washDishes(); 
    void serveCustomers(); 
    void cookFood(); 
}


interface WaiterInterface {
    void serveCustomer(); 
    void takeOrder(); 
}

interface ChefInterface {
    void cookFood(); 
    void decideMenu(); 
}

/*
 - Dependencies Inversion Principle 
 - Class Should Depend on Interface rather than concrete classes
*/

class MacBook {
    private final WiredKeyboard keyboard; 
    private final WiredMouse mouse; 

    public MacBook() {
        keyboard = new WiredBoard(); 
        mouse = new WiredMouse(); 
    }
}


class Macbook() {
    private final Keyboard keyboard; 
    private final Mouse mouse; 
    public Macbook(keyboard , mouse)
}