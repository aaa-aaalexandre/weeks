#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Define a structure to hold each record
struct StudentData {
    string NISN;
    string Nama;
    int ID;
};

// Comparator function for sorting based on NISN
bool compareByNISN(const StudentData &a, const StudentData &b) {
    return a.NISN < b.NISN;
}

// Binary search function to find the entry by NISN
int binarySearch(const vector<StudentData> &data, const string &targetNISN) {
    int low = 0;
    int high = data.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (data[mid].NISN == targetNISN) {
            return mid;  // Found the target NISN
        } else if (data[mid].NISN < targetNISN) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;  // NISN not found
}

int main() {
    // Create a vector of StudentData
    vector<StudentData> students = {
        {"9960312699", "Handi Ramadhan", 90},
        {"9963959682", "Rio Alfandra", 55},
        {"9950310962", "Ronaldo Valentino Uneputty", 80},
        {"9970272750", "Achmad Yaumil Fadjri R.", 60},
        {"9970293945", "Alivia Rahma Pramesti", 70},
        {"9952382180", "Ari Lutfianto", 65},
        {"9965653989", "Arief Budiman", 60},
    };

    // Sort the vector by NISN
    sort(students.begin(), students.end(), compareByNISN);

    // Perform binary search for NISN
    string targetNISN = "9950310962"; 
    int index = binarySearch(students, targetNISN);

    if (index != -1) {
        cout << "Found student with NISN " << targetNISN << ":\n";
        cout << "NISN: " << students[index].NISN << endl;
        cout << "Nama: " << students[index].Nama << endl;
        cout << "Value: " << students[index].ID << endl;
    } else {
        cout << "NISN " << targetNISN << " not found.\n";
    }

    return 0;
}
