// Title: Energy Drink
//Name of programmer: Ebram Azer
//Requirments: A soft drink company recently surveyed 16, 500 of its customers and found that approximately 15 percent of those 
// surveyed purchase one or more energy drinks per week.Of those customers who purchase energy drinks, approximately 58 percent of them 
// prefer citrus - flavored energy drinks.Write a program that displays the following :
//• The approximate number of customers in the survey who purchase one or more energy drinks per week.
//• The approximate number of customers in the survey who prefer citrus - flavored energy drinks.
 
#include <iostream>

int main() {
    // Given data
    const int totalCustomers = 16500;
    const double percentPurchasingEnergyDrinks = 0.15; // 15%
    const double percentPreferringCitrus = 0.58; // 58%

    // Calculate the number of customers purchasing energy drinks
    int customersPurchasingEnergyDrinks = totalCustomers * percentPurchasingEnergyDrinks;

    // Calculate the number of customers preferring citrus-flavored energy drinks
    int customersPreferringCitrus = customersPurchasingEnergyDrinks * percentPreferringCitrus;

    // Display the results
    std::cout << "Approximate number of customers who purchase one or more energy drinks per week: "
        << customersPurchasingEnergyDrinks << std::endl;

    std::cout << "Approximate number of customers who prefer citrus-flavored energy drinks: "
        << customersPreferringCitrus << std::endl;

    return 0;
}

