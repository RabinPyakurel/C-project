#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// functions declaration
void temperature();
void mass();
void length();
void time();
void energy();
void storage();
void angle();
int option; // global variable

int main()
{
    int type;
    while(1)
    {
        printf("\n\nUNIT CONVERTER!\n\n");
        printf("Following are Topic of conversion:\n\n");
        printf("1.Temperature\n2.Mass\n3.Length\n4.Time\n5.Energy\n6.Storage\n7.angle\n8.Exit\n");
        printf("\nPlease enter option: ");
        scanf("%d", &type);
        system("cls");

        switch (type)
        {
        case 1:
        {
            printf("Welcome to Temperature Converter!\n\n");
            printf("Please choose type of conversion from following lists: \n\n");
            printf("1. Farenheit to Celsius.\n");
            printf("2. Farenheit to Kelvin.\n");
            printf("3. Celsius to Farenheit.\n");
            printf("4. Celsius to Kelvin.\n");
            printf("5. Kelvin to Farenheit.\n");
            printf("6. Kelvin to Celsius.\n");
            printf("7. Return\n");
            printf("8. Exit\n\n");
            temperature(); // function call
            break;
        }
        case 2:
        {

            printf("Welcome to Mass Converter!\n\n");
            printf("Please choose type of conversion from following lists: \n\n");
            printf("1. Gram to Kilogram.\n");
            printf("2. Gram to Tonne.\n");
            printf("3. Kilogram to Gram.\n");
            printf("4. Kilogram to Tonne.\n");
            printf("5. Kilogram to Pound.\n");
            printf("6. Pound to Kilogram.\n");
            printf("7. Tonne to Gram.\n");
            printf("8. Tonne to Kilogram.\n");
            printf("9. Return\n");
            printf("10. Exit\n\n");
            mass();
            break;
        }
        case 3:
        {

            printf("Welcome to Length Converter!\n\n");
            printf("Please choose type of conversion from following lists: \n\n");
            printf("1. Centimeter to Meter.\n");
            printf("2. Centimeter to Kilometer.\n");
            printf("3. Meter to Centimeter.\n");
            printf("4. Meter to Kilometer.\n");
            printf("5. Kilometer to Centimeter.\n");
            printf("6. Kilometer to Meter.\n");
            printf("7. Return\n");
            printf("8. Exit\n\n");
            length();
            break;
        }
        case 4:
        {

            printf("Welcome to Time Converter!\n\n");
            printf("Please choose type of conversion from following lists: \n\n");
            printf("1. Second to Minute.\n");
            printf("2. Second to Hours.\n");
            printf("3. Minute to Second.\n");
            printf("4. Minute to Hour.\n");
            printf("5. Hour to Second.\n");
            printf("6. Hour to Minute.\n");
            printf("7. Return\n");
            printf("8. Exit\n\n");
            time();
            break;
        }
        case 5:
        {

            printf("Welcome to Energy Converter!\n\n");
            printf("Please choose type of conversion from following lists: \n\n");
            printf("1. Gram Calorie to Kilocalorie.\n");
            printf("2. Gram Calorie to Joule.\n");
            printf("3. Joule to Kilojoule.\n");
            printf("4. Joule to Gram calorie.\n");
            printf("5. kilocalorie to Gram Calorie.\n");
            printf("6. Kilocalorie to Joule.\n");
            printf("7. Return\n");
            printf("8. Exit\n\n");
            energy();
            break;
        }
        case 6:
        {

            printf("Welcome to Digital Storage Converter(in Binary)!\n\n");
            printf("Please choose type of conversion from following lists:\n\n");
            printf("1. Bit to Byte.\n");
            printf("2. Byte to Bit.\n");
            printf("3. Byte to Kilobyte.\n");
            printf("4. Kilobyte to Byte.\n");
            printf("5. Kilobyte to Megabyte.\n");
            printf("6. Megabyte to Kilobyte.\n");
            printf("7. Megabyte to Gigabyte.\n");
            printf("8. Gigabyte to Megabyte.\n");
            printf("9. Gigabyte to Terabyte.\n");
            printf("10. Terabyte to Gigabyte.\n");
            printf("11. Terabyte to Megabyte.\n");
            printf("12. Return\n");
            printf("13. Exit\n\n");
            storage();
            break;
        }
        case 7:
        {

            printf("Welcome to Angle Converter!\n\n");
            printf("Please choose type of conversion from following lists: \n\n");
            printf("1. Radian to Degree.\n");
            printf("2. Degree to Radian.\n");
            printf("3. Return\n");
            printf("4. Exit\n\n");
            angle();
            break;
        }
        case 8:
        {
            exit(0);
        }
        default:
            printf("Please enter a correct option.\n");
        }
    } 
}

// function definition
void temperature()
{
    float farenheit, celsius, kelvin;
    printf("Please enter option: ");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
    {
        printf("\nEnter value of temperature in degree farenheit: ");
        scanf("%f", &farenheit);
        celsius = (farenheit - 32.0) * (5.0 / 9.0);
        printf("\n%.2f degree fahrenheit = %.2f degree celsius.\n", farenheit, celsius);
        printf("Enter any key to continue:");
        getch();
        system("cls");
        break;
    }
    case 2:
    {
        printf("\nEnter value of temperature in degree farenheit: ");
        scanf("%f", &farenheit);
        kelvin = ((farenheit - 32.0) * (5.0 / 9.0)) + 273.15;
        printf("\n%.2f degree fahrenheit = %.2f kelvin.\n", farenheit, kelvin);
        printf("Enter any key to continue:");
        getch();
        system("cls");
        break;
    }
    case 3:
    {
        printf("\nEnter value of temperature in degree celsius: ");
        scanf("%f", &celsius);
        farenheit = (9.0 / 5.0) * celsius + 32;
        printf("\n%.2f degree celsius = %.2f farenheit .\n", celsius, farenheit);
        printf("Enter any key to continue:");
        getch();
        system("cls");
        break;
    }
    case 4:
    {
        printf("\nEnter value of temperature in degree celsius: ");
        scanf("%f", &celsius);
        kelvin = celsius + 273.15;
        printf("\n%.2f degree celsius = %.2f kelvin.\n", celsius, kelvin);
        printf("Enter any key to continue:");
        getch();
        system("cls");
        break;
    }
    case 5:
    {
        printf("\nEnter value of temperature in kelvin: ");
        scanf("%f", &kelvin);
        farenheit = ((9.0 / 5.0) * (kelvin - 273.15)) + 32;
        printf("\n%.2f kelvin = %.2f farenheit.\n", kelvin, farenheit);
        printf("Enter any key to continue:");
        getch();
        system("cls");
        break;
    }
    case 6:
    {
        printf("\nEnter value of temperature in kelvin: ");
        scanf("%f", &kelvin);
        celsius = 273.15 - kelvin;
        printf("\n%.2f kelvin = %.2f celcius.\n", kelvin, celsius);
        printf("Enter any key to continue:");
        getch();
        system("cls");
        break;
    }
    case 7:
    {
        system("cls");
        main();
        break;
    }
    case 8:
    {
        exit(0);
    }
    default:
        printf("Please enter a correct option.\n");
    }
}
void mass()
{
    float gram, kilogram, tonne, pound;
    printf("Please enter option:");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
    {
        printf("\nEnter value of mass in gram: ");
        scanf("%f", &gram);
        kilogram = gram / 1000;
        printf("\n%.2f g = %.4f kgs.\n", gram, kilogram);
        printf("Enter any key to continue:");
        getch();
        system("cls");
        break;
    }
    case 2:
    {
        printf("\nEnter value of mass in gram: ");
        scanf("%f", &gram);
        tonne = gram * 1E-6;
        printf("\n%.2f g = %f t.\n", gram, tonne);
        printf("Enter any key to continue:");
        getch();
        system("cls");
        break;
    }
    case 3:
    {
        printf("\nEnter value of mass in kg: ");
        scanf("%f", &kilogram);
        gram = kilogram * 1000;
        printf("\n%.2f kgs = %.2f g.\n", kilogram, gram);
        printf("Enter any key to continue:");
        getch();
        system("cls");
        break;
    }
    case 4:
    {
        printf("\nEnter value of mass in kg: ");
        scanf("%f", &kilogram);
        tonne = kilogram / 1000;
        printf("\n%.2f kgs = %.4f t.\n", kilogram, tonne);
        printf("Enter any key to continue:");
        getch();
        system("cls");
        break;
    }
    case 5:
    {
        printf("\nEnter value of mass in kg: ");
        scanf("%f", &kilogram);
        pound = kilogram * 2.20462;
        printf("\n%.2f kgs = %.2f lb.\n", kilogram, pound);
        printf("Enter any key to continue:");
        getch();
        system("cls");
        break;
    }
    case 6:
    {
        printf("\nEnter value of mass in pound: ");
        scanf("%f", &pound);
        kilogram = pound / 2.20462;
        printf("\n%.2f lb = %.4f kgs.\n", pound, kilogram);
        printf("Enter any key to continue:");
        getch();
        system("cls");
        break;
    }
    case 7:
    {
        printf("\nEnter value of mass in tonne: ");
        scanf("%f", &tonne);
        gram = tonne * 1E+6;
        printf("\n%.2f t = %.2f g.\n", tonne, gram);
        printf("Enter any key to continue:");
        getch();
        system("cls");
        break;
    }
    case 8:
    {
        printf("\nEnter value of mass in tonne: ");
        scanf("%f", &tonne);
        kilogram = tonne * 1000;
        printf("\n%.2f t = %.2f kgs.\n", tonne, kilogram);
        printf("Enter any key to continue:");
        getch();
        system("cls");
        break;
    }
    case 9:
    {
        system("cls");
        main();
        break;
    }
    case 10:
    {
        exit(0);
    }
    default:
        printf("Please enter a correct option.\n");
    }
}
void length()
{
    float centimeter, meter, kilometer;
    printf("Please enter option:");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
    {
        printf("\nEnter value of length in centimeter: ");
        scanf("%f", &centimeter);
        meter = centimeter / 100;
        printf("\n%.2f cm = %.2f m.\n", centimeter, meter);
        printf("Enter any key to continue:");
        getch();
        system("cls");
        break;
    }
    case 2:
    {
        printf("\nEnter value of length in centimeter: ");
        scanf("%f", &centimeter);
        kilometer = centimeter * 1E-5;
        printf("\n%.2f cm = %f km.\n", centimeter, kilometer);
        printf("Enter any key to continue:");
        getch();
        system("cls");
        break;
    }
    case 3:
    {
        printf("\nEnter value of length in meter: ");
        scanf("%f", &meter);
        centimeter = meter * 100;
        printf("\n%.2f m = %.2f cm .\n", meter, centimeter);
        printf("Enter any key to continue:");
        getch();
        system("cls");
        break;
    }
    case 4:
    {
        printf("\nEnter value of length in meter: ");
        scanf("%f", &meter);
        kilometer = meter / 1000;
        printf("\n%.2f m = %.4f km.\n", meter, kilometer);
        printf("Enter any key to continue:");
        getch();
        system("cls");
        break;
    }
    case 5:
    {
        printf("\nEnter value of length in kilometer: ");
        scanf("%f", &kilometer);
        centimeter = kilometer * 1E+5;
        printf("\n%.2f km = %.2f cm.\n", kilometer, centimeter);
        printf("Enter any key to continue:");
        getch();
        system("cls");
        break;
    }
    case 6:
    {
        printf("\nEnter value of length in kilometer: ");
        scanf("%f", &kilometer);
        meter = kilometer * 1000;
        printf("\n%.2f km = %.2f m.\n", kilometer, meter);
        printf("Enter any key to continue:");
        getch();
        system("cls");
        break;
    }
    case 7:
    {
        system("cls");
        main();
        break;
    }
    case 8:
    {
        exit(0);
    }
    default:
        printf("Please enter a correct option.\n");
    }
}
void time()
{
    float minute, second, hour;
    printf("Please enter option:");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
    {
        printf("\nEnter time in seconds: ");
        scanf("%f", &second);
        minute = second / 60;
        printf("\n%.0f sec = %.4f min.\n", second, minute);
        printf("Enter any key to continue:");
        getch();
        system("cls");
        break;
    }
    case 2:
    {
        printf("\nEnter time in second: ");
        scanf("%f", &second);
        hour = second / 3600;
        printf("\n%.0f sec = %f h.\n", second, hour);
        printf("Enter any key to continue:");
        getch();
        system("cls");
        break;
    }
    case 3:
    {
        printf("\nEnter time in minute: ");
        scanf("%f", &minute);
        second = minute * 60;
        printf("\n%.0f min = %.2f sec .\n", minute, second);
        printf("Enter any key to continue:");
        getch();
        system("cls");
        break;
    }
    case 4:
    {
        printf("\nEnter time in minute: ");
        scanf("%f", &minute);
        hour = minute / 60;
        printf("\n%.0f min = %.4f h.\n", minute, hour);
        printf("Enter any key to continue:");
        getch();
        system("cls");
        break;
    }
    case 5:
    {
        printf("\nEnter time in hour: ");
        scanf("%f", &hour);
        second = hour * 3600;
        printf("\n%.0f h = %.2f sec.\n", hour, second);
        printf("Enter any key to continue:");
        getch();
        system("cls");
        break;
    }
    case 6:
    {
        printf("\nEnter time in hour: ");
        scanf("%f", &hour);
        minute = hour * 60;
        printf("\n%.0f h = %.2f min.\n", hour, minute);
        printf("Enter any key to continue:");
        getch();
        system("cls");
        break;
    }
    case 7:
    {
        system("cls");
        main();
        break;
    }
    case 8:
    {
        exit(0);
    }
    default:
        printf("Please enter a correct option.\n");
    }
}
void energy()
{
    float gram_calorie, kilocalorie, joule, kilojoule;
    printf("Please enter option:");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
    {
        printf("\nEnter energy in Gram Calorie: ");
        scanf("%f", &gram_calorie);
        kilocalorie = gram_calorie / 1000;
        printf("\n%.2f cal = %.4f kcal.\n", gram_calorie, kilocalorie);
        printf("Enter any key to continue:");
        getch();
        system("cls");
        break;
    }
    case 2:
    {
        printf("\nEnter enegry in Gram Calorie: ");
        scanf("%f", &gram_calorie);
        joule = gram_calorie * 4.184;
        printf("\n%.2f cal = %.2f joules.\n", gram_calorie, joule);
        printf("Enter any key to continue:");
        getch();
        system("cls");
        break;
    }
    case 3:
    {
        printf("\nEnter energy in Joule: ");
        scanf("%f", &joule);
        kilojoule = joule / 1000;
        printf("\n%.2f joule = %.4f kilojoule.\n", joule, kilojoule);
        printf("Enter any key to continue:");
        getch();
        system("cls");
        break;
    }
    case 4:
    {
        printf("\nEnter energy in Joule: ");
        scanf("%f", &joule);
        gram_calorie = joule / 4.184;
        printf("\n%.2f joule = %.4f cal.\n", joule, gram_calorie);
        printf("Enter any key to continue:");
        getch();
        system("cls");
        break;
    }
    case 5:
    {
        printf("\nEnter energy in kilocalorie: ");
        scanf("%f", &kilocalorie);
        gram_calorie = kilocalorie * 1000;
        printf("\n%.2f kcal = %.2f cal.\n", kilocalorie, gram_calorie);
        printf("Enter any key to continue:");
        getch();
        system("cls");
        break;
    }
    case 6:
    {
        printf("\nEnter energy in kilocalorie: ");
        scanf("%f", &kilocalorie);
        joule = kilocalorie * 4184;
        printf("\n%.2f kcal = %.2f joules.\n", kilocalorie, joule);
        printf("Enter any key to continue:");
        getch();
        system("cls");
        break;
    }
    case 7:
    {
        system("cls");
        main();
        break;
    }
    case 8:
    {
        exit(0);
    }

    default:
        printf("Please enter a correct option.\n");
    }
}
void storage()
{
    float bit, byte, kilobyte, megabyte, gigabyte, terabyte;
    printf("Please enter option:");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
    {
        printf("\nEnter Digital storage capacity in bit: ");
        scanf("%f", &bit);
        byte = bit / 8;
        printf("\n%.2f b = %.4f B.\n", bit, byte);
        printf("Enter any key to continue:");
        getch();
        system("cls");
        break;
    }
    case 2:
    {
        printf("\nEnter Digital storage capacity in byte: ");
        scanf("%f", &byte);
        bit = byte * 8;
        printf("\n%.2f B = %.2f b.\n", byte, bit);
        printf("Enter any key to continue:");
        getch();
        system("cls");
        break;
    }
    case 3:
    {
        printf("\nEnter Digital storage capacity in byte: ");
        scanf("%f", &byte);
        kilobyte = byte / 1024;
        printf("\n%.2f B = %f KB.\n", byte, kilobyte);
        printf("Enter any key to continue:");
        getch();
        system("cls");
        break;
    }
    case 4:
    {
        printf("\nEnter Digital storage capacity in Kilobyte: ");
        scanf("%f", &kilobyte);
        byte = kilobyte * 1024;
        printf("\n%.2f KB = %.2f B.\n", kilobyte, byte);
        printf("Enter any key to continue:");
        getch();
        system("cls");
        break;
    }
    case 5:
    {
        printf("\nEnter Digital storage capacity in Kilobyte: ");
        scanf("%f", &kilobyte);
        megabyte = kilobyte / 1024;
        printf("\n%.2f KB = %f MB.\n", kilobyte, megabyte);
        printf("Enter any key to continue:");
        getch();
        system("cls");
        break;
    }
    case 6:
    {
        printf("\nEnter Digital storage capacity in Megabyte: ");
        scanf("%f", &megabyte);
        kilobyte = megabyte * 1024;
        printf("\n%.2f MB = %.2f KB.\n", megabyte, kilobyte);
        printf("Enter any key to continue:");
        getch();
        system("cls");
        break;
    }
    case 7:
    {
        printf("\nEnter Digital storage capacity in Megabyte: ");
        scanf("%f", &megabyte);
        gigabyte = megabyte / 1024;
        printf("\n%.2f MB = %f GB.\n", megabyte, gigabyte);
        printf("Enter any key to continue:");
        getch();
        system("cls");
        break;
    }
    case 8:
    {
        printf("\nEnter Digital storage capacity in Gigabyte: ");
        scanf("%f", &gigabyte);
        megabyte = gigabyte * 1024;
        printf("\n%.2f GB = %.2f MB.\n", gigabyte, megabyte);
        printf("Enter any key to continue:");
        getch();
        system("cls");
        break;
    }
    case 9:
    {
        printf("\nEnter Digital storage capacity in Gigabyte: ");
        scanf("%f", &gigabyte);
        terabyte = gigabyte / 1024;
        printf("\n%.2f GB = %f TB.\n", gigabyte, terabyte);
        printf("Enter any key to continue:");
        getch();
        system("cls");
        break;
    }
    case 10:
    {
        printf("\nEnter Digital storage capacity in Terabyte: ");
        scanf("%f", &terabyte);
        gigabyte = terabyte * 1024;
        printf("\n%.2f TB = %.2f GB.\n", terabyte, gigabyte);
        printf("Enter any key to continue:");
        getch();
        system("cls");
        break;
    }
    case 11:
    {
        printf("\nEnter Digital storage capacity in Terabyte: ");
        scanf("%f", &terabyte);
        megabyte = terabyte * 1024 * 1024;
        printf("\n%.2f TB = %.2f MB.\n", terabyte, megabyte);
        printf("Enter any key to continue:");
        getch();
        system("cls");
        break;
    }
    case 12:
    {
        system("cls");
        main();
        break;
    }
    case 13:
    {
        exit(0);
    }
    default:
        printf("Please enter a correct option.\n");
    }
}
void angle()
{
    float radian, degree, pi = 3.14159265358979323846f;
    printf("Please enter option:");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
    {
        printf("\nEnter angle in radian: ");
        scanf("%f", &radian);
        degree = radian * (180 / pi);
        printf("\n%.2f rad = %.2f degree.\n", radian, degree);
        printf("Enter any key to continue:");
        getch();
        system("cls");
        break;
    }
    case 2:
    {
        printf("\nEnter angle in degree: ");
        scanf("%f", &degree);
        radian = degree * (pi / 180);
        printf("\n%.4f degree = %.4f rad.\n", degree, radian);
        break;
    }
    case 3:
    {
        system("cls");
        main();
        break;
    }
    case 4:
    {
        exit(0);
    }
    default:
        printf("Please enter a correct option.\n");
    }
}
