// https://github.com/imransihab0/capstone24
// capstone project by @imransihab0

#include<stdio.h>
#include <string.h>
#include<stdbool.h>
#include<ctype.h>

#define cout printf
#define cin scanf
#define sz(s) strlen(s)
#define cinString(s) fgets(s, 100, stdin)
#define fl(a, b) for(int i=a; i<b; i++)
#define el printf("\n")

typedef char string[100];

// necessary functions ------- start -------------

// 1. For Wrong Input
int wrongInput(const char *param) {
    cout("\nWrong %s !!!!!!!\n", param);
    cout("1. Enter %s Again\n2. Cancel Regestration.\nEnter: ", param);
    int x; cin("%d", &x);
    getchar();
    return x;
}

// 2. Under Construction
void UnderConstruction() {
    cout("Coming soon...\n");
}

// 3. Congratulations
void conGo() {
    el;
    cout("|--------------------------------------------------|\n");
    cout("|   Congratulations. Account Create Successfully!  |\n");
    cout("|--------------------------------------------------|\n");
    el;
}

// necessary functions ------- END -------------


// all cheking functions ------ start ------------

// fullName--->
    bool isValidName(string s) {
        int length = sz(s);
        for(int i=0; i<length; i++) {
            if(!isalpha(s[i]) && s[i] != ' ') return false;
        }
        return true;
    }
// fullName--->


// phone--->
    bool isValidPhoneNumber(string s) {
        int length = sz(s);
        if(length != 11) { // amader valid phone number 11 digit er
            return false;
        }

        for(int i=0; i<length; i++) {
            if(!isdigit(s[i])) return false;
        }
        return true;
    }
// phone--->


// pin---> <security is important>
    bool isValidPin(string s) {
        return sz(s) == 6;
    }
// pin--->



// all cheking functions ------ END ------------


void reg() {
    string name;
    string phoneNumber;
    string pin;
    string reTypePin;

    cout("Regestration:\n");
    cout("-----------------------------\n");
    
    // Name section -------->

    cout("Enter Full Name: ");
    cinString(name);
    name[strcspn(name, "\n")] = 0;    // Remove newline character from input
    
    while(true) {
        if(isValidName(name)) {
            break;
        } else {
            int ret = wrongInput("Name");
            if(ret == 1) {
                cout("Enter Full Name: ");
                cinString(name);
                name[strcspn(name, "\n")] = 0;
            } else {
                cout("Canceling...\n");
                return;
            }
        }
    }

    // Name section -------->



    // Phone Number section -------->

    cout("Enter Phone Number: ");
    cinString(phoneNumber);
    phoneNumber[strcspn(phoneNumber, "\n")] = 0;    // Remove newline character from input

    while(true) {
        if(isValidPhoneNumber(phoneNumber)) {
            break;
        } else {
            int ret = wrongInput("Phone Number");
            if(ret == 1) {
                cout("Enter Phone Number: ");
                cinString(phoneNumber);
                phoneNumber[strcspn(phoneNumber, "\n")] = 0;
            } else {
                cout("Canceling...\n");
                return;
            }
        }
    }

    // Phone Number section -------->
    

    // PIN section -------->
    
    cout("Enter PIN: ");
    cinString(pin);
    pin[strcspn(pin, "\n")] = 0;    // Remove newline character from input

    while(true) {
        if(isValidPin(pin)) {
            break;
        } else {
            int ret = wrongInput("PIN");
            if(ret == 1) {
                cout("Enter PIN: ");
                cinString(pin);
                pin[strcspn(pin, "\n")] = 0;
            } else {
                cout("Canceling...\n");
                return;
            }
        }
    }

    // reType sectio-->
    cout("Re-type PIN: ");
    cinString(reTypePin);
    reTypePin[strcspn(reTypePin, "\n")] = 0;    // Remove newline character from input

    while(true) {
        if(strcmp(pin, reTypePin) == 0) {
            break;
        } else {
            cout("\nPIN did not matched\n1. Re-enter.\n2. Cancel.\nEnter: ");
            int ret; cin("%d", &ret);
            getchar();
            if(ret == 1) {
                cout("\nEnter PIN Again: ");
                cinString(reTypePin);
                reTypePin[strcspn(reTypePin, "\n")] = 0;
            } else {
                cout("Canceling...\n");
                return;
            }
        }
    }

    // PIN section -------->

    
    // congoooooooooooooooooooooooooo
    conGo();

    // debug:
el;
    cout("Name: %s\n", name); 
    cout("Phone Number: %s\n", phoneNumber); 
    cout("PIN: %s\n", pin); 
    cout("Re-PIN: %s\n", reTypePin); 
    
}

void login() {
    UnderConstruction();
}

int main(){
    
    el;
    cout("-------------"); el;
    cout("|   Bkash   |"); el;
    cout("-------------"); el;
    el;

    int choice;

    while(1) {
        
        cout("Choose:"); el;
        cout("1. Login.\n2. Register.\n3. Cancel.\n");
        cout("Enter choice: ");
        cin("%d", &choice);
        getchar();  // Consume the newline character left in the input buffer

        if(choice == 1) {
            login();
            break;
        } else if(choice == 2) {
            reg();
            break;
        } else if(choice == 3) {
            cout("Programme end....\n");
            break;
        } else {
            cout("Wrong Input. Enter Again...\n");
            continue;
        }

    }
    
return 0;
}