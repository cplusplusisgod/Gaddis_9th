#include "PersonData.h"
#include <algorithm>
#include <iostream>
PersonData::PersonData()
{
  set_firstname(), set_lastname(), set_address(), set_city(), set_state(),
    set_zip(), set_phone();
}

const std::string PersonData::state_abbreviations[] = {
  "AL", "AK", "AZ", "AR", "CA", "CO", "CT", "DE", "FL", "GA", "HI", "ID", "IL",
  "IN", "IA", "KS", "KY", "LA", "ME", "MD", "MA", "MI", "MN", "MS", "MO", "MT",
  "NE", "NV", "NH", "NJ", "NM", "NY", "NC", "ND", "OH", "OK", "OR", "PA", "RI",
  "SC", "SD", "TN", "TX", "UT", "VT", "VA", "WA", "WV", "WI", "WY"
};

const int PersonData::not_valid_codes[] = {
  211, 221, 222, 230, 232, 233, 235, 237, 238, 241, 243, 244, 245, 247, 255,
  257, 258, 259, 261, 265, 266, 271, 273, 275, 277, 280, 282, 285, 286, 287,
  288, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 311, 322, 324,
  328, 329, 333, 335, 338, 342, 344, 348, 349, 350, 353, 355, 356, 357, 358,
  359, 362, 363, 366, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379,
  381, 383, 384, 388, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399, 400,
  411, 420, 421, 422, 426, 427, 429, 433, 436, 439, 444, 446, 449, 451, 452,
  453, 454, 455, 457, 459, 460, 461, 462, 465, 466, 467, 471, 472, 476, 477,
  481, 482, 483, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496,
  497, 498, 499, 511, 536, 537, 560, 565, 568, 576, 583, 611, 621, 624, 625,
  632, 634, 635, 637, 638, 642, 643, 645, 648, 652, 653, 654, 663, 666, 668,
  673, 674, 675, 676, 685, 686, 687, 690, 691, 692, 693, 694, 695, 696, 697,
  698, 699, 722, 723, 728, 729, 733, 735, 736, 738, 739, 741, 744, 745, 746,
  748, 749, 750, 751, 752, 755, 756, 759, 761, 766, 768, 771, 776, 777, 783,
  788, 789, 790, 791, 792, 793, 794, 795, 796, 797, 798, 799, 811, 821, 823,
  824, 826, 827, 834, 836, 837, 841, 842, 846, 851, 852, 853, 861, 871, 874,
  875, 880, 881, 882, 883, 884, 885, 886, 887, 889, 890, 891, 892, 893, 894,
  895, 896, 897, 898, 899, 921, 922, 923, 924, 926, 933, 942, 943, 944, 946,
  953, 955, 957, 958, 960, 961, 962, 963, 964, 965, 966, 967, 968, 969, 974,
  975, 976, 977, 981, 982, 983, 987, 988, 990, 991, 992, 993, 994, 995, 996,
  997, 998, 999
};

// set_last name with no argument
void
PersonData::set_lastname()
{
  std::string l_name;
  bool correct_size;
  bool all_alpha;

  do {
    correct_size = true;
    all_alpha = true;

    l_name.clear();

    std::cout << "Enter Last Name: ";
    std::getline(std::cin, l_name);

    for (char c : l_name) {
      if (!isalpha(c)) {
        std::cout << "Last name may only contain letters.\n";
        all_alpha = false;
        break;
      }
    }

    if (l_name.length() < 1 || l_name.length() > 20) {
      std::cout << "Last name must be between 1 - 20 characters long.\n";
      correct_size = false;
    }

  } while (all_alpha != true || correct_size != true);

  // passed the test/loop now set the member variable to l_name.
  l_name[0] = toupper(l_name[0]);
  LastName = l_name;
}

// check and set lastname with string argument
void
PersonData::set_lastname(std::string l_name)
{

  /* Checks the string the user inputed for l_name. If it fails to past the
  requirments it will trigger the bools to be false. At the end if any of the
  bools are false (the string failed one or more test) then the set_lastname()
  function is called. Which has the same tests word for word, except in a loop
  to continue untill proper input is done. */

  bool correct_size = true;
  bool all_alpha = true;

  for (char c : l_name) {

    if (!isalpha(c)) {
      std::cout << "Last name may only contain letters.\n";
      all_alpha = false;
      break;
    }
  }

  if (l_name.length() < 1 || l_name.length() > 20) {
    std::cout << "Last name must be between 1 - 20 characters long.\n";
    correct_size = false;
  }

  // here if the string failed any of the test, the other set_lastname()
  // function that has a loop is called.
  if (correct_size == false || all_alpha == false) {
    set_lastname();
  } // if the string did pass all the test, then its a valid lastName string.
  else if (correct_size == true && all_alpha == true) {
    l_name[0] = toupper(l_name[0]);
    LastName = l_name;
  }
}

void
PersonData::set_firstname()
{
  std::string f_name;
  bool correct_size;
  bool all_alpha;

  do {
    correct_size = true;
    all_alpha = true;

    f_name.clear();

    std::cout << "Enter First Name: ";
    std::getline(std::cin, f_name);

    for (char c : f_name) {
      if (!isalpha(c)) {
        std::cout << "First name may only contain letters.\n";
        all_alpha = false;
        break;
      }
    }

    if (f_name.length() < 1 || f_name.length() > 20) {
      std::cout << "First name must be between 1 - 20 characters long.\n";
      correct_size = false;
    }

  } while (all_alpha != true || correct_size != true);

  // passed the test/loop now set the member variable to l_name.
  f_name[0] = toupper(f_name[0]);
  FirstName = f_name;
}

// check and set firstname with string argument
void
PersonData::set_firstname(std::string f_name)
{

  /* Checks the string the user inputed for f_name. If it fails to past the
  requirments it will trigger the bools to be false. At the end if any of the
  bools are false (the string failed one or more test) then the set_firstname()
  function is called. Which has the same tests word for word, except in a loop
  to continue untill proper input is done. */

  bool correct_size = true;
  bool all_alpha = true;

  for (char c : f_name) {

    if (!isalpha(c)) {
      std::cout << "first name may only contain letters.\n";
      all_alpha = false;
      break;
    }
  }

  if (f_name.length() < 1 || f_name.length() > 20) {
    std::cout << "First name must be between 1 - 20 characters long.\n";
    correct_size = false;
  }

  // here if the string failed any of the test, the other set_firstname()
  // function that has a loop is called.
  if (correct_size == false || all_alpha == false) {
    set_firstname();
  } // if the string did pass all the test, then its a valid lastName string.
  else if (correct_size == true && all_alpha == true) {
    f_name[0] = toupper(f_name[0]);
    FirstName = f_name;
  }
}

// function to check the address and set it
void
PersonData::set_address()
{
  std::string address;
  bool correct_size;
  bool correct_type;
  do {
    correct_size = true;
    correct_type = true;
    address.clear();
    std::cout << "Enter Address.  (3 - 5 numbers): ";
    std::getline(std::cin, address);

    if (address.length() > 5 || address.length() < 3) {
      std::cout << "Address must be between 3-5 digits.\n";
      correct_size = false;
    }

    for (char c : address) {
      if (!isdigit(c)) {
        std::cout << "Address must only contain digits.\n";
        correct_type = false;
        break;
      }
    }

  } while (correct_size == false || correct_type == false);

  Address = address;
}

void
PersonData::set_address(std::string address)
{
  bool correct_size = true;
  bool correct_type = true;

  if (address.length() > 5 || address.length() < 3) {
    std::cout << "Address must be between 3-5 digits.\n";
    correct_size = false;
  }

  for (char c : address) {
    if (!isdigit(c)) {
      std::cout << "Address must only contain digits.\n";
      correct_type = false;
      break;
    }
  }

  if (correct_size == false || correct_type == false) {
    set_address();
  } else if (correct_size && correct_type) {
    Address = address;
  }
}

void
PersonData::set_city()
{

  std::string city;
  bool correct_size;
  bool correct_type;
  do {
    correct_size = true;
    correct_type = true;
    city.clear();
    std::cout << "Enter City.  (2 - 25 characters): ";
    std::getline(std::cin, city);

    if (city.length() > 25 || city.length() < 2) {
      std::cout << "City must be between 2-25 characters.\n";
      correct_size = false;
    }

    for (char c : city) {
      if (!isalpha(c)) {
        std::cout << "City must only contain letters.\n";
        correct_type = false;
        break;
      }
    }

  } while (correct_size == false || correct_type == false);

  city[0] = toupper(city[0]);
  City = city;
}

void
PersonData::set_city(std::string city)
{
  bool correct_size = true;
  bool correct_type = true;

  if (city.length() > 25 || city.length() < 2) {
    std::cout << "City must be between 2-25 characters.\n";
    correct_size = false;
  }

  for (char c : city) {
    if (!isalpha(c)) {
      std::cout << "City must only contain letters.\n";
      correct_type = false;
      break;
    }
  }

  if (correct_size == false || correct_type == false) {
    set_city();
  } else if (correct_size && correct_type) {
    city[0] = toupper(city[0]);
    City = city;
  }
}

void
PersonData::set_state()
{
  std::string state;
  bool valid = false;

  do {
    valid = false;

    std::cout << "Enter State abbriviation (2 characters): ";
    std::getline(std::cin, state);
    std::transform(state.begin(), state.end(),state.begin(),::toupper); 

    for (std::string s : state_abbreviations) {
      if (s == state) {
        valid = true;
        break;
      }
    }

    if (valid == false) {
      std::cout << "Invalid State abbriviation.\n";
    }
  } while (valid == false);

  State = state;
}

void
PersonData::set_state(std::string state)
{
  bool valid = false;
  // to change the user input 'state' to uppercase for validity testing. (all
  // abbriviations are in caps)
  std::transform(state.begin(), state.end(), state.begin(), ::toupper);

  /*Search the state_abbrevations array which holds all 50 valid abbrivations
  using 's'. If s (which would be one of the index's of the array is a match to
  the user string input 'state' then the input is valid. Then the bool valid is
  changed to true and the loop is ended with break. After a if condition
  occures, if valid is true from previous logic gate then the class's member
  function 'State' is passed the user string 'state' input. State = state.  If
  valid is still false Then the set_state() member function that dosnt take a
  argument is called. Which Promps the user for new input for state and loops
  untill valid input is entered.
  */

  for (std::string s : state_abbreviations) {
    if (s == state) {
      valid = true;
      break;
    }
  }

  if (valid == true) {
    State = state;
  } else if (valid == false) {
    std::cout << "Invalid state abbrivation\n";
    set_state();
  }
}

void
PersonData::set_zip()
{
  bool valid;
  std::string zip;

  do {
    valid = true;

    std::cout << "Enter Zip Code (5 digits): ";
    std::getline(std::cin, zip);

    // check the user input, zip if it contains somthing thats not a digit its
    // not valid.
    for (char c : zip) {
      if (!isdigit(c)) {
        std::cout << "Zip Code can only contain digits.\n";
        valid = false;
        break;
      }
    }
    // all zip codes are 5 digits long.
    if (zip.length() != 5) {
      std::cout << "Zip Code must be 5 digits long.\n";
      valid = false;
    }

    // if it passes the first 2 test, convert it to a digit to see if it falls
    // in a valid range. Ex not 00000
    if (valid == true) {
      int temp_int_zip = std::stoi(zip);
      if (temp_int_zip < 501 || temp_int_zip > 99950) {
        std::cout << "Zip did not fall within a valid range.\n";
        valid = false;
      }
    }

  } while (std::cin.fail() || valid == false);

  Zip = zip;
}

void
PersonData::set_zip(std::string zip)
{

  bool valid = true;

  // check the user input, zip if it contains somthing thats not a digit its
  // not valid.
  for (char c : zip) {
    if (!isdigit(c)) {
      std::cout << "Zip Code can only contain digits.\n";
      valid = false;
      break;
    }
  }
  // all zip codes are 5 digits long.
  if (zip.length() != 5) {
    std::cout << "Zip Code must be 5 digits long.\n";
    valid = false;
  }

  // if it passes the first 2 test, convert it to a digit to see if it falls
  // in a valid range. Ex not 00000
  if (valid) {
    int temp_int_zip = std::stoi(zip);
    if (temp_int_zip < 501 || temp_int_zip > 99950) {
      std::cout << "Zip did not fall within a valid range.\n";
      valid = false;
    }
  }

  if (valid) {
    Zip = zip;
  } else {
    set_zip();
  }
}

void
PersonData::set_phone()
{
  bool valid = true;
  std::string phone;
  std::string area_code;
  int area_code_int;

  do {
    valid = true; // set it to true, if the user input fails a test, its changed
                  // to false.

    std::cout << "Enter Phone Number with Three digit area code.\n";
    std::getline(std::cin, phone);

    // test (1)
    // 3 digit area code + 7 digit phone number, thus it should be 10 digits
    // long.
    if (phone.length() != 10) {
      std::cout << "Invalid phone number size. Must be 10 digits long. With "
                   "first 3 being area code.\n";
      valid = false;
    }

    // test (2)
    // Checks every character in phone to make sure it only contains digits.
    if (valid) {
      for (char c : phone) {
        if (!isdigit(c)) {
          std::cout << "Phone number must only contain digits.\n";
          valid = false;
          break;
        }
      }
    }

    // test (3)
    // Takes the first 3 digits from the phone number inputted (which should be
    // the area code) and appends them to area_code Then it turns converts those
    // 3 characters into int's, to use for more testing.
    if (valid) {
      // Copys the first 3 characters from phone into area_code
      area_code = phone.substr(0, 3);
      // turns the first 3 digits that were taken from phone and put into
      // area_code into int's to test with.
      area_code_int = stoi(area_code);
      // now checks the array of invalid array codes to see if theres a match
      for (int i : not_valid_codes) {
        if (i == area_code_int) {
          std::cout << "Invalid or not in use area code.\n";
          valid = false;
          break;
        }
      }
    }

    // test(4)

    if (valid) {
      if (area_code_int < 201 || area_code_int > 989) {
        std::cout << "Area Code not in a valid Range.\n";
        valid = false;
      }
    }

  } while (std::cin.fail() || valid == false);

  // if it gets here it passed all the test and would seem to be a valid phone
  // number and area code.
  phone.insert(0, "(");
  phone.insert(4, ")");
  phone.insert(8, "-");
  Phone = phone;
}

void
PersonData::set_phone(std::string phone)
{

  bool valid = true;
  std::string area_code;
  int area_code_int;

  // test (1)
  // 3 digit area code + 7 digit phone number, thus it should be 10 digits
  // long.
  if (phone.length() != 10) {
    std::cout << "Invalid phone number size. Must be 10 digits long. With "
                 "first 3 being area code.\n";
    valid = false;
  }

  // test (2)
  // Checks every character in phone to make sure it only contains digits.
  if (valid) {
    for (char c : phone) {
      if (!isdigit(c)) {
        std::cout << "Phone number must only contain digits.\n";
        valid = false;
        break;
      }
    }
  }

    // test (3)
  // Takes the first 3 digits from the phone number inputted (which should be
  // the area code) and appends them to area_code Then it turns converts those
  // 3 characters into int's, to use for more testing.
  if (valid) {
    // Copys the first 3 characters from phone into area_code
    area_code = phone.substr(0, 3);
    // turns the first 3 digits that were taken from phone and put into
    // area_code into int's to test with.
    area_code_int = stoi(area_code);
    // now checks the array of invalid array codes to see if theres a match
    for (int i : not_valid_codes) {
      if (i == area_code_int) {
        std::cout << "Invalid or not in use area code.\n";
        valid = false;
        break;
      }
    }
  }

  //test (4)
  // again if its passed all the previous test, check to see if its in a valid
  // range
  if (valid) {
    if (area_code_int < 201 || area_code_int > 989) {
      std::cout << "Area Code not in a valid Range.\n";
      valid = false;
    }
  }

  // lastly if its passed all the test/logic gates. the bool valid should still
  // be true. So its a valid input. so we insert "()" around the area code and a
  // seperator "-" after the 3rd digit for readability. Then pass it to the
  // member variable "Phone" of the PersonData class.. Else if it wasnt a valid
  // input and valid was triggeed to false will run the set_phone() function
  // that has no argument which promps user for input and does same logic test,
  // but loops untill proper input is entered.
  if (valid) {
    phone.insert(0, "(");
    phone.insert(4, ")");
    phone.insert(8, "-");
    Phone = phone;

  } else {
    set_phone();
  }
}