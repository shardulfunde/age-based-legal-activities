#include <stdio.h>

int main(void)
{

    printf("Welcome to the Age-Based Legal Activities Guide in India!\n");
    printf("This program will provide you with information on the legal activities and responsibilities you are eligible for based on your age.\n");
    printf("Simply enter your age when prompted, and you'll receive a list of activities you can legally engage in according to Indian laws.\n");
    printf("Please note that the information provided is a general guideline and may vary by state or jurisdiction. Always consult official sources for the most accurate and up-to-date information.\n\n");

    int age;
    printf("type your age below\n");

    scanf("%d", &age);
    if (age < 18)
    {
        printf("Go and do your homework lil bro");
    }

    if (age >= 18)
    {
        printf("**Voting**: You can register to vote in elections\n");
        printf("**Marriage**(female): You can marry without parental consent, although age requirements vary by state.\n");
        printf("**Signing Contracts**: You can enter into legally binding contracts.\n");
        printf("**Driving**: You can obtain a driver's license\n");
        printf("**Bank Accounts**: You can open bank accounts and manage finances independently.\n");
        printf("**Employment**: You can work in any job without restrictions\n");
        printf("**Tattoos and Piercings**: You can get tattoos and piercings without parental consent.\n");
        printf("**Alcohol Consumption**: Legal drinking age varies by state, typically between 18 and 25.\n");
        printf("**Gambling**: Some states allow gambling at 18, while others have different age limits.\n");
        printf("**Travel**: You can travel independently without parental consent.\n");
        printf("**Buying Property**: You can purchase property and real estate.\n");
        printf("**Taking Legal Action**: You can file lawsuits or represent yourself in court.\n");
        printf("**Jury Duty**: You can be called for jury service.\n");
    }

    if (age >= 19)
    {
        printf("**Driving Heavy Vehicles**: Eligible to apply for licenses for heavier vehicles.\n");
    }

    if (age >= 21)
    {
        printf("**Marriage**(male): You can marry without parental consent, although age requirements vary by state.\n");
        printf("**Apply for a Commercial Driving License**: You can apply for a commercial driving license to drive commercial vehicles.\n");
        printf("**Buy Alcohol (in certain states)**: Some states like Maharashtra allow you to legally purchase alcohol from age 21 (varies by state).\n");
        printf("**Apply for a Weapons License**: You can apply for an arms license, subject to conditions and approvals.\n");
        printf("**Become a Pilot**: You can obtain a commercial pilot's license, provided you meet other criteria.\n");
        printf("**Buy Real Estate**: You can legally buy or sell property independently.\n");
        printf("**Open a Credit Card Account Independently**: While you can apply for a credit card at 18, it's more commonly provided at 21 without a co-signer.\n");
    }

    if (age >= 25)
    {
        printf(" **Adoption**: You can adopt a child in many jurisdictions, though some states allow it at 21.\n");
        printf("**Insurance**: Generally, lower car insurance rates may be available after turning 25.\n");
        printf("**More Responsibility in Financial Matters**: Eligibility for certain financial products and investments may improve.\n");
        printf("**Become a Member of Parliament (Lok Sabha)**: You can contest elections for the Lok Sabha (House of the People).\n");
        printf("**Adopt a Child (if unmarried)**: As per adoption laws, unmarried men and women can adopt a child at the age of 25.\n");
    }

    if (age >= 30)
    {
        printf("**Loan Eligibility**: Higher loan limits and options might become available, reflecting stability and creditworthiness.\n");
        printf("**Government Positions**: Some government jobs have age limits that start at 30.\n");
    }

    if (age >= 60)
    {
        printf(" **Senior Citizen Benefits**: You may start receiving benefits and discounts as a senior citizen in various services.\n");
    }
    printf("                                       \n");
    printf("Legal Disclaimer:\n");
    printf("The information provided regarding age-related legal activities is based on general laws in India as of the current year. However, these laws can vary significantly by state or jurisdiction and are subject to change.\n");
    printf("This program does not constitute legal advice and should not be relied upon as an authoritative source. Always consult official legal documents, government resources, or seek professional legal counsel for up-to-date and accurate information on any legal matters.\n");

    return 0;
}
