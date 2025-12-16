#include <iostream>

// Definisikan Node
struct Node {
    int data;
    Node* next;
};

// Deklarasi global Head dan Tail
Node* head = NULL;
Node* tail = NULL;

// Fungsi untuk menyisipkan node di awal (Insert at Start)
void insert(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = head;
    
    if (head == NULL) {
        tail = newNode;
    }
    head = newNode;
    std::cout << "Insert " << data << ", DATA menjadi >> " << data << std::endl;
}

// Fungsi untuk menampilkan semua node (Display all nodes)
void display() {
    Node* temp = head;
    if (temp == NULL) {
        std::cout << "List kosong!" << std::endl;
        return;
    }
    std::cout << "Data dalam list: ";
    while (temp != NULL) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

// Fungsi untuk menghapus node dari awal (Delete node from start)
void deleteItem() {
    if (head == NULL) {
        std::cout << "List kosong, tidak bisa dihapus." << std::endl;
        return;
    }
    
    Node* temp = head;
    int removedData = temp->data;
    
    if (head == tail) {
        head = NULL;
        tail = NULL;
    } else {
        head = head->next;
    }
    
    delete temp;
    std::cout << "Data dihapus: " << removedData << ", link ke " << head << std::endl;
}


// Fungsi Main
int main() {
    // Sisipkan data
    insert(10);
    insert(20);
    display(); // Seharusnya 20 10
    
    insert(30);
    insert(40);
    display(); // Seharusnya 40 30 20 10
    
    // Hapus data
    deleteItem(); // Hapus 40
    display(); // Seharusnya 30 20 10
    
    deleteItem(); // Hapus 30
    display(); // Seharusnya 20 10
    
    return 0;
}