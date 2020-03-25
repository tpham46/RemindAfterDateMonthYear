// This Program is to review after a specific date what you learn
// after 1 day , 3 day , 7 day, 14 days, 1 month, a year, 5 year and 10 year
// The key to remember is to do it again and again within a specific interval
// so the moment you forget it. You remember what you forget

// Simple Explanation:
// I'm gonna get the date, month, and year and then I will use the output file. To write
// out into the filename that contain date,month,year Example : 20/11/2019 will be (20112019.txt)
// Every day, Im gonna open that txt day file and see what can I do to review!

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Return if year is leap year or not.


int main()
{
    std::time_t t = std::time(0);   // get time now
    std::tm* now = std::localtime(&t); // Just a reference variable for use to get the year, month and date
    std::cout << "Today is ";
    std::cout << (now->tm_year + 1900) << '-'
         << (now->tm_mon + 1) << '-'
         <<  now->tm_mday
         << "\n \n";

    int day = now->tm_mday;
    int month = now->tm_mon + 1;
    int year = now->tm_year + 1900;

    int oneDay,threeDay;
    int oneWeek, twoWeek, oneMonth, threeMonth, sixMonth, oneYear, threeYears, tenYears;
    int month1, month3, month7, month14;
    oneDay = day + 1;
    threeDay = day + 3;
    oneWeek = day + 7;
    twoWeek = day + 14;

    oneMonth = month+1;
    threeMonth = month + 3;
    sixMonth = month + 6;
    oneYear = year + 1;
    threeYears = year + 3;
    tenYears = year + 10;

        int yearTemp1 = year;
        int yearTemp2 = year;
        int yearTemp3 = year;
        int yearTemp4 = year;

    if(month >= 1 && month <= 11){

        //Here, we check for each month. If day + is greater, then increment the month and use modulus to get the date
        if(month == 1){
            month1 = 1; month3 = 1; month7 = 1; month14 = 1;
            if(oneDay > 31){
                month1++;
                oneDay %= 31;
            }
             if(threeDay > 31){
                month3++;
                threeDay %= 31;
            }
             if(oneWeek > 31){
                month7++;
                oneWeek %= 31;
            }
             if(twoWeek > 31){
                month14++;
                twoWeek %= 31;
            }






        }
        else if(month == 2){
            month1 = 2; month3 = 2; month7 = 2; month14 = 2;
            if(oneDay > 29){
                month1++;
                oneDay %= 29;
            }
             if(threeDay > 29){
                month3++;
                threeDay %= 29;
            }
             if(oneWeek > 29){
                month7++;
                oneWeek %= 29;
            }
             if(twoWeek > 29){
                month14++;
                twoWeek %= 29;
            }


        }
        else if(month == 3){
            month1 = 3; month3 = 3; month7 = 3; month14 = 3;
            if(oneDay > 31){
                month1++;
                oneDay %= 31;
            }
             if(threeDay > 31){
                month3++;
                threeDay %= 31;
            }
             if(oneWeek > 31){
                month7++;
                oneWeek %= 31;
            }
             if(twoWeek > 31){
                month14++;
                twoWeek %= 31;
            }


        }
        else if(month == 4){
            month1 = 4; month3 = 4; month7 = 4; month14 = 4;
            if(oneDay > 30){
                month1++;
                oneDay %= 30;
            }
             if(threeDay > 30){
                month3++;
                threeDay %= 30;
            }
             if(oneWeek > 30){
                month7++;
                oneWeek %= 30;
            }
             if(twoWeek > 30){
                month14++;
                twoWeek %= 30;
            }





        }
        else if(month == 5){
            month1 = 5; month3 = 5; month7 = 5; month14 = 5;
            if(oneDay > 31){
                month1++;
                oneDay %= 31;
            }
             if(threeDay > 31){
                month3++;
                threeDay %= 31;
            }
             if(oneWeek > 31){
                month7++;
                oneWeek %= 31;
            }
             if(twoWeek > 31){
                month14++;
                twoWeek %= 31;
            }
            {

            }


        }
        else if(month == 6){
            month1 = 6; month3 = 6; month7 = 6; month14 = 6;
            if(oneDay > 30){
                month1++;
                oneDay %= 30;

            }
             if(threeDay > 30){
                month3++;
                threeDay %= 30;
            }
             if(oneWeek > 30){
                month7++;
                oneWeek %= 30;

            }
             if(twoWeek > 30){
                month14++;
                 twoWeek %= 30;
            }

        }
        else if(month == 7){
            month1 = 7; month3 = 7; month7 = 7; month14 = 7;

            if(oneDay > 31){
                month1++;
                oneDay %= 31;
            }
             if(threeDay > 31){
                month3++;
                threeDay %= 31;
            }
             if(oneWeek > 31){
                month7++;
                oneWeek %= 31;
            }
             if(twoWeek > 31){
                month14++;
                twoWeek %= 31;
            }





        }
        else if(month == 8){
            month1 = 8; month3 = 8; month7 = 8; month14 = 8;

            if(oneDay > 31){
                month1++;
                oneDay %= 31;
            }
             if(threeDay > 31){
                month3++;
                threeDay %= 31;
            }
             if(oneWeek > 31){
                month7++;
                oneWeek %= 31;
            }
             if(twoWeek > 31){
                month14++;
                twoWeek %= 31;
            }


        }
        else if(month == 9){
            month1 = 9; month3 = 9; month7 = 9; month14 = 9;

            if(oneDay > 30){
                month1++;
                oneDay %= 30;

            }
             if(threeDay > 30){
                month3++;
                threeDay %= 30;
            }
             if(oneWeek > 30){
                month7++;
                oneWeek %= 30;
            }
             if(twoWeek > 30){
                month14++;
                twoWeek %= 30;
            }


        }
        else if(month == 10){
            month1 = 10; month3 = 10; month7 = 10; month14 = 10;

            if(oneDay > 31){
                month1++;
                oneDay %= 31;
            }
             if(threeDay > 31){
                month3++;
                threeDay %= 31;
            }
             if(oneWeek > 31){
                month7++;
                oneWeek %= 31;
            }
             if(twoWeek > 31){
                month14++;
                twoWeek %= 31;
            }

        }
        // month 11
        else{
            month1 = 11; month3 = 11; month7 = 11; month14 = 11;

            if(oneDay > 30){
                month1++;
                oneDay %= 30;
            }
             if(threeDay > 30){
                month3++;
                threeDay %= 30;
            }
             if(oneWeek > 30){
                month7++;
                oneWeek %= 30;
            }
             if(twoWeek > 30){
                month14++;
                twoWeek %= 30;
            }



        }
    }
    else{
        month1 = 12; month3 = 12; month7 = 12; month14 = 12;

            if(oneDay > 31){
                month1 = 1;
                 yearTemp1 += 1;
                 oneDay %= 31;
            }
             if(threeDay > 31){
                month3 = 1;
                 yearTemp2 += 1;
                  threeDay %= 31;
            }
             if(oneWeek > 31){
                month7 = 1;
                 yearTemp3 += 1;
                 oneWeek %= 31;
            }
             if(twoWeek > 31){
                month14 = 1;
                 yearTemp4 += year + 1;
                  twoWeek %= 31;
            }


    }

    stringstream ss; // Current date
    stringstream ss1; // 1
    stringstream ss2; // 3
    stringstream ss3; // 7
    stringstream ss4; //14
    stringstream ss5; // 1 m
    stringstream ss6; // 3 m
    stringstream ss7; // 6 m
    stringstream ss8; // 1 y
    stringstream ss9; // 3 y
    stringstream ss10; // 10 y

    // variable for the year of onemonth, threeMonth, and sixMonth
    int y1 = ((oneMonth > 12)? (year+1) : year);
    int y2 = ((threeMonth > 12)? (year+1) : year);
    int y3 = ((sixMonth  > 12)? (year+1) : year);

    oneMonth = ((oneMonth > 12)? (oneMonth % 12) : oneMonth);
    threeMonth = ((threeMonth > 12)? (threeMonth % 12) : threeMonth);
    sixMonth = ((sixMonth > 12)? (sixMonth % 12) : sixMonth);

    // The string stream to convert and put day month year into a string
    ss << day << "." << month << "." << year;
    ss1 << oneDay << "." << month1  << "." << yearTemp1; // 1
    ss2 << threeDay<< "."  << month3 << "." << yearTemp2; // 3
    ss3 << oneWeek << "." << month7 << "." << yearTemp3; // 7
    ss4 << twoWeek << "." << month14 << "." << yearTemp4; // 14

    ss5 << day << "."  << oneMonth << "." << y1; //1 m
    ss6 << day << "." << threeMonth << "." << y2; // 3m
    ss7 << day << "." << sixMonth << "." << y3; // 6 m

    ss8 << day << "." << month << "." << oneYear; // 1 y
    ss9 << day << "." << month << "." << threeYears; // 3 y
    ss10 << day << "." << month << "." << tenYears; // 10y

    string convertSS = ss.str();
    string appendDate = convertSS ;

    string convertSS1 = ss1.str();
    string appendDate1 = convertSS1 ;

    string convertSS2 = ss2.str();
    string appendDate2 = convertSS2 ;

    string convertSS3 = ss3.str();
    string appendDate3 = convertSS3;

    string convertSS4 = ss4.str();
    string appendDate4 = convertSS4 ;

    string convertSS5 = ss5.str();
    string appendDate5 = convertSS5 ;

    string convertSS6 = ss6.str();
    string appendDate6 = convertSS6 ;

    string convertSS7 = ss7.str();
    string appendDate7 = convertSS7 ;

    string convertSS8 = ss8.str();
    string appendDate8 = convertSS8 ;

    string convertSS9 = ss9.str();
    string appendDate9 = convertSS9 ;

    string convertSS10 = ss10.str();
    string appendDate10 = convertSS10 ;



    // Get the date. I'm gonna use the code to get the date online!
    // Get the string
    // Get the output file
    //      while string is not "done", then keep waiting for command line to push on things that you want to review/ things you have done
    //      and possibly need a review
    ofstream Output((appendDate + "txt").c_str(),  ios::app);
    ofstream Output1((appendDate1 + "txt").c_str(),  ios::app);
    ofstream Output3((appendDate2 + "txt").c_str(),  ios::app);
    ofstream Output7((appendDate3 + "txt").c_str(),  ios::app);
    ofstream Output14((appendDate4 + "txt").c_str(),  ios::app);
    ofstream Output30((appendDate5 + "txt").c_str(),  ios::app);
    ofstream Output90((appendDate6 + "txt").c_str(),  ios::app);
    ofstream Output180((appendDate7 + "txt").c_str(),  ios::app);
    ofstream Output360((appendDate8 + "txt").c_str() , ios::app);
    ofstream Output1080((appendDate9 + "txt").c_str(),  ios::app);
    ofstream Output3600((appendDate10 + "txt").c_str(),  ios::app);


    // this function is to convert a stringstream back to normal string

    string workReview;
    while(workReview != "done"){
        if(workReview == "done"){
            break;
        }
        cout << "What have you done that you want to Review Later? \n";
        getline(cin, workReview);
        Output << "Date:  " << appendDate  << " I have done  " << workReview << endl;
        Output1 << "Date: " << appendDate  << " " << workReview << endl;
        Output3 << "Date: " << appendDate  << " "<< workReview << endl;
        Output7 << "Date: " << appendDate  << " "<< workReview << endl;
        Output14 << "Date: " << appendDate  << " "<< workReview << endl;
        Output30 << "Date: " << appendDate  << " "<< workReview << endl;
        Output90 << "Date: " << appendDate  << " "<< workReview << endl;
        Output180 << "Date: " << appendDate  << " "<< workReview << endl;
        Output360 << "Date: " << appendDate  << " "<< workReview << endl;
        Output1080 << "Date: " << appendDate  << " "<< workReview << endl;
        Output3600 << "Date: " << appendDate  << " "<< workReview << endl;
        cout << "All have been added \n\n\n";
    }
     Output.close();
     Output1.close();
     Output3.close();
     Output7.close();
     Output14.close();
     Output30.close();
     Output90.close();
     Output180.close();
     Output360.close();
     Output1080.close();
     Output3600.close();

    return 0;
}
