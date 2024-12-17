#include <iostream>
#include <string>
using namespace std;

// Node structure for the linked list
struct Node {
    string NRP;
    string Nama;
    string Kelas;
    Node* next;
};

Node* head = NULL; 

Node* createNode(string nrp, string nama, string kelas) {
    Node* newNode = new Node();
    newNode->NRP = nrp;
    newNode->Nama = nama;
    newNode->Kelas = kelas;
    newNode->next = NULL;
    return newNode;
}

void push(string nrp, string nama, string kelas) {
    Node* newNode = createNode(nrp, nama, kelas);
    newNode->next = head;
    head = newNode;
}

void update(string nrp, string newNama, string newKelas) {
    Node* current = head;
    while (current != NULL && current->NRP != nrp) {
        current = current->next;
    }
    if (current == NULL) {
        cout << "Data with NRP " << nrp << " not found.\n";
        return;
    }
    current->Nama = newNama;
    current->Kelas = newKelas;
    cout << "Data with NRP " << nrp << " updated.\n";
}

void tampil() {
    if (head == NULL) {
        cout << "List is empty!\n";
        return;
    }
    Node* temp = head;
    while (temp != NULL) {
        cout << "NRP: " << temp->NRP << ", Nama: " << temp->Nama << ", Kelas: " << temp->Kelas << endl;
        temp = temp->next;
    }
}

void hapus(string nrp) {
    if (head == NULL) {
        cout << "List is empty!\n";
        return;
    }
    if (head->NRP == nrp) {
        Node* temp = head;
        head = head->next;
        delete temp;
        cout << "Data with NRP " << nrp << " deleted.\n";
        return;
    }
    Node* current = head;
    while (current->next != NULL && current->next->NRP != nrp) {
        current = current->next;
    }
    if (current->next == NULL) {
        cout << "Data with NRP " << nrp << " not found.\n";
        return;
    }
    Node* temp = current->next;
    current->next = current->next->next;
    delete temp;
    cout << "Data with NRP " << nrp << " deleted.\n";
}

int main() {
    int pilihan;
    string nrp, nama, kelas;

    do {
        cout << "\n\tMENU\t\n\n";
        cout << "1. Push (Masukkan Data Diri)\n";
        cout << "2. Update Data Diri\n";
        cout << "3. Tampilkan\n";
        cout << "4. Hapus\n";
        cout << "5. Keluar\n";
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukan NRP anda : "; 
				cin >> nrp;
                cout << "Masukan Nama anda : "; 
				cin >> nama;
                cout << "Masukan Kelas anda : "; 
				cin >> kelas;
                push(nrp, nama, kelas);
                break;
            case 2:
                cout << "Masukan NRP yang ingin diupdate : "; 
				cin >> nrp;
                cout << "Masukan Nama anda : "; 
				cin >> nama;
                cout << "Masukan Kelas anda: "; 
				cin >> kelas;
                update(nrp, nama, kelas);
                break;
            case 3:
                tampil();
                break;
            case 4:
                cout << "Masukan NRP yang anda ingin dihapus : "; 
				cin >> nrp;
                hapus(nrp);
                break;
            case 5:
                cout << "Keluar dari Program.\n";
                break;
            default:
                cout << "PILIHAN TIDAK VALID!\n";
        }
    } while (pilihan != 5);

    return 0;
}
