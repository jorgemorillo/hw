//jm4144 - HW3 - Q1
//Write a program that computes how much a customer has to pay after purchasing two items.

#include <iostream>
using namespace std;

const double HALFOFF = 0.5;
const double CARD = 0.1;

int
main ()
{
  double itemA, itemB, taxRate, lowItem, highItem, taxes;
  double basePrice, halfPrice, discPrice, totalPrice;
  char clubCard;
  bool cardDis = false;


  cout << "Enter price of first item: ";
  cin >> itemA;
  cout << "Enter price of second item: ";
  cin >> itemB;
  cout << "Does customer hace a club card?(y/n): ";
  cin >> clubCard;
  cout << "Enter tax rate, e.g.r 5.5 for 5.5\% tax: ";
  cin >> taxRate;

  //find the lower price of the items.
  if (itemA > itemB){
      lowItem = itemB;
      highItem = itemA;
    }
  else{
      lowItem = itemA;
      highItem = itemB;
    }

  //club card holder
  if ((clubCard == 'y') || (clubCard == 'Y')){
      cardDis = true;
    }
  else{
      cardDis = false;
    }

  //calc outputs
  taxes = taxRate / 100;

  basePrice = (itemA + itemB);
  halfPrice = (lowItem * HALFOFF) + highItem;
  if (cardDis == true){
      discPrice = halfPrice - (halfPrice * CARD);
    }
  else{
      discPrice = halfPrice;
    }
  totalPrice = (discPrice * taxes) + discPrice;

  //outputs
  cout << "Base price: " << basePrice;
  cout << endl;
  cout << "Price after discounts: " << discPrice;
  cout << endl;
  cout << "Total price: " << totalPrice;

  return 0;
}
