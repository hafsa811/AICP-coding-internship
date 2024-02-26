#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

class AuctionItem {
private:
    string itemNumber;
    string description;
    double reservePrice;
    double currentHighestBid;
    int numberOfBids;

public:
    AuctionItem(string itemNumber, string description, double reservePrice) {
        this->itemNumber = itemNumber;
        this->description = description;
        this->reservePrice = reservePrice;
        this->currentHighestBid = 0;
        this->numberOfBids = 0;
    }

    string getItemNumber() const {
        return itemNumber;
    }

    string getDescription() const {
        return description;
    }

    double getReservePrice() const {
        return reservePrice;
    }

    double getCurrentHighestBid() const {
        return currentHighestBid;
    }

    int getNumberOfBids() const {
        return numberOfBids;
    }

    void placeBid(double bidAmount) {
        if (bidAmount > currentHighestBid) {
            currentHighestBid = bidAmount;
            numberOfBids++;
            cout << "Bid placed successfully." << endl;
        } else {
            cout << "Your bid must be higher than the current highest bid." << endl;
        }
    }
};

class Auction {
private:
    vector<AuctionItem> items;

public:
    void setUpAuction() {
        cout << "Setting up the auction..." << endl;
        int numItems = 0;
        while (numItems < 10) {
            string itemNumber, description;
            double reservePrice;
            cout << "Enter item number: ";
            cin >> itemNumber;
            cout << "Enter item description: ";
            cin.ignore();
            getline(cin, description);
            cout << "Enter reserve price: ";
            cin >> reservePrice;
            items.push_back(AuctionItem(itemNumber, description, reservePrice));
            numItems++;
        }
        cout << "Auction set up successfully with " << numItems << " items." << endl;
    }

    void displayItems() const {
        cout << "Items in Auction:" << endl;
        for (int i = 0; i < items.size(); ++i) {
            cout << "Item Number: " << items[i].getItemNumber() << endl;
            cout << "Description: " << items[i].getDescription() << endl;
            cout << "Reserve Price: $" << fixed << setprecision(2) << items[i].getReservePrice() << endl;
            cout << "Current Highest Bid: $" << fixed << setprecision(2) << items[i].getCurrentHighestBid() << endl;
            cout << "Number of Bids: " << items[i].getNumberOfBids() << endl;
            cout << endl;
        }
    }

    void placeBid() {
        string itemNumber;
        cout << "Enter the item number you want to bid on: ";
        cin >> itemNumber;
        bool found = false;
        for (int i = 0; i < items.size(); ++i) {
            if (items[i].getItemNumber() == itemNumber) {
                found = true;
                cout << "Item found:" << endl;
                cout << "Item Number: " << items[i].getItemNumber() << endl;
                cout << "Description: " << items[i].getDescription() << endl;
                cout << "Current Highest Bid: $" << fixed << setprecision(2) << items[i].getCurrentHighestBid() << endl;
                double bidAmount;
                cout << "Enter your bid amount: $";
                cin >> bidAmount;
                items[i].placeBid(bidAmount);
                break;
            }
        }
        if (!found) {
            cout << "Item not found in the auction." << endl;
        }
    }

    void endAuction() {
        cout << "End of Auction" << endl;
        double totalFee = 0;
        int numItemsSold = 0;
        int numItemsNotMeetReserve = 0;
        int numItemsWithNoBids = 0;
        for (int i = 0; i < items.size(); ++i) {
            if (items[i].getCurrentHighestBid() >= items[i].getReservePrice()) {
                numItemsSold++;
                totalFee += items[i].getCurrentHighestBid() * 0.1;
                cout << "Item " << items[i].getItemNumber() << " sold for $" << fixed << setprecision(2) << items[i].getCurrentHighestBid() << ". Auction company fee: $" << fixed << setprecision(2) << items[i].getCurrentHighestBid() * 0.1 << endl;
            } else {
                numItemsNotMeetReserve++;
                cout << "Item " << items[i].getItemNumber() << " did not meet the reserve price." << endl;
            }
            if (items[i].getNumberOfBids() == 0) {
                numItemsWithNoBids++;
                cout << "Item " << items[i].getItemNumber() << " received no bids." << endl;
            }
        }
        cout << "Total fees from sold items: $" << fixed << setprecision(2) << totalFee << endl;
        cout << "Number of items sold: " << numItemsSold << endl;
        cout << "Number of items that did not meet the reserve price: " << numItemsNotMeetReserve << endl;
        cout << "Number of items with no bids: " << numItemsWithNoBids << endl;
    }
};

int main() {
    Auction auction;
    auction.setUpAuction();

    int choice;
    do {
        cout << "\n1. Display items in auction" << endl;
        cout << "2. Place a bid" << endl;
        cout << "3. End auction" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                auction.displayItems();
                break;
            case 2:
                auction.placeBid();
                break;
            case 3:
                auction.endAuction();
                break;
            case 4:
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }
    } while (choice != 4);

    return 0;
}
